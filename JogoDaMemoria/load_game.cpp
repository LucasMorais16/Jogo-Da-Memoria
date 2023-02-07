#include "load_game.hpp"

Player load_game(std::string& docName) {
	std::string dirName = docName;
	
	for (int i = 0; i < 4; i++) dirName.pop_back();

	std::ifstream document(dirName + "/" + docName);
	Player player;

	if (!document.is_open()) {
		document.close();
		return player;
	}

	document >> player.playerName;
	document >> player.score;
	document >> player.matches;

	for (int i = 0; i < NUM_CARDS; i++) {
		document >> player.cards[i].is_flipped;
		document >> player.cards[i].id;
		document >> player.cards[i].x;
		document >> player.cards[i].y;
	}

	document.close();

	for (int i = 0; i < NUM_CARDS; i++) {
		const std::string nome = player.playerName + "/" + "bitmap_image" + std::to_string(i) + ".bmp";
		player.cards[i].front_image = al_load_bitmap(nome.c_str());
	}

	return player;
}