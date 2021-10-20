#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

int main(int argc, char const *argv[]) {
  int lenght;
  int i=0;
  while (argv[1][lenght]!=0) {
    lenght++;
     i++;






  }
  printf("%s tiene %d chars\n",argv[1] ,i);

  bool es_palindromo=true;


  for (int i = 0; i < lenght/2; i++) {

    if (!(argv[1][i]==argv[1][lenght-i-1])) {
    es_palindromo=false;
  }



  }
  printf("es palindromo\n" );
  return 0;
}
