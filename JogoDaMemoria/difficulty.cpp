#include "difficulty.hpp"

int menu_dificuldades(bool& redraw, const Interface interface[], ALLEGRO_EVENT_QUEUE* event_queue) {
	bool done_menu_difficulty = false;
	int x, y;

	while (!done_menu_difficulty) {
		ALLEGRO_EVENT event;
		al_wait_for_event(event_queue, &event);

		x = event.mouse.x;
		y = event.mouse.y;

		switch (event.type) {
		case ALLEGRO_EVENT_DISPLAY_CLOSE:
			done_menu_difficulty = true;
			return -1;
			break;
		case ALLEGRO_EVENT_MOUSE_BUTTON_UP:
			//EASY
			if (x > interface[9].x && x < interface[9].x + INTERF_DIFFICULTY_W && y > interface[9].y 
				&& y < interface[9].y + INTERF_DIFFICULTY_H) {
				return 0;
			}
			//NORMAL
			if (x > interface[10].x && x < interface[10].x + INTERF_DIFFICULTY_W && y > interface[10].y 
				&& y < interface[10].y + INTERF_DIFFICULTY_H) {
				return 1;
			}
			//MAE DINAH
			if (x > interface[11].x && x < interface[11].x + INTERF_DIFFICULTY_W && y > interface[11].y 
				&& y < interface[11].y + INTERF_DIFFICULTY_H) {
				return 2;
			}

			break;

		case ALLEGRO_EVENT_TIMER:
			redraw = true;
			break;

		}

		if (redraw && al_is_event_queue_empty(event_queue)) {
			redraw = false;
			al_clear_to_color(al_map_rgb(255, 255, 255));
			for (int i = 9; i < NUM_INTERF - 1; i++) {
				draw_interface(interface[i]);
			}
			al_flip_display();
		}
	}
}