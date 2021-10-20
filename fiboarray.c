#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"


int main(int argc, char const *argv[]) {
   int n=atoi(argv[1]);
   int fibo[n];
    fibo[0]=0;
    fibo[1]=1;
  for (int i = 2; i < n; i++) {
    fibo[i]=fibo[i-1]+fibo[i-2];
    printf("%d\n",fibo[i] );
  }




  return 0;
}
