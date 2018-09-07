#include <iostream>
#include <queue>
#include <vector>
using namespace std;

/**
 * BFS
 * https://acmicpc.net/problem/6603
 * HYU CSE LEE
 * game9777@naver.com
 */

int arr[13];
bool visited[13];

int result[79][6];

int N;

void flushVisited() {
	for(int i = 0; i < N; i++) {
		visited[i] = false;
	}
}

void printVector(vector<int> v) {
	int length = v.size();
	if(length != 6) {
		return;
	}
	for(int i = 0; i <length; i++) {
		cout << v.at(i) << " ";
	} cout << endl;
}

void dfs(int startPoint, vector<int> v) {
	if(visited[startPoint]) {
		return;
	}

	v.push_back(arr[startPoint]);
	visited[startPoint] = false;

	if(v.size() == 6) {
		printVector(v);
		return;
	}

	for(int i = startPoint + 1; i < N; i++) {
		dfs(i, v);
	}
}

int main() {
	while(true) {
		cin >> N;
		if(!N) {
			return 0;
		}
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		vector<int> v;
		for(int i = 0; i < N - 5; i++) {
			dfs(i, v);
		} cout << endl;
	}
}
