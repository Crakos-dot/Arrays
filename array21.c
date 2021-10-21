#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int m [3][3]={
   {1,2,3},
   {2,4,6},
   {7,8,9},

 };
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    printf("%d  ",m[i][j] );

  }
printf("\n" );
}



  return 0;
}
