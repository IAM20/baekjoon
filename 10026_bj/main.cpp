#include <iostream>

using namespace std;

int N;
char matrix[101][101];
bool visited[101][101];
bool visitedForRB[101][101];

int dfs(int startX, int startY) {
	if(visited[startX][startY]) {
		return 0;
	}

	visited[startX][startY] = true;
	int retval = 1;

	if(startX < N - 1) {
		if(matrix[startX][startY] == matrix[startX + 1][startY] && !visited[startX + 1][startY]) {
			retval += dfs(startX + 1, startY);
		}
	}

	if(startX > 0) {
		if(matrix[startX][startY] == matrix[startX - 1][startY] && !visited[startX - 1][startY]) {
			retval += dfs(startX - 1, startY);
		}
	}

	if(startY < N - 1) {
		if(matrix[startX][startY] == matrix[startX][startY + 1] && !visited[startX][startY + 1]) {
			retval += dfs(startX, startY + 1);
		}
	}

	if(startY > 0) {
		if(matrix[startX][startY] == matrix[startX][startY - 1] && !visited[startX][startY - 1]) {
			retval += dfs(startX, startY - 1);
		}
	}

	return retval;
}

int dfsRB(int startX, int startY) {
	if(visitedForRB[startX][startY]) {
		return 0;
	}

	visitedForRB[startX][startY] = true;
	int retval = 1;

	switch(matrix[startX][startY]) {
		case 'B':
			if (startX < N - 1) {
				if (matrix[startX][startY] == matrix[startX + 1][startY] && !visitedForRB[startX + 1][startY]) {
					retval += dfsRB(startX + 1, startY);
				}
			}

			if (startX > 0) {
				if (matrix[startX][startY] == matrix[startX - 1][startY] && !visitedForRB[startX - 1][startY]) {
					retval += dfsRB(startX - 1, startY);
				}
			}

			if (startY < N - 1) {
				if (matrix[startX][startY] == matrix[startX][startY + 1] && !visitedForRB[startX][startY + 1]) {
					retval += dfsRB(startX, startY + 1);
				}
			}

			if (startY > 0) {
				if (matrix[startX][startY] == matrix[startX][startY - 1] && !visitedForRB[startX][startY - 1]) {
					retval += dfsRB(startX, startY - 1);
				}
			}
			break;
		case 'R': case 'G':
			if (startX < N - 1) {
				if (matrix[startX + 1][startY] != 'B' && !visitedForRB[startX + 1][startY]) {
					retval += dfsRB(startX + 1, startY);
				}
			}

			if (startX > 0) {
				if (matrix[startX - 1][startY] != 'B' && !visitedForRB[startX - 1][startY]) {
					retval += dfsRB(startX - 1, startY);
				}
			}

			if (startY < N - 1) {
				if (matrix[startX][startY + 1] != 'B' && !visitedForRB[startX][startY + 1]) {
					retval += dfsRB(startX, startY + 1);
				}
			}

			if (startY > 0) {
				if (matrix[startX][startY - 1] != 'B' && !visitedForRB[startX][startY - 1]) {
					retval += dfsRB(startX, startY - 1);
				}
			}
			break;
		default:
			break;
	}

	return retval;
}

int main() {
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> matrix[i];
	}

	int remains = N * N;
	int rgb = 0; int rb = 0;
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(dfs(i, j)) {
				rgb++;
			}
			if(dfsRB(i, j)) {
				rb++;
			}
		}
	}

	cout << rgb << " " << rb << endl;
	return 0;
}