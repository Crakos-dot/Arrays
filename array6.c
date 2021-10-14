#include "time.h"
#include "stdio.h"
#include "stdlib.h"
#define n 3

int main(int argc, char const *argv[]) {
   int vec[]={1,10,4};
   int vac[]={10,3,10};
   int r;
   for (int i = 0; i < n; i++) {
     int mu=vec[i]*vac[i];
     r=r+mu;
   }
   printf("el valor es:%d\n", r);







  return 0;
}
