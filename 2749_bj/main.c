#include <stdio.h>
#define MOD 1000000
#define CYCLE (15 * MOD)/10

unsigned long long int arr[CYCLE];

int main() {
    unsigned long long int n;
    scanf("%llu", &n);
    arr[0] = 0; arr[1] = 1; arr[2] = 1;
    for(int i = 3; i < CYCLE; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        arr[i] %= MOD;
    }
    n %= CYCLE;
    printf("%llu\n", arr[n]);
    return 0;
}