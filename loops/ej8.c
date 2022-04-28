#include "stdlib.h"
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  while (n > 0) {
    printf("%d", n%10 );
    n /=10;
  }
  printf("\n",n );
  return 0;
}
