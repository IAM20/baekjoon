#include <iostream>

using namespace std;

int arr[100][100];
int result[100][100];
int trueResult[100][100];
int visited[100];

void writeResult(int writeX, int writtenX, int N) {
    for(int i = 0; i < N; i++) {
        if(result[writtenX][i]) {
            result[writeX][i] = 1;
        }
    }
}

void writeTrueResult(int writeX, int N) {
    for(int i = 0; i < N; i++) {
        trueResult[writeX][i] = result[writeX][i];
    }
}

void flushVisited(int N) {
    for(int i = 0; i < N; i++) {
        visited[i] = 0;
    }
}

void dfs(int N, int startX) {
    if(visited[startX]) {
        return;
    }
    visited[startX] = 1;
    for(int i = 0; i < N; i++) {
        if(arr[startX][i]) {
            result[startX][i] = 1;
            dfs(N, i);
            writeResult(startX, i, N);
        }
    }
}

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        dfs(N, i);
        writeTrueResult(i, N);
        flushVisited(N);
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << trueResult[i][j] << " ";
        } cout << endl;
    }
    return 0;
}