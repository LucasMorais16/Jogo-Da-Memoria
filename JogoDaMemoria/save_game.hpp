#pragma once

#include <fstream>
#include "player.hpp"
#include "constantes.hpp"
#include <allegro5/allegro.h>
#include <allegro5/bitmap.h>

bool save_game(const Player& player);
