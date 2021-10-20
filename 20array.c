#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

int main(int argc, char  *argv[]) {
int i=0;
while (argv[1][i]!=0) {
   if (argv[1][i]<97) {
     argv[1][i]= argv[1][i]+ 32 ;


   }
    printf("%c\n",argv[1][i] );

  i++;
}


  return 0;
}
