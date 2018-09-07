#include <iostream>
#include <queue>

using namespace std;

typedef struct {
	char x;
	char y;
	int cnt;
	char t;
	char t1;
}node;

int N, M;
bool matrix[101][101];
bool visited[101][101];

int bfs() {
	queue<node> q;
	node n;
	n.x = 0;
	n.y = 0;
	n.cnt = 1;
	q.push(n);

	char X, Y = 0;
	int CNT = 1;

	while(!q.empty()) {
		X = q.front().x;
		Y = q.front().y;
		CNT = q.front().cnt;

		if(X == N - 1 && Y == M - 1)
			break;
		q.pop();
		visited[X][Y] = true;

		if((X > 0 && matrix[X - 1][Y]) && !visited[X - 1][Y]) {
			node tmp;
			tmp.x = X - 1;
			tmp.y = Y;
			tmp.cnt = CNT + 1;
			q.push(tmp);
		}

		if((X < N - 1 && matrix[X + 1][Y]) && !visited[X + 1][Y]) {
			node tmp;
			tmp.x = X + 1;
			tmp.y = Y;
			tmp.cnt = CNT + 1;
			q.push(tmp);
		}

		if((Y > 0 && matrix[X][Y - 1]) && !visited[X][Y - 1]) {
			node tmp;
			tmp.x = X;
			tmp.y = Y - 1;
			tmp.cnt = CNT + 1;
			q.push(tmp);
		}

		if((Y < M - 1 && matrix[X][Y + 1]) && !visited[X][Y + 1]) {
			node tmp;
			tmp.x = X;
			tmp.y = Y + 1;
			tmp.cnt = CNT + 1;
			q.push(tmp);
		}
	}
	return CNT;
}

int main() {

	cin >> N >> M;

	char tmp[M];

	for(int i = 0; i < N; i++) {
		cin >> tmp;
		for(int j = 0; j < M; j++) {
			if(tmp[j] == '1') {
				matrix[i][j] = true;
			}
		}
	}

	cout << bfs() << endl;

	return 0;
}