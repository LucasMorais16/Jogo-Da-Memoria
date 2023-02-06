#pragma once

#include <allegro5/bitmap.h>
#include <string>
#include "card.hpp"
#include "shuffle.hpp"
#include "constantes.hpp"

void init_game_cards(ALLEGRO_BITMAP* card_images[], Card game_cards[NUM_CARDS],
	std::string teste_cartas[NUM_CARDS], const int spacing, const int screen_w, const int screen_h);