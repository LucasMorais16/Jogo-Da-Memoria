#include "draw_card.hpp"

void draw_card(const Card& card) {
	if (card.is_flipped) {
		al_draw_bitmap(card.front_image, card.x, card.y, 0);
		return;
	}

	ALLEGRO_BITMAP* back_image = al_load_bitmap("card_back.png");
	al_draw_bitmap(back_image, card.x, card.y, 0);
	al_destroy_bitmap(back_image);
}
