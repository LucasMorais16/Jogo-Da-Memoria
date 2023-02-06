#include "get_player_name.hpp"

std::string get_player_name(ALLEGRO_EVENT_QUEUE *event_queue, std::string nameScoreBoard) {
	bool name_gotten = false;
	ALLEGRO_FONT* name_font = al_load_font("arial.ttf", 50, 0);

	while (!name_gotten) {
		ALLEGRO_EVENT event;
		al_wait_for_event(event_queue, &event);

		al_clear_to_color(al_map_rgb(255, 255, 255));
		al_draw_rectangle(590, 485, 1010, 550, al_map_rgb(100, 100, 100), 3);

		al_draw_textf(name_font, al_map_rgb(0, 0, 0), 800, 200, ALLEGRO_ALIGN_CENTRE, "JOGO DA MEMORIA");
		al_draw_textf(name_font, al_map_rgb(0, 0, 0), 800, 400, ALLEGRO_ALIGN_CENTRE, "Type your name: ");
		al_draw_text(name_font, al_map_rgb(0, 0, 0), 800, 490, ALLEGRO_ALIGN_CENTRE, nameScoreBoard.c_str());

		al_flip_display();

		switch (event.type) {
			case ALLEGRO_EVENT_DISPLAY_CLOSE:
				return "a";
				break;

			case ALLEGRO_EVENT_KEY_DOWN:
				if (event.keyboard.keycode == 67) name_gotten = true;
				if (event.keyboard.keycode == 63) { if (nameScoreBoard.size() != 0) nameScoreBoard.pop_back(); }
				if (nameScoreBoard.size() < 12 && event.keyboard.keycode == 75) nameScoreBoard += "_";
				if (nameScoreBoard.size() < 12 && event.keyboard.keycode >= 1 && event.keyboard.keycode <= 36) nameScoreBoard += al_keycode_to_name(event.keyboard.keycode);

				break;

			case ALLEGRO_EVENT_MOUSE_BUTTON_UP:;

		}
	}
	al_destroy_font(name_font);
	return nameScoreBoard;
}