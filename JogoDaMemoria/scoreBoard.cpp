#include "scoreBoard.hpp"

void scoreBoard(const int& score, const std::string& nameScoreBoard) {
	ALLEGRO_FONT* font18 = al_load_font("arial.ttf", 24, 0);

	al_draw_textf(font18, al_map_rgb(0, 0, 0), 315, 305, ALLEGRO_ALIGN_CENTRE, "%d", score);
	al_draw_textf(font18, al_map_rgb(0, 0, 0), 315, 275, ALLEGRO_ALIGN_CENTRE, "%s", nameScoreBoard.c_str());
	al_destroy_font(font18);
}