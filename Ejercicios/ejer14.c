#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

int main(int argc, char const *argv[]) {
  int v1 = atoi(argv[1]);
  int v2 = atoi(argv[2]);
  int u1 = atoi(argv[3]);
  int u2 = atoi(argv[4]);
  printf("El producto de los vectores V y U es %d\n", v1*u1 + v2*u2 );
}
