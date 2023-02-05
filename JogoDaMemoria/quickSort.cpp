#include "quickSort.hpp"

void quickSort(std::vector<Player>& players, int& left, int& right) {
	int i = left, j = right;
	Player pivot = players[(left + right) / 2];

	while (i <= j) {
		while (players[i].score > pivot.score) {
			i++;
		}
		
		while (players[j].score < pivot.score) {
			j--;
		}

		if (i <= j) {
			std::swap(players[i], players[j]);
			i++;
			j--;
		}
	}

	if (left < j) quickSort(players, left, j);
	
	if (i < right) quickSort(players, i, right);
	
}