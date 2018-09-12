#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int M, N;

bool visited[1001];

vector<int> remaining;
vector<int> adjaList[1000];

int findFirst() {
    for(int i = 0; i < N; i++) {
        if(!visited[i])
            return i;
    }
}

void remove(int digit) {
    int length = remaining.size();

    for(int i = 0; i < length; i++) {
        if(remaining.at(i) == digit) {
            remaining.erase(remaining.begin() + i);
            break;
        }
    }
}

int bfs() {
    int remain = N;
    int result = 0;
    int vertex;
    int tmp;

    queue<int> q;
    q.push(0);
    visited[0] = true;
    remaining.erase(remaining.begin() + 0);

    remain--;

    while(remain) {
        result++;
        while (!q.empty()) {
            vertex = q.front();
            q.pop();

            int size = adjaList[vertex].size();
            for(int i = 0; i < size; i++) {
                tmp = adjaList[vertex][i];
                if(!visited[tmp]) {
                    visited[tmp] = true;
                    remove(tmp);
                    remain--;
                    q.push(tmp);
                }
            }
        }
        if(remain) {
            int t = remaining.front();
            q.push(t);
            remove(t);
            visited[t] = true;
            remain--;
            if(remain == 0)
                result++;
        }
    }
    return result;
}


int main() {
    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        remaining.push_back(i);
    }

    if(M == 0) {
        cout << N << endl;
        return 0;
    }

    int x, y;
    for(int i = 0; i < M; i++) {
        cin >> x >> y;
        adjaList[x - 1].push_back(y - 1);
        adjaList[y - 1].push_back(x - 1);
    }

    cout << bfs() << endl;

    return 0;
}