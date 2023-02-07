#pragma once

#include <allegro5/bitmap.h>
#include <string>
#include "card.hpp"
#include "shuffle.hpp"
#include "constantes.hpp"
#include "card.hpp"

void init_game_cards(Card card_images[NUM_CARDS], Card game_cards[NUM_CARDS],
	std::string teste_cartas[NUM_CARDS], const int spacing, const int screen_w, const int screen_h);