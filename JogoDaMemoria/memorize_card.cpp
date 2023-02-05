#include "memorize_card.hpp"

void memorizeCards(Card game_cards[NUM_CARDS], Interface interface[NUM_INTERF], int memorize_timer) {

	al_clear_to_color(al_map_rgb(255, 255, 255));
	for (int i = 0; i < NUM_CARDS; i++) {
		game_cards[i].is_flipped = true;
	}
	for (int i = 0; i < NUM_CARDS; i++) {
		draw_card(game_cards[i]);
	}
	for (int i = 0; i < NUM_INTERF - 7; i++) {
		draw_interface(interface[i]);
	}
	for (int i = 0; i < NUM_CARDS; i++) {
		game_cards[i].is_flipped = false;
	}
	al_flip_display();
	std::this_thread::sleep_for(std::chrono::milliseconds(memorize_timer)); // tempo para memorizar
}