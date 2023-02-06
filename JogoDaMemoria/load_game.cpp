#include "load_game.hpp"
#include <iostream>

Player load_game(std::string docName) {
	std::ifstream arquivo(docName);
	std::string line;
	Player player;

	if (!arquivo.is_open()) return player;

	arquivo >> player.playerName;
	arquivo >> player.score;
	arquivo >> player.matches;

	for (int i = 0; i < NUM_CARDS; i++) {
		arquivo >> player.cards[i].is_flipped;
		arquivo >> player.cards[i].id;
		arquivo >> player.cards[i].x;
		arquivo >> player.cards[i].y;
		//arquivo >> player.cards[i].front_image;
	}

	arquivo.close();

	return player;
}