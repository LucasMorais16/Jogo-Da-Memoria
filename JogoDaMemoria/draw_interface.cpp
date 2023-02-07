#include "draw_interface.hpp"

void draw_interface(const Interface& interf) {
	al_draw_bitmap(interf.hud, interf.x, interf.y, 0);
}