#include <stdio.h>

/*
 * https://www.acmicpc.net/problem/1003
 * Counting fibonacci
 * CSE 2013008264 LEE
 *
 */
int zero, one;

int
fibo(int n)
{
  
  if(n == 0) {
    zero++;
    return 0;
  } else if(n == 1) {
    one++;
    return 1;
  } else
    return fibo(n-1) + fibo(n-2);
}

int
main(int argc, char * argv)
{
  int iter, n;
  scanf("%d", &iter);
  for(int i = 0; i < iter; i++) {
    scanf("%d", &n);
    fibo(n);
    printf("%d %d\n", zero, one);
    zero = one = 0;
  }
  return 0;
}
