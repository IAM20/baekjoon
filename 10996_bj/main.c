#include <stdio.h>

void
func(int n) {
    if(n == 1) {
        printf("*\n");
        return;
    }
    for(int i = 0; i < n * 2; i++) {
        for(int j = 0; j < n; j++) {
            if(i % 2) {
                if(j % 2) {
                    printf("*");
                }else
                    printf(" ");
            } else {
                if(j % 2) {
                    printf(" ");
                }else
                    printf("*");
            }
        } printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}