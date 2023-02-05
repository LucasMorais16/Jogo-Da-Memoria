#pragma once

#include <string>
#include <vector>
#include "card.hpp"

typedef struct {
	std::string playerName;
	std::vector<Card> cards;
	int score;
	int matches;
} Player;