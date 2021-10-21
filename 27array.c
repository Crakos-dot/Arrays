#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char const *argv[]) {
  int p=atoi(argv[1]);
  int n=atoi(argv[2]);
  srand(time(NULL));

  int t[n+2][n+2];
  int summ=0;
  for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++) {
      int r=rand();
      r=r%100+1;

      if (r<=p ) {
        t[i][j]=1;
        printf("%d  ",t[i][j] );
      }
      else{
        int x=0;
        if (t[i][j]==1) {
          summ++;
        }
        x++;
       t[i][j]=summ;
       printf("%d  ",summ );
      }

    }
     printf("\n" );
  }



printf("\n" );


for (int i = 0; i <= 9; i++) {
  for (int j = 0; j <= 9; j++) {
    int x=0;
    if (t[i+x][j+x]==1) {
      summ++;
    }
    x++;
  }
  printf("\n" );
}




  return 0;
}
