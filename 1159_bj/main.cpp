#include <iostream>
using namespace std;

char inputs[151][30];
int stacks[26];
char result[151];
int N;

int main() {
	cin >> N;

	for(int i = 0; i < N; i++) {
		cin >> inputs[i];
	}

	for(int i = 0; i < N; i++) {
		stacks[inputs[i][0] - 97]++;
	}

	int length = 0;

	for(int i = 0; i < 26; i++) {
		if(stacks[i] > 4) {
			result[length++] = (char)(i + 97);
		}
	}
	if(length != 0) {
		result[length] = '\0';
		cout << result << endl;
	} else {
		cout << "PREDAJA" << endl;
	}
	return 0;
}