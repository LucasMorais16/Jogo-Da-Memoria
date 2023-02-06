#pragma once

#include <string>
#include <vector>
#include "card.hpp"
#include "constantes.hpp"

typedef struct {
	std::string playerName;
	int score;
	int matches;
	Card cards[NUM_CARDS];
} Player;