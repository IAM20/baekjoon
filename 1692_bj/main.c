#include <stdio.h>
#include <string.h>

char inputs[101][101];
int resultRow;
int resultColumn;

int
find(int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - 1; j++) {
			if(inputs[i][j] == '.' && inputs[i][j + 1] == '.') {
				resultRow++;
				while(inputs[i][++j] == '.');
			}
		}
	}

	for(int i = 0; i < n;  i++) {
		for(int j = 0; j < n - 1; j++) {
			if(inputs[j][i] == '.' && inputs[j + 1][i] == '.') {
				resultColumn++;
				while(inputs[++j][i] == '.');
			}
		}
	}
}

int
main(int argc, char * argv[]) {
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s", inputs[i]);
	}
	find(n);
	printf("%d %d\n", resultRow, resultColumn);

	return 0;
}