#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {


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
    "-.--",
    "--..",

  };
  int j=1;
  while (j<argc) {
    int i=0;
    while (argv[j][i] != 0) {
       printf("%s ",codigo[argv[j][i]-97] );

      i++;
    }
    printf(" | ");
    j++;
  }
  printf("\n");
  return 0;

}
