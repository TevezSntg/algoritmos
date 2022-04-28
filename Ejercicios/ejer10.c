#include "stdio.h"
#include "stdlib.h"
#include "math.h

int int main(int argc, char *argv[]) {
  double P = atof(argv[1]);
  double r = atof(argv[2]);
  double t = atof(argv[3]);
  double capital_final = P * exp(r * t);
  printf("Al cabo de %.2f años tengo %.2f plata"\n",t, capital_final );
  return 0;
}
