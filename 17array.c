#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
   int a = 0;
   int b = 1;
   int f [n];
   int z [n];
   for (int i = 0; i < n; i++) {
     a = a + b;
    b = a + b;
    f[i]=a;
    z[i]=b;
    printf("%d,",f[i] );
    printf("%d,   \n",z[i] );

       }








  return 0;
}
