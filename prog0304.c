#include <stdio.h>

int func(int a, int b, int c)
{
  int *p = &b;

  *(--p) += 1;
  *(++p) += 2;
  *(++p) += 3;
  *(++p) += 4;

  /* A */
  
  return a+b+c;
}


int main(void)
{
  int x;
  x = func(2,3,4);
  printf("x=%d\n", x);

  return 0;
}
