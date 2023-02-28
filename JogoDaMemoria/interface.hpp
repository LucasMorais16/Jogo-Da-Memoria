#pragma once

#include <allegro5/bitmap.h>

typedef struct {
	short int id;
	int x;
	int y;
	ALLEGRO_BITMAP* hud;
} Interface;