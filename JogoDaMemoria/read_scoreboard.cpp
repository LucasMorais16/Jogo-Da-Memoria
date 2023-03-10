#include "read_scoreboard.hpp"

std::vector<Player> read_scoreboard() {
	std::ifstream document("scoreBoard.csv");
	std::string line, cell;
	std::vector<Player> players;
	Player player;

	if (!document.is_open()) {
		document.close();
		return players;
	}

	int i = 0;
	while (getline(document, line)) {
		std::istringstream ss(line);

		while (getline(ss, cell, ';')) {
			if (i == 0) player.playerName = cell;
			if (i == 1) player.score = stoi(cell);

			i++;
		}

		i = 0;
		players.push_back(player);
	}

	quickSort(players, 0, players.size() - 1);

	return players;
}