#pragma once

#include <fstream>
#include <string>
#include <allegro5/allegro.h>
#include "player.hpp"
#include "constantes.hpp"

Player load_game(const std::string& docName);