#include "load_game.hpp"
#include <iostream>

Player load_game(std::string docName) {
	std::ifstream arquivo(docName);
	std::string card;
	Player player;

	if (!arquivo.is_open()) return player;

	arquivo >> player.playerName;
	arquivo >> player.score;
	arquivo >> player.matches;

	std::cout << "LOAD GAME" << std::endl;
	for (int i = 0; i < NUM_CARDS; i++) {
		arquivo >> player.cards[i].is_flipped;
		arquivo >> player.cards[i].id;
		arquivo >> player.cards[i].x;
		arquivo >> player.cards[i].y;
	}
	arquivo.close();

	for (int i = 0; i < NUM_CARDS; i++) {
		std::string nome = "bitmap_image" + std::to_string(i) + ".bmp";
		player.cards[i].front_image = al_load_bitmap(nome.c_str());
	}

	return player;
}