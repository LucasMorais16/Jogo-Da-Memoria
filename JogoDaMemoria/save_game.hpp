#pragma once

#include <fstream>
#include "player.hpp"
#include "constantes.hpp"

bool save_game(const Player& player, std::string vetor[NUM_CARDS]);
