#pragma once

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <vector>
#include <string>
#include "interface.hpp"
#include "constantes.hpp"
#include "draw_interface.hpp"
#include "read_scoreboard.hpp"

bool draw_leaderboard_table(bool& redraw, const Interface interface[], ALLEGRO_EVENT_QUEUE* event_queue);