#include "save_scoreboard.hpp"

bool save_scoreboard(const std::string& playerName,const int& score) {
	std::ofstream document;

	document.open("scoreBoard.csv", std::ios_base::out | std::ios_base::app);

	if (!document.is_open()) {
		document.close();
		return false;
	}

	document << playerName << ";" << score << ";" << std::endl;

	document.close();
	return true;
}