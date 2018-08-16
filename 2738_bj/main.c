#include <stdio.h>
#include <stdlib.h>

int main() {
    int **first_matrix;
    int **second_matrix;

    int n, m;
    scanf("%d %d", &n, &m);
    if ((first_matrix = (int **) malloc(sizeof(int *) * n)) == NULL) {
        perror("HEAP IS FULL");
        exit(1);
    }

    if ((second_matrix = (int **) malloc(sizeof(int *) * n)) == NULL) {
        perror("HEAP IS FULL");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        if ((first_matrix[i] = (int *) malloc(sizeof(int) * m)) == NULL) {
            perror("HEAP IS FULL");
            exit(1);
        }
        if ((second_matrix[i] = (int *) malloc(sizeof(int) * m)) == NULL) {
            perror("HEAP IS FULL");
            exit(1);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &first_matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &second_matrix[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            first_matrix[i][j] += second_matrix[i][j];
        }
    }

    int i = 0;
    int j = 0;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < m - 1; j++) {
            printf("%d ", first_matrix[i][j]);
        }printf("%d\n", first_matrix[i][j]);
    }
    for(j = 0; j < m - 1; j++) {
        printf("%d ", first_matrix[i][j]);
    }printf("%d", first_matrix[i][j]);

    for(i = n - 1; i >= 0; i--) {
        free(second_matrix[i]);
        free(first_matrix[i]);
    }
    free(second_matrix);
    free(first_matrix);

    return 0;
}