#include "init_game_interface.hpp"

void init_game_interface(ALLEGRO_BITMAP* interf_images[], Interface interface[NUM_INTERF],
	const int spacing, const int screen_w, const int screen_h) {

	for (int i = 0; i < NUM_INTERF; i++) {
		interface[i].id = i % (NUM_INTERF);
		interface[i].hud = interf_images[interface[i].id];

		if (i == 0) {
			interface[i].x = (screen_w - INTERF_W * 13.5) / 2 + (i % 4) * (INTERF_W + spacing);
			interface[i].y = (screen_h - INTERF_H * 12) / 2 + (i / 4) * (INTERF_H + spacing);
		}
		if (i == 1) {
			interface[i].x = (screen_w - INTERF_W * 2) / 1.3 + (i % 4) * (INTERF_W + spacing);
			interface[i].y = (screen_h - INTERF_H * 2) / 1.3 + (i / 4) * (INTERF_H + spacing);
		}
		if (i == 2) {
			interface[i].x = (screen_w - INTERF_W * 2) / 1.3 + (INTERF_W + spacing);
			interface[i].y = (screen_h - INTERF_H * 2) / 1.7 + (INTERF_H + spacing);
		}
		if (i == 3) {
			interface[i].x = (screen_w - INTERF_W * 2) / 1.3 + (INTERF_W + spacing);
			interface[i].y = (screen_h - INTERF_H * 2) / 1.94 + (INTERF_H + spacing);
		}
		if (i == 4) {
			interface[i].x = (screen_w - INTERF_W * 2) / 1.3 + (INTERF_W + spacing);
			interface[i].y = (screen_h - INTERF_H * 2) / 2.26 + (INTERF_H + spacing);
		}
		if (i == 5) {
			interface[i].x = (screen_w - INTERF_W * 4) / 2 + (INTERF_W + spacing);
			interface[i].y = (screen_h - INTERF_H * 8) / 2 + (INTERF_H + spacing);
		}
		if (i == 6) {
			interface[i].x = (screen_w - INTERF_W * 4) / 2 + (INTERF_W + spacing);
			interface[i].y = (screen_h - INTERF_H * 5) / 2 + (INTERF_H + spacing);
		}
		if (i == 7) {
			interface[i].x = (screen_w - INTERF_W * 4) / 2 + (INTERF_W + spacing);
			interface[i].y = (screen_h - INTERF_H * 2) / 2 + (INTERF_H + spacing);
		}
		if (i == 8) {
			interface[i].x = (screen_w - INTERF_W * 4) / 2 + (INTERF_W + spacing);
			interface[i].y = (screen_h - INTERF_H * 0.5) / 2 + (INTERF_H + spacing + 23);
		}
		if (i == 9) {
			interface[i].x = (screen_w - INTERF_DIFFICULTY_W * 3.7) / 2 + (INTERF_DIFFICULTY_W + spacing);
			interface[i].y = (screen_h - INTERF_DIFFICULTY_H * 7.2) / 2 + (INTERF_DIFFICULTY_H + spacing);
		}
		if (i == 10) {
			interface[i].x = (screen_w - INTERF_DIFFICULTY_W * 3.7) / 2 + (INTERF_DIFFICULTY_W + spacing);
			interface[i].y = (screen_h - INTERF_DIFFICULTY_H * 4) / 2 + (INTERF_DIFFICULTY_H + spacing);
		}
		if (i == 11) {
			interface[i].x = (screen_w - INTERF_DIFFICULTY_W * 3.7) / 2 + (INTERF_DIFFICULTY_W + spacing);
			interface[i].y = (screen_h - INTERF_DIFFICULTY_H * 1) / 2 + (INTERF_DIFFICULTY_H + spacing);
		}
	}
}
