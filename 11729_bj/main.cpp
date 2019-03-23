#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

void hanoi(int from, int to, int temp, int n) {
	if (n == 1) {
		printf("%d %d\n", from, to);
		return;
	}

	hanoi(from, temp, to, n - 1);
	printf("%d %d\n", from, to);
	hanoi(temp, to, from, n - 1);
}

int main() {
	int n;
	cin >> n;
	int result = (1 << n) - 1;
	cout << result << endl;
	hanoi(1, 3, 2, n);
}