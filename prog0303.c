#include <stdio.h>

int func(int a)
{
  int b;
  b = a * a;
  return b;
}

int main(void)
{
  int x, y;

  x = 3;
  y = func(x);
  x = 5;
  y = func(x);

  return 0;
}

