#include <stdio.h>
/*
 * stdin example
 */

char inputs[101][101];

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%s", inputs[i]);
    }

    printf("####### INPUTS BELOW #######\n");

    for(int i = 0; i < n; i++) {
        printf("%s\n", inputs[i]);
    }
}