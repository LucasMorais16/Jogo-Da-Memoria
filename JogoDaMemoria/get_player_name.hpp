#pragma once

#include <string>
#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_color.h>
#include "interface.hpp"
#include "constantes.hpp"
#include "draw_interface.hpp"

std::string get_player_name(ALLEGRO_EVENT_QUEUE* event_queue, std::string nameScoreBoard);
