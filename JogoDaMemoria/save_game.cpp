#include "save_game.hpp"
#include <iostream>
#include <vector>
#include <allegro5/bitmap.h>
#include <allegro5/allegro.h>


bool save_game(const Player& player) {
	std::ofstream arquivo;
	arquivo.open(player.playerName + ".dad", std::ios_base::out | std::ios_base::app);

	if (!arquivo.is_open()) return false;

	arquivo << player.playerName << std::endl;
	arquivo << player.score << std::endl;
	arquivo << player.matches << std::endl;

	for (int i = 0; i < NUM_CARDS; i++) {
		arquivo << player.cards[i].is_flipped << std::endl;
		arquivo << player.cards[i].id << std::endl;
		arquivo << player.cards[i].x << std::endl;
		arquivo << player.cards[i].y << std::endl;
		arquivo << player.cards[i].front_image << std::endl;
	}

	arquivo.close();
	return true;
}
