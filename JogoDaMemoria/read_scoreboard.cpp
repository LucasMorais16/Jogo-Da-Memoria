#include "read_scoreboard.hpp"

std::vector<Player> read_scoreboard() {
	std::ifstream arquivo("scoreBoard.csv");
	std::string line, cell;
	std::vector<Player> players;
	Player player;

	if (!arquivo.is_open()) return players;

	int i = 0;
	while (getline(arquivo, line)) {
		std::istringstream ss(line);

		while (getline(ss, cell, ';')) {
			if (i == 0) player.playerName = cell;
			if (i == 1) player.score = stoi(cell);

			i++;
		}

		i = 0;
		players.push_back(player);
	}
	
	quickSort(players, 0, players.size());
	return players;
}