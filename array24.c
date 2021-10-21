#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a[3][3]={
    {3,2,1},
    {4,3,2},
    {1,9,8},
  };
  int b[3][3]={
    {1,2,3},
    {2,3,4},
    {8,9,1},
  };
  int c[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
    c[i][j]=a[i][j]+b[i][j];
    printf("%d   ",c[i][j] );
    }
   printf("\n" );
  }



  return 0;
}
