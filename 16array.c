#include <stdio.h>
#include <stdlib.h>
#include "stdbool.h"

int main(int argc, char const *argv[]) {

  char *pal[]={"hola","perro","gato","asd"};
    for (int i = 0; i < 4; i++) {
      int j=0;
      bool iguales =true;
      while (argv[1][j]!=0) {
        if (!(pal[i][j]==argv[1][j])) {
        iguales=false;
        j++;
        }
        if (iguales) {
          printf("%d\n",i );
          return 0;

      }

    if (pal[i][j]==0) {
      printf("-1\n" );
    }
      }
    }
















  return 0;
}
