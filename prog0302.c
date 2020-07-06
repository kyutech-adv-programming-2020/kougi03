#include <stdio.h>

struct DATA {
  int x, y;
};

int main(void)
{
  struct DATA a, b;
  a.x = 3;
  a.y = 4;
  a.x++;
  a.y--;

  b = a;

  return 0;
}
