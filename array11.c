#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int i=0;
  int sum=0;
  
while (argv[1][i]!=0) {
printf("%c " ,argv[1][i] );
i++;
sum++;
}
printf("\n" );

printf("tiene :%d caracteres\n",sum );
















  return 0;
}
