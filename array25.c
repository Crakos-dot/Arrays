#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  int a[3][3]={
    {3,2,1},
    {4,3,2},
    {1,9,8},
  };
  int sum;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (j!=i) {

        printf("%d  ",a[i][j] );
      }
      else{
        sum+=a[i][j];
        printf("%d  ",a[i][j] );

      }

    }
  printf("\n" );

  }
printf("%d\n",sum );









  return 0;
}
