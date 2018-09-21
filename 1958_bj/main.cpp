#include <iostream>
#include <string>

using namespace std;

string first;
string second;
string third;

char lcs[101][101][101];

int getLcs() {

	int result = 0;
	int tmpResult = 0;

	int lFirst = first.length();
	int lSecond = second.length();
	int lThird = third.length();

	for(int i = 1; i <= lFirst; i++) {
		for(int j = 1; j <= lSecond; j++) {
			for(int k = 1; k <= lThird; k++) {
				if(first.at(i - 1) == second.at(j - 1) && second.at(j - 1) == third.at(k - 1)) {
					tmpResult = lcs[i][j][k] = lcs[i - 1][j - 1][k - 1] + 1;
					if(tmpResult > result) {
						result = tmpResult;
					}
				} else {
					lcs[i][j][k] = lcs[i - 1][j - 1][k - 1];
				}
			}
		}
	}
	return result;
}

int main() {
	cin >> first >> second >> third;
	cout << getLcs() << endl;

	return 0;
}