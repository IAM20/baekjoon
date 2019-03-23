#include <iostream>
using namespace std;

/* dp 점화식*/
int arr[12];

void init() {
	arr[1] = 1;
	arr[2] = 3;
	arr[3] = 25;
}

void dp() {
	return;
}

int main() {
	int n;
	cin >> n;

	init();
	dp();

	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		cout << arr[b] << endl;
	}
	return 0;
}