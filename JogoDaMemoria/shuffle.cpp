#include "shuffle.hpp"

void shuffle(Card game_cards[NUM_CARDS]) {
	Card temp;
	std::vector<int> numbers = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

	// Use the default random engine and a uniform distribution
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine engine(seed);
	std::uniform_int_distribution<int> distribution(0, numbers.size() - 1);

	std::shuffle(numbers.begin(), numbers.end(), engine);
	std::shuffle(numbers.begin(), numbers.end(), engine);

	//Aqui o for vai rearranjar a ordem das cartas, assim ficando aleatorio
	for (int i = 0; i < NUM_CARDS; i++) {
		temp.id = game_cards[i].id;
		game_cards[i].id = game_cards[numbers[i]].id;
		game_cards[numbers[i]].id = temp.id;
		
		temp.front_image = game_cards[i].front_image;
		temp.card_name = game_cards[i].card_name;

		game_cards[i].front_image = game_cards[numbers[i]].front_image;
		game_cards[i].card_name = game_cards[numbers[i]].card_name;

		game_cards[numbers[i]].front_image = temp.front_image;
		game_cards[numbers[i]].card_name = temp.card_name;
	}
}
