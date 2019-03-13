#include <iostream>
using namespace std;

const int gandalf[] = {1, 2, 3, 3, 4, 10};
const int sauron[] = {1, 2, 2, 2, 3, 5, 10};

int getGandalfScore(int army[6]) {
	int score = 0;
	for(int i = 0; i < 6; i++) {
		score += army[i] * gandalf[i];
	}
	return score;
}

int getSauronScore(int army[7]) {
	int score = 0;
	for (int i = 0; i < 7; i++) {
		score += army[i] * sauron[i];
	}
	return score;
}

int main() {
	int gandalfArmy[6];
	int sauronArmy[7];
	int battleNumber;
	cin >> battleNumber;

	for(int i = 0; i < battleNumber; i++) {
		for(int j = 0; j < 6; j++) {
			cin >> gandalfArmy[j];
		}
		for(int j = 0; j < 7; j++) {
			cin >> sauronArmy[j];
		}
		int gandalfScore = getGandalfScore(gandalfArmy);
		int sauronScore = getSauronScore(sauronArmy);
		if (gandalfScore > sauronScore) {
			cout << "Battle " << i + 1 << ": Good triumphs over Evil\n";
		} else if (gandalfScore == sauronScore){
			cout << "Battle " << i + 1 << ": No victor on this battle field\n";
		} else {
			cout << "Battle " << i + 1 << ": Evil eradicates all trace of Good\n";
		}
	}

	return 0;
}