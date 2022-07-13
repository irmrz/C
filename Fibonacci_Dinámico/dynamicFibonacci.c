#include <stdio.h>

unsigned int fibonacci(unsigned int f) {
  unsigned int array[f+2];
  array[0] = 0;
  array[1] = 1;
  
  for (unsigned int i = 2; i <= f; i++) {
    array[i] = array[i-1] + array[i-2];    
  }
  return array[f];
}
int main(unsigned int fib) {
  printf("Inserte el n-esimo número que desea buscar:\n");
  scanf("%u",&fib);
  printf("%u\n",fibonacci(fib));

  return 0;
}
