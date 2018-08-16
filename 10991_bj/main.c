#include <stdio.h>

int main() {
    int n;
    int k;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(k = 0; k < n - i - 1; k++) {
            printf(" ");
        }
        for(int j = 0; j < n + i - (k - 1); j++) {
            if(j % 2)
                printf(" ");
            else
                printf("*");

        } printf("\n");
    }
    return 0;
}