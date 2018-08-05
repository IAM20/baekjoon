#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

int compare(void * first, void * second) {
    return *(int *)first - *(int *)second;
}

int
main(void) {
    int n;
    scanf("%d", &n);
    int * arr = (int *)malloc(sizeof(int)*(n+1));

    long long max = 0;
    long long sum = 0;
    int before_minus = FALSE;
    int has_zero = FALSE;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            has_zero = TRUE;
        }
    }

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(max < sum) {
            max = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }

    if(!has_zero) {
        if(sum == 0) {
            qsort(arr, n, sizeof(int), compare);
            max = arr[n - 1];
        }
    }

    printf("%lld\n", max);
    free(arr);
}