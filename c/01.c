#include <stdio.h>
int sum_of_multiples(int max, int mod) {
  int sum = 0;
  int i;
  for (i = 0; i < max; i += mod) {
    sum += i;
  }
  return sum;
}

int main() {
  int sum = sum_of_multiples(1000, 3) + sum_of_multiples(1000, 5) - sum_of_multiples(1000, 15);
  printf("SUM: %d\n", sum);
}