#include "draw_leaderboard_table.hpp"

bool draw_leaderboard_table(bool& redraw, const Interface interface[], ALLEGRO_EVENT_QUEUE* event_queue) {
	bool done_menu = false;
	int x, y;
	char rank[3];
	ALLEGRO_FONT* header_font = al_load_font("arial.ttf", 50, 0);
	ALLEGRO_FONT* body_font = al_load_font("arial.ttf", 30, 0);

	while (!done_menu) {
		ALLEGRO_EVENT event;
		al_wait_for_event(event_queue, &event);

		x = event.mouse.x;
		y = event.mouse.y;

		switch (event.type) {
		case ALLEGRO_EVENT_DISPLAY_CLOSE:
			return true;
		case ALLEGRO_EVENT_MOUSE_BUTTON_UP:
			if (x > interface[12].x && x < interface[12].x + INTERF_MENU_W && y > interface[12].y && y < interface[12].y + INTERF_MENU_H) {
				done_menu = true;
				al_destroy_font(header_font);
				al_destroy_font(body_font);
				return false;
			}
			break;
		case ALLEGRO_EVENT_TIMER:
			redraw = true;
			break;
		}

		if (redraw && al_is_event_queue_empty(event_queue)) {
			redraw = false;
			al_clear_to_color(al_map_rgb(255, 255, 255));
			al_draw_text(header_font, al_map_rgb(0, 0, 0), 705, 50, ALLEGRO_ALIGN_CENTRE, "Player:");
			al_draw_text(header_font, al_map_rgb(0, 0, 0), 1105, 50, ALLEGRO_ALIGN_CENTRE, "Score:");
			
			draw_interface(interface[12]);

			std::vector<Player>players = read_scoreboard();
			
			if (players.size()+1 > 0) {
				for (int i = 1; i < players.size()+1 && i < 11; i++) {
					_itoa_s(i, rank, 10);
					al_draw_textf(body_font, al_map_rgb(0, 0, 0), 380, (i * 60) + 110, ALLEGRO_ALIGN_CENTRE, rank);

					al_draw_rectangle(400, (60 * i) + 100, 990, (60 * i) + 150, al_map_rgb(100, 100, 100), 3);
					al_draw_rectangle(1010, (60 * i) + 100, 1200, (60 * i) + 150, al_map_rgb(100, 100, 100), 3);

					al_draw_textf(body_font, al_map_rgb(0, 0, 0), 450, 110 + i * 60, ALLEGRO_ALIGN_LEFT, players[i-1].playerName.c_str());
					al_draw_textf(body_font, al_map_rgb(0, 0, 0), 1100, 110 + i * 60, ALLEGRO_ALIGN_CENTRE, "%d", players[i - 1].score);
				}
			}

			al_flip_display();
		}
	}
	al_destroy_font(header_font);
	al_destroy_font(body_font);
}