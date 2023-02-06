#include "shuffle.hpp"

void shuffle(Card game_cards[NUM_CARDS]) {
	Card temp;

	for (int i = 0; i < NUM_CARDS; i++) {
		int j = rand() % NUM_CARDS;

		temp.id = game_cards[i].id;
		game_cards[i].id = game_cards[j].id;
		game_cards[j].id = temp.id;
		
		temp.front_image = game_cards[i].front_image;
		game_cards[i].front_image = game_cards[j].front_image;
		game_cards[j].front_image = temp.front_image;
	}
}
