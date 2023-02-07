#include "init_game_cards.hpp"

void init_game_cards(Card card_images[NUM_CARDS], Card game_cards[NUM_CARDS],
	std::string teste_cartas[NUM_CARDS], const int spacing, const int screen_w, const int screen_h) {

	for (int i = 0; i < NUM_CARDS; i++) {
		game_cards[i].id = i % (NUM_CARDS / 2);
		game_cards[i].x = (screen_w - CARD_W * 5) / 2 + (i % 4) * (CARD_W + spacing);
		game_cards[i].y = (screen_h - CARD_H * 5) / 2 + (i / 4) * (CARD_H + spacing);
		game_cards[i].is_flipped = false;
		game_cards[i].front_image = card_images[game_cards[i].id].front_image;
	}
	shuffle(game_cards, teste_cartas);
}
