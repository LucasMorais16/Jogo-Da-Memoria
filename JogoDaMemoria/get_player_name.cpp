#include "get_player_name.hpp"

std::string get_player_name() {
	std::string player_name;

	std::cout << "Type your name: ";
	std::cin >> player_name;
	
	fflush(stdin);
	
	return player_name;
}