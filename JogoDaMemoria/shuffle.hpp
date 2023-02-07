#pragma once

#include <allegro5/bitmap.h>
#include <string>
#include <vector>
#include <random>
#include <chrono>
#include "card.hpp"
#include "constantes.hpp"

void shuffle(Card game_cards[NUM_CARDS]);
