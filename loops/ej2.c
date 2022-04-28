#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int disc = b*b-4*a*c ;
if (a == 0) {
  printf("No se puede dividir por 0\n");
}
else if (disc < 0) {
  printf("No hay raices en R\n" );
  }
    else {
      printf("%d\n", -b+ );
    }

  return 0;
}
