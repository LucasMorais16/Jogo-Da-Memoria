#include "save_game.hpp"

bool save_game(const Player& player) {
	std::string dirName = "mkdir " + player.playerName;
	system(dirName.c_str());

	std::ofstream document;
	document.open(player.playerName + "/" + player.playerName + ".dad", std::ios_base::out);

	if (!document.is_open()) {
		document.close();
		return false;
	}

	document << player.playerName << std::endl;
	document << player.score << std::endl;
	document << player.matches << std::endl;

	for (int i = 0; i < NUM_CARDS; i++) {
		document << player.cards[i].is_flipped << std::endl;
		document << player.cards[i].id << std::endl;
		document << player.cards[i].x << std::endl;
		document << player.cards[i].y << std::endl;

		ALLEGRO_BITMAP* image = al_load_bitmap(player.cards[i].card_name.c_str());
		if (!image)	return -1;

		const std::string nome = player.playerName + "/" + "bitmap_image" + std::to_string(i) + ".bmp";
		al_save_bitmap(nome.c_str(), image);

		al_destroy_bitmap(image);
	}

	document.close();

	return true;
}