#pragma once

#include <allegro5/bitmap.h>
#include <string>

typedef struct {
	int id;
	int x;
	int y;
	bool is_flipped;
	ALLEGRO_BITMAP* front_image;
	std::string card_name;
} Card;