#include "save_scoreboard.hpp"

bool save_scoreboard(const std::string& playerName,const int& score) {
	std::ofstream arquivo;

	arquivo.open("scoreBoard.csv", std::ios_base::out | std::ios_base::app);

	if (!arquivo.is_open()) {
		arquivo.close();
		return false;
	}

	arquivo << playerName << ";" << score << ";" << std::endl;

	if (!arquivo) {
		arquivo.close();
		return false;
	}

	arquivo.close();
	return true;
}