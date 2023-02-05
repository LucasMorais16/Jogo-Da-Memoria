#pragma once

#include <string>
#include <vector>
#include "card.hpp"
#include "constantes.hpp"

typedef struct {
	std::string playerName;
	Card cards[NUM_CARDS];
	int score;
	int matches;
} Player;