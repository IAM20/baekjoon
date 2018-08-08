#include <stdio.h>

/**
 * Author : yd-lee
 * DP
 */
 typedef struct {
     int value;
     int B4;
     int B4B4;
 } value;

 value dp[301];

 void func(int n) {
     dp[1].B4 = dp[1].B4B4 = dp[1].value;
     dp[2].B4 = dp[1].value + dp[2].value;
     dp[2].B4B4 = dp[2].value;

     for(int i = 3; i <= n; i++) {
         dp[i].B4 = dp[i - 1].B4B4 + dp[i].value;
         dp[i].B4B4 = ((dp[i - 2].B4 > dp[i - 2].B4B4) ? dp[i - 2].B4 : dp[i - 2].B4B4) + dp[i].value;
     }
 }

 int
 main(int argc, char * argv[]) {
     int n;
     scanf("%d", &n);
     for (int i = 1; i <= n; i++) {
         scanf("%d", &dp[i].value);
     }
     func(n);
     printf("%d\n", (dp[n].B4 > dp[n].B4B4) ? dp[n].B4 : dp[n].B4B4);

     return 0;
}