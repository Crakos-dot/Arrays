#include "time.h"
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int ray [100];
  int max=-999999;
  int min=999999;
  double g;

  for (int i = 0; i < 100; i++) {
   int r=rand();
   r=r%100;
   ray[i]=r;
   if (ray[i]>max) {
     max=ray[i];
   }
  if (ray[i]<min) {
    min=ray[i];
  }
  g=g+ray[i];
  }

 printf("el maximo es:%d\n",max );
  printf("el minimo es:%d\n",min );
   printf("el average es:%f\n",g/100 );


  return 0;
}
