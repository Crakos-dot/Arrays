#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

int main(int argc, char const *argv[]) {

 char *a[]={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
 int b=atoi(argv[1]);
  if (b>12 || b<1) {
   printf("Ponga otro numero,ERROR" );
 }
 else{
   printf("%s\n",a[b-1] );

}   
 }
  return 0;
}
