#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int burger[3];
	int drink[2];

	int min_burger = 2000;
	int min_drink = 2000;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &burger[i]);
		if (burger[i] < min_burger)
			min_burger = burger[i];
	}

	for (int i = 0; i < 2; i++) {
		scanf("%d", &drink[i]);
		if (drink[i] < min_drink)
			min_drink = drink[i];
	}

	printf("%d\n", min_drink + min_burger - 50);

	
}