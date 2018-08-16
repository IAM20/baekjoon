#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("*");
        }printf("\n");
    }
    for(int i = n - 1; i > 1; i--) {
        for(int j = 0; j < i; j++) {
            printf("*");
        }printf("\n");
    }
    if(n > 1)
        printf("*");
    return 0;
}