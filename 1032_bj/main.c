#include <stdio.h>
#include <string.h>

char inputs[64][64];
int N;

int main() {
	scanf("%d", &N);
	scanf("%s", inputs[0]);
	int strlength = strlen(inputs[0]);

	for(int i = 1; i < N; i++) {
		scanf("%s", inputs[i]);
		for(int j = 0; j < strlength; j++) {
			if(inputs[0][j] == '?')
				continue;
			if(inputs[0][j] != inputs[i][j])
				inputs[0][j] = '?';
		}
	}

	printf("%s\n", inputs[0]);
	return 0;
}