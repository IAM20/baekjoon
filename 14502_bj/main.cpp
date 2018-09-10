#include <iostream>
#include <queue>
#include <vector>
using namespace std;

/**
 * Maybe BFS backtracking?
 */

 int matrix[9][9];
 int result[9][9];
 int visited[9][9];

 vector<pair<int, int>> v;
 int N, M;

 int ** bfs(int mat[][]) {
 	int retval = 0;
 	int cnt = 3;

 	for(int i = 0; i < N; i++) {
 		for(int j = 0; j < M; j++) {
 			if(mat[i][j] == 0)
 				mat[i][j] = 1;
 			cnt--;
 		}
 	}

 	return mat;
 }

int main() {
	cin >> N >> M;

	int safe = N * M;

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			cin >> matrix[i][j];
			switch(matrix[i][j]) {
				case 2:
					v.push_back(pair<int, int>(i, j));
					safe--;
					break;
				case 1:
					safe--;
					break;
			}
			result[i][j] = matrix[i][j];
		}
	}

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			if(result[i][j] == 2 || result[i][j] == 1)
				continue;

		}
	}
	std::cout << "Hello, World!" << std::endl;
	return 0;
}