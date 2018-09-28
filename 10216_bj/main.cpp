#include <iostream>
#include <queue>

using namespace std;

#define X 0
#define Y 1
#define R 2

int T;


int bfs(bool ** graph, bool visited[], int N) {
	int cnt = 0;

	queue<int> q;
	for(int i = 0; i < N; i++) {
		if(!visited[i]) {
			q.push(i);
			break;
		}
	}

	int vertex;

	while(!q.empty()) {
		vertex = q.front();
		for(int i = 0; i < N; i++) {
			if(!visited[i] && graph[vertex][i]) {
				visited[i] = true;
				cnt++;
			}
		}
	}
	return cnt;
}

int getGroups(bool ** graph, int N) {
	bool visited[N];
	int group = 0;
	int remain = N;
	while(remain) {
		remain -= bfs(graph, visited, N);
		group++;
	}
	return group;
}


int
makeGraph(int * arr[], int N) {
	bool graph[N][N];

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++)
			graph[i][j] = false;
	}

	int tmpX, tmpY, tmpR;

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			if(graph[i][j]) {
				continue;
			}
			tmpX = arr[i][X] - arr[j][X];
			tmpX *= tmpX;
			tmpY = arr[i][Y] - arr[i][Y];
			tmpY *= tmpY;
			tmpR = (arr[i][R] > arr[j][R]) ? arr[i][R] : arr[j][R];
			tmpR *= tmpR;

			if(tmpY + tmpX > tmpR) {
				graph[i][j] = true;
			}
		}
	}
	return getGroups(graph, N);
}
int main() {
	cin >> T;
	int N, tmpX, tmpY, tmpR;
	for(int i = 0; i < T; i++) {
		cin >> N;
		int inputs[N][3];
		for(int j = 0; j < N; j++) {
			cin >> inputs[j][0] >> inputs[j][1] >> inputs[j][2];
		}
		cout << makeGraph(inputs, N);
	}
}