#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"


int main(int argc, char const *argv[]) {
  char *codigo[]={
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--.",
    "....",
    "..",
    ".---",
    "-.-",
    ".-..",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-..-",
    "-.--",
    "--..",
  };

   int i=0;
while (argv[1][i]!=0) {
  printf("%s\t",codigo[argv[1][i]-97] );
  i++;
}
printf("\n" );











  return 0;
}
