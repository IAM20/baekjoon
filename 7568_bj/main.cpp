#include <iostream>
#include <vector>

int main(int argc, char * argv[]) {
	int total;
	std::vector<std::pair<int, int>> v;

	std::cin >> total;

	for (int i = 0; i < total; i++) {
		int weight, height;
		std::cin >> weight >> height;
		v.emplace_back(new std::pair<int, int>(weight, height));
	}

	for (int i = 0; i < total; i++) {
		std::cout << v[i].first << v[i].second << std::endl;
	}

}