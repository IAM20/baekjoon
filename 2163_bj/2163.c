#include <stdio.h>

int 
main(void)
{
  int n, m, result;
  scanf("%d %d", &n, &m);

  if(n > m) {
    result = (m-1) + m * (n - 1);
  }else
    result = n-1 + n * (m-1);

  printf("%d\n", result);
  return 0;
}
