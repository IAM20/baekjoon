#include <iostream>
#include <queue>
#include <vector>
using namespace std;


typedef struct data {
    int depth;
    int x;
    int y;
}Data;

int N,M;
int matrix[1001][1001];
int result[1001][1001];
bool visited[1001][1001];
vector<pair<int, int>> v;

Data makeData(int depth, int x, int y) {
    Data data;
    data.depth = depth;
    data.x = x;
    data.y = y;
    return data;
}

void flushVisited() {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            visited[i][j] = false;
        }
    }
}

void bfs() {

    queue<Data> datas;
    int length = v.size();
    for(int i = 0; i < length; i++) {
        Data data = makeData(1, v.at(i).first, v.at(i).second);
        datas.push(data);
        visited[v.at(i).first][v.at(i).second] = true;
    }

    int x, y, depth;
    while(!datas.empty()) {
        depth = datas.front().depth;
        x = datas.front().x;
        y = datas.front().y;
        datas.pop();

        if(x < N - 1) {
            if(!visited[x + 1][y]) {
                visited[x + 1][y] = true;
                if (matrix[x + 1][y] == -1) {
                    result[x + 1][y] = -1;
                } else if(matrix[x + 1][y] == 1) {}
                else if (!matrix[x + 1][y]) {
                    if (result[x + 1][y] != 0) {
                        result[x + 1][y] = (result[x + 1][y] < depth + 1) ? result[x + 1][y] : depth + 1;
                    }
                    else {
                        result[x + 1][y] = depth + 1;
                    }
                    datas.push(makeData(depth + 1, x + 1, y));
                }
            }
        }
        if(x > 0) {
            if(!visited[x - 1][y]) {
                visited[x - 1][y] = true;
                if (matrix[x - 1][y] == -1) {
                    result[x - 1][y] = -1;
                } else if (!matrix[x - 1][y]) {
                    if (result[x - 1][y] != 0) {
                        result[x - 1][y] = (result[x - 1][y] < depth + 1) ? result[x - 1][y] : depth + 1;
                    } else {
                        result[x - 1][y] = depth + 1;
                    }
                    datas.push(makeData(depth + 1, x - 1, y));
                }
            }
        }

        if(y < M - 1) {
            if(!visited[x][y + 1]) {
                visited[x][y + 1] = true;
                if (matrix[x][y + 1] == -1) {
                    result[x][y + 1] = -1;
                } else if (!matrix[x][y + 1]) {
                    if (result[x][y + 1] != 0) {
                        result[x][y + 1] = (result[x][y + 1] < depth + 1) ? result[x][y + 1] : depth + 1;
                    } else {
                        result[x][y + 1] = depth + 1;
                    }
                    datas.push(makeData(depth + 1, x, y + 1));

                }
            }
        }

        if(y > 0) {
            if(!visited[x][y - 1]) {
                visited[x][y - 1] = true;
                if (matrix[x][y - 1] == -1) {
                    result[x][y - 1] = -1;
                } else if (!matrix[x][y - 1]) {
                    if (result[x][y - 1] != 0) {
                        result[x][y - 1] = (result[x][y - 1] < depth + 1) ? result[x][y - 1] : depth + 1;
                    } else {
                        result[x][y - 1] = depth + 1;
                    }
                    datas.push(makeData(depth + 1, x, y - 1));
                }
            }
        }
    }
}

int main() {
    cin >> M >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> matrix[i][j];
            if(matrix[i][j] == 1) {
                v.emplace_back(pair<int, int>(i, j));
                result[i][j] = 1;
            } else if(matrix[i][j] == -1) {
                result[i][j] = -1;
            }
        }
    }
    bfs();
    int resultValue = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(result[i][j] == 0) {
                resultValue = 0;
                break;
            } else {
                resultValue = (result[i][j] > resultValue) ? result[i][j] : resultValue;
            }
        }
        if(resultValue == 0) break;
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << result[i][j] << " ";
        } cout << endl;
    }

    if(resultValue) {
        cout << resultValue - 1 << endl;
    } else if (!resultValue) {
        cout << "-1" << endl;
    }

    return 0;
}