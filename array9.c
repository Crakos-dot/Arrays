#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[]) {
  int par [20];
  for (int i = 0; i < 20; i++) {
    par[i]=i*2;


  }
  for (int i = 0; i < 20/2; i++) {
    int temp =par[20-1-i];
    par[20-1-i]=par [i];
    par[i]=temp;

  }
  for (int j = 0; j < 20; j++) {
    printf("%d\n",par[j] );
  }



  return 0;
}
