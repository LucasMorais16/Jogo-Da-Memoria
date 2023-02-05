#pragma once

#include <allegro5/events.h>
#include <allegro5/allegro_color.h>
#include "draw_interface.hpp"
#include "interface.hpp"
#include "constantes.hpp"

bool menu_inicial(bool done, bool redraw,
	const Interface interface[], 
	ALLEGRO_EVENT_QUEUE* event_queue);