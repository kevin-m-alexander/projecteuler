#include <stdio.h>

int main(void)
{
  int runner, sum = 0, max = 1000;
  
  for (runner = 3; runner < max; runner++) {
    if (runner % 3 == 0 || runner % 5 == 0) {
      sum += runner;
    }
  }
  
  printf("%d\n", sum);
  
  
  return 0;
}
