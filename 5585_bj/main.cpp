#include <iostream>

int
function(int change) {
	int result = 0;
	result += change / 500;
	change %= 500;
	result += change / 100;
	change %= 100;
	result += change / 50;
	change %= 50;
	result += change / 10;
	change %= 10;
	result += change / 5;
	change %= 5;
	result += change;
	return result;
}

int main() {
	int price;
	int change;

	std::cin >> price;
	change = 1000 - price;

	std::cout << function(change) << std::endl;
	return 0;
}