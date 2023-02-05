#pragma once

#include <allegro5/bitmap.h>

typedef struct {
	int id;
	int x;
	int y;
	bool is_flipped;
	ALLEGRO_BITMAP *front_image;
} Card;