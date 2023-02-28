#pragma once

#include <string>
#include <vector>
#include "card.hpp"
#include "constantes.hpp"

typedef struct {
	std::string playerName;
	short int score;
	short int matches;
	Card cards[NUM_CARDS];
} Player;