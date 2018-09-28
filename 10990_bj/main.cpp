#include <iostream>
using namespace std;

int N;

int main() {
	cin >> N;

	for(int i = 0; i < N; i++) {
		for(int j = N - i - 1; j > 0; j--) {
			cout << " ";
		} if(!i) cout << "*\n";
		else {
			cout << "*";
			for(int j = 0; j < i * 2 - 1; j++) {
				cout << " ";
			} cout <<"*\n";
		}
	}

	return 0;
}