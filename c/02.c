#include <stdio.h>

int main() {
  unsigned long x_1, x_2, sum, new_x_2;
  x_1 = 1;
  x_2 = 1;
  sum = 0;
  new_x_2;
  
  while (x_2 <= 4000000) {
    if (x_2 % 2 == 0) {
      sum += x_2;
    }
    new_x_2 = x_1 + x_2;
    x_1 = x_2;
    x_2 = new_x_2;
  }
  printf("SUM: %lu\n", sum);
}