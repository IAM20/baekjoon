#include <stdio.h>

#define YES 1
#define NO 0

int arr[1001][1001];
int arr_2[1001][1001];
int hasArrivedDfs[1001];
int hasArrivedBfs[1001];
int bfsQueue[1001];
int queueElement = 0;
int now = 0;

void printBfs(int v, int n);
void printDfs(int v, int n);

int main() {
    int n, m, v, src, dest;
    scanf("%d %d %d", &n, &m, &v);

    for(int i = 0; i < m; i++) {
        scanf("%d %d", &src, &dest);
        arr[src][dest] = arr[dest][src] = YES;
        arr_2[src][dest] = arr_2[dest][src] = YES;
    }

    printDfs(v, n);
    printf("\n%d ", v);
    bfsQueue[queueElement++] = v;
    printBfs(v, n);
}

void printDfs(int v, int n) {
    if(hasArrivedDfs[v]) {
        return;
    }

    hasArrivedDfs[v] = YES;
    printf("%d ", v);
    for(int i = 1; i <= n; i++) {
        if(arr[v][i]) {
            arr[v][i] = arr[i][v] = NO;
            printDfs(i, n);
        }
    }

}

void printBfs(int v, int n) {
    if(now == 1001 || bfsQueue[now] == 0) {
        return;
    }
    for(int i = 1; i <= n; i++) {
        if(arr_2[v][i]) {
            if(hasArrivedBfs[i]) {
                continue;
            }
            hasArrivedBfs[i] = YES;
            arr_2[v][i] = arr_2[i][v] = NO;
            printf("%d ", i);

            bfsQueue[queueElement++] = i;
        }
    }
    printBfs(bfsQueue[++now], n);
}