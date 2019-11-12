#include <iostream>

int main() {
	int n;
	std::cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = 1; j < i; j++) {
			std::cout << " ";
		}
		if (i == n) {
			std::cout << "*" << std::endl;
		} else if (i == 1) {
			for (int j = 0; j < 2 * n - 1; j++) {
				std::cout << "*";
			} std::cout << std::endl;
		} else {
			std::cout << "*";
			for (int j = 0; j < (n - i) * 2 - 1; j++) {
				std::cout << " ";
			} std::cout << "*" << std::endl;
		}
	}
	return 0;
}