#include "shuffle.hpp"
#include <string>
#include <iostream>

void shuffle(Card game_cards[NUM_CARDS], std::string teste_cartas[NUM_CARDS]) {
	Card temp;

	for (int i = 0; i < NUM_CARDS; i++) {
		int j = rand() % NUM_CARDS; // 0 a 15 e precisa ter cards do 0 ao 7

		temp.id = game_cards[i].id;
		game_cards[i].id = game_cards[j].id;
		game_cards[j].id = temp.id;
		
		temp.front_image = game_cards[i].front_image;
		game_cards[i].front_image = game_cards[j].front_image;
		game_cards[j].front_image = temp.front_image;

		std::string str = std::to_string(j);
		teste_cartas[i] = "card" + str + ".png";
	}
}
