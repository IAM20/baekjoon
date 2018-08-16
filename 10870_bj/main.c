#include <stdio.h>

int iterFibo(int n) {
    int b4 = 1, b4b4 = 1, result;
    switch(n) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 1;
        default:
            for (int i = 3; i <= n; i++) {
                result = b4 + b4b4;
                b4b4 = b4;
                b4 = result;
            }
            return result;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", iterFibo(n));
    return 0;
}