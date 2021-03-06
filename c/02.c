#include <stdio.h>

// Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
// By starting with 1 and 2, the first 10 terms will be:
// 
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// 
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
// find the sum of the even-valued terms.

unsigned long sum_of_modded_fib_sequence(unsigned long max, int mod) {
  unsigned long x_1, x_2, sum, new_x_2;
  x_1 = 1;
  x_2 = 1;
  sum = 0;
  
  while (x_2 <= max) {
    if (x_2 % mod == 0) {
      sum += x_2;
    } else {}
    
    new_x_2 = x_1 + x_2;
    x_1 = x_2;
    x_2 = new_x_2;
  }
  return sum;
}


int main() { printf("SUM: %lu\n", sum_of_modded_fib_sequence(4000000, 2)); }