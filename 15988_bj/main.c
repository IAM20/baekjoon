#include <stdio.h>
#include <stdlib.h>
#define MODIFIER 1000000009

unsigned int result[1000001];

void
init() {
	result[1] = 1;
	result[2] = 2;
	result[3] = 3;
	result[4] = 7;
	result[5] = 13;
	result[6] = 24;
}

void
	cal() {
	for(int i = 7; i <= 1000000; i++) {
		result[i] = result[i - 1] + result[i - 2] + result[i - 3];
		result[i] %= MODIFIER;
	}
}

int main() {
	init();
	cal();
	int iter;
	int input;
	scanf("%d", &iter);
	for(int i = 0; i < iter; i++) {
		scanf("%u", &input);
		printf("%u\n", result[input]);
	}
	return 0;
}