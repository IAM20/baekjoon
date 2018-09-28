#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int k = 0, y = 0;
	int tmpy, tmpk;
	for(int i = 0; i < t; i++) {
		for(int j = 0; j < 9; j++) {
			cin >> tmpy >> tmpk;
			y += tmpy;
			k += tmpk;
		}
		if(y > k) cout << "Yonsei" << endl;
		else if(y == k) cout << "Draw" << endl;
		else cout << "Korea" << endl;

		k = y = 0;
	}

	return 0;
}