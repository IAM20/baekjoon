/**
 * BFS Bactracking
 * Author game9777@vnaver.com
 */
#include <iostream>
#include <queue>

using namespace std;

bool visited[100001];

int main() {
	int N, K, depth, position;
	cin >> N >> K;
	visited[N] = true;

	queue<pair<int, int>> q;
	q.push(pair<int, int>(N, 0));

	while(!q.empty()) {
		depth = q.front().second;
		position = q.front().first;

		if(position == K)
			break;

		visited[position]= true;
		q.pop();

		if(position - 1 >= 0 && !visited[position - 1]) {
			q.push(pair<int, int>(position - 1, depth + 1));
		}

		if(position + 1 <= 100000 && !visited[position + 1]) {
			q.push(pair<int, int>(position + 1, depth + 1));
		}

		if(position * 2 <= 100000 && !visited[position * 2]) {
			q.push(pair<int, int>(position * 2, depth + 1));
		}
	}
	cout << q.front().second << endl;
	return 0;
}