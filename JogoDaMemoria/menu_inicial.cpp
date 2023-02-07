#include "menu_inicial.hpp"
#include "draw_leaderboard_table.hpp"

bool menu_inicial(bool& done, bool& redraw, const Interface interface[], ALLEGRO_EVENT_QUEUE* event_queue) {
	bool done_menu = false;
	int x, y;

	while (!done_menu) {
		ALLEGRO_EVENT event;
		al_wait_for_event(event_queue, &event);
		
		x = event.mouse.x;
		y = event.mouse.y;

		switch (event.type) {
			case ALLEGRO_EVENT_DISPLAY_CLOSE:
				done_menu = true;
				done = true;
				return done;
			case ALLEGRO_EVENT_MOUSE_BUTTON_UP:
					//PLAY
					if (x > interface[5].x && x < interface[5].x + INTERF_MENU_W && y > interface[5].y && y < interface[5].y + INTERF_MENU_H) {
						done_menu = true;
						return done; //retorna falso pois ele é declarado como falso na função Main.cpp
					}
					//LEADERBOARD
					if (x > interface[7].x && x < interface[7].x + INTERF_MENU_W && y > interface[7].y && y < interface[7].y + INTERF_MENU_H) {
						done = draw_leaderboard_table(redraw, interface, event_queue);
						if (done == true) {
							return done;
						}
					}
					//QUIT
					if (x > interface[8].x && x < interface[8].x + INTERF_MENU_W && y > interface[8].y && y < interface[8].y + INTERF_MENU_H) {
						done = true;
						return done;
					}
				break;
			case ALLEGRO_EVENT_TIMER:
				redraw = true;
				break;
		}
		
		if (redraw && al_is_event_queue_empty(event_queue)) {
			redraw = false;
			al_clear_to_color(al_map_rgb(255, 255, 255));
			for (int i = 5; i < NUM_INTERF - 4; i++) {
				draw_interface(interface[i]);
			}
			al_flip_display();
		}
	}
}