#include <iostream>
#include <vector>
#include <queue>

#define GREEN 2
#define RED 1
#define NOCOLOR 0

using namespace std;

vector<pair<int, int>> e;
vector<int> v[20001];
char color[20001];
bool visited[20001];
int K, V, E;
int visitedVertex = 0;

bool flag;

void flushVisited();
void flushColor();
void flushVector();
void flush();

void bfs(int startVertex) {
	if(visited[startVertex]) {
		return;
	}
	color[startVertex] = RED;
	int length = v[startVertex].size();
	visitedVertex++;

	queue<pair<int, int>> q;
	for(int i = 0; i < length; i++) {
		q.push(pair<int, int>(v[startVertex].at(i), GREEN));
		color[v[startVertex].at(i)] = GREEN;
	}

	int vertex, colors, tmp;
	while(!q.empty()) {
		vertex = q.front().first;
		colors = q.front().second;
		q.pop();
		visitedVertex++;

		visited[vertex] = true;
		length = v[vertex].size();
		for(int i = 0; i < length; i++) {
			tmp = v[vertex].at(i);
			if(color[tmp] == colors) {
				flag = false;
				return;
			}
			if(!visited[tmp] && color[tmp] != colors) {
				visited[tmp] = true;
				if(colors == RED)
					color[tmp] = GREEN;
				else
					color[tmp] = RED;
				q.push(pair<int, int>(tmp, color[tmp]));
			}
		}
	}
}

int main() {
	cin >> K;

	int vFrom, vTo;

	for(int i = 0; i < K; i++) {
		cin >> V >> E;
		flag = true;
		for(int j = 0; j < E; j++) {
			cin >> vFrom >> vTo;
			v[vFrom].emplace_back(vTo);
			v[vTo].emplace_back(vFrom);
		}

		for(int j = 1; j <= V; j++) {
			if(!visited[j])
				bfs(j);
			else continue;
			if(!flag)
				break;
		}

		if(flag) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
		flush();
	}

	return 0;
}

void flushVector() {
	for(int i = 0; i <= V; i++) {
		v[i].clear();
	}
}

void flushVisited() {
	for(int i = 0; i <= V; i++) {
		visited[i] = false;
	}
}

void flushColor() {
	for(int i = 0; i <= V; i++) {
		color[i] = NOCOLOR;
	}
}

void flush() {
	visitedVertex = 0;
	e.clear();
	flushVector();
	flushVisited();
	flushColor();
}