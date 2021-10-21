#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
 int n=atoi(argv[1]);
 int z[n][n];
for (int i = 0; i < n; i++) {

  for (int j = 0; j < n; j++) {

    if (j!=i) {
      z[i][j]=0;
      printf("%d  ",z[i][j] );
    }
    else{
      z[i][j]=1;
      printf("%d  ",z[i][j] );

    }

  }
printf("\n");

}







  return 0;
}
