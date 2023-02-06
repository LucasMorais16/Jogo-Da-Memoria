#pragma once

#include <fstream>
#include "player.hpp"
#include "constantes.hpp"
#include <allegro5/allegro.h>

bool save_game(const Player& player, std::string vetor[NUM_CARDS]);
