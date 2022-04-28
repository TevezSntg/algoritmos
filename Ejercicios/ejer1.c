#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "stdbool.h"

int main(int argc, char const *argv[]) {
  double th = atoi(argv[1]);
  printf("%d\n", cos(th)*cos(th)+sin(th)*sin(th))  ;
  return 0;
}
