#include "stdlib.h"
#include "stdio.h"

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int res;
  res = 1;
  if (n == 0) {
    printf("%d\n",res );
  }
  else{
    while (n>0){
      res= res * n;
      n--;
    }
    printf("%d\n",res );
  }
  return 0;
}
