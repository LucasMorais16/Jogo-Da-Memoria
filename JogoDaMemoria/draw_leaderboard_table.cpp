#include "draw_leaderboard_table.hpp"

void draw_leaderboard_table() {
	char rank[3];
	ALLEGRO_FONT* header_font = al_load_font("arial.ttf", 50, 0);
	ALLEGRO_FONT* body_font = al_load_font("arial.ttf", 30, 0);
	
	al_clear_to_color(al_map_rgb(250, 250, 250));
	al_draw_text(header_font, al_map_rgb(0, 0, 0), 705, 50, ALLEGRO_ALIGN_CENTRE, "Player:");
	al_draw_text(header_font, al_map_rgb(0, 0, 0), 1105, 50, ALLEGRO_ALIGN_CENTRE, "Score:");

	for (int i = 1; i < 11; i++) {
		_itoa_s(i, rank, 10);
		al_draw_textf(body_font, al_map_rgb(0, 0, 0), 380, (i * 60) + 110, ALLEGRO_ALIGN_CENTRE, rank);
		al_draw_rectangle(400, (60 * i) + 100, 990, (60 * i) + 150, al_map_rgb(100, 100, 100), 3);
		al_draw_rectangle(1010, (60 * i) + 100, 1200, (60 * i) + 150, al_map_rgb(100, 100, 100), 3);
	}
	
	al_flip_display();

	al_destroy_font(header_font);
	al_destroy_font(body_font);
}