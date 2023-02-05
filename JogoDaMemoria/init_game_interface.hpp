#pragma once

#include <allegro5/bitmap.h>
#include "constantes.hpp"
#include "interface.hpp"

void init_game_interface(ALLEGRO_BITMAP* interf_images[], Interface interface[NUM_INTERF], 
	const int spacing, const int screen_w, const int screen_h);