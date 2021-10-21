#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
 int p=atoi(argv[1]);
 int n=atoi(argv[2]);
 srand(time(NULL));

 int t[n][n];

 for (int i = 0; i < n; i++) {

   for (int j = 0; j < n; j++) {
     int r=rand();
     r=r%100+1;

     if (r<=p ) {
       t[i][j]=1;
       printf("%d  ",t[i][j] );
     }
     else{
       t[i][j]=0;
       printf("%d  ",t[i][j] );

     }

   }
    printf("\n" );
 }



  return 0;
}
