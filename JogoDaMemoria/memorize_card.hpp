#pragma once

#include "draw_card.hpp"
#include "card.hpp"
#include "init_game_interface.hpp"
#include "init_game_cards.hpp"
#include "draw_interface.hpp"
#include <thread>
#include <chrono>

void memorizeCards(Card game_cards[NUM_CARDS], Interface interface[NUM_INTERF], int memorize_timer);
