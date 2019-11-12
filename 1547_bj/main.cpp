#include <iostream>

int main() {
	int n;
	bool cup[4];
	bool flag = false;
	cup[0] = cup[2] = cup[3] = false;
	cup[1] = true;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;
		std::cin >> x >> y;
		bool temp = cup[x];
		cup[x] = cup[y];
		cup[y] = temp;
	}

	for (int i = 0; i < 4; i++) {
		if (cup[i]) {
			flag = true;
			std::cout << i << std::endl;
		}
	}

	if (!flag) {
		std::cout << -1 << std::endl;
	}

	return 0;
}