#include <stdio.h>
#include <stdlib.h>

int compare(void * a, void * b) {
	return *(int *)a -  *(int *)b;
}

int array[1000001];
int N;

int main() {
	scanf("%d", &N);

	for(int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
	}

	qsort(array, N, sizeof(int), &compare);

	for(int i = 0; i < N; i++) {
		printf("%d\n", array[i]);
	}

	return 0;
}