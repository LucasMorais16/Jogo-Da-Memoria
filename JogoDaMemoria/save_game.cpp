#include "save_game.hpp"
#include <iostream>
#include <vector>
#include <allegro5/allegro5.h>
#include <allegro5/bitmap.h>

bool save_game(const Player& player, std::string vetor[NUM_CARDS]) {
	std::ofstream arquivo;
	arquivo.open(player.playerName + ".dad", std::ios_base::out);

	if (!arquivo.is_open()) return false;

	arquivo << player.playerName << std::endl;
	arquivo << player.score << std::endl;
	arquivo << player.matches << std::endl;

	ALLEGRO_BITMAP* images[NUM_CARDS];
	for (int i = 0; i < NUM_CARDS; i++) {
		arquivo << player.cards[i].is_flipped << std::endl;
		arquivo << player.cards[i].id << std::endl;
		arquivo << player.cards[i].x << std::endl;
		arquivo << player.cards[i].y << std::endl;
		ALLEGRO_BITMAP* image = al_load_bitmap(vetor[i].c_str());
		if (!image) {
			std::cout << "deu ruim" << std::endl;
			return -1;
		}

		images[i] = image;
	}

	arquivo.close();

	for (int i = 0; i < NUM_CARDS; i++) {
		const std::string nome = "bitmap_image" + std::to_string(i) + ".bmp";
		al_save_bitmap(nome.c_str(), images[i]);
	}

	for (int i = 0; i < NUM_CARDS; i++) {
		al_destroy_bitmap(images[i]);
	}

	return true;
}