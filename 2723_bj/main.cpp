#include <iostream>
using namespace std;

/* dp 점화식*/
int arr[12];

void init() {
	arr[1] = 1;
	arr[2] = 3;
	arr[3] = 25;
	for (int i = 3; i <= 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 1] * i;
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;

	}
	return 0;
}