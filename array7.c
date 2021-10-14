#include "time.h"
#include "stdio.h"
#include "stdlib.h"
#define l 10
//

/*
Escribir un programa que genere un
array de 100 elementos con valores
aleatorios enteros del 0 al 9.
Contar la cantidad de veces que
aparece cada dígito en el array
e imprimir una tabla con las
frecuencias.
if (ray[i]==0) {
  s0++;
}
if (ray[i]==1) {
  s1++;
}
if (ray[i]==2) {
  s2++;
}
if (ray[i]==3) {
  s3++;
}
if (ray[i]==4) {
  s4++;
}
if (ray[i]==5) {
  s5++;
}
if (ray[i]==6) {
  s6++;
}
if (ray[i]==7) {
  s7++;
}
if (ray[i]==8) {
  s8++;
}
if (ray[i]==9) {
  s9++;
}
int s0;
int s1;
int s2;
int s3;
int s4;
int s5;
int s6;
int s7;
int s8;
int s9;
*/
int main(int argc, char const *argv[]) {
  int ray[100];
  srand(time(NULL));
  int rey[]={0,0,0,0,0,0,0,0,0,0};

  for (int i = 0; i < 100; i++) {
    int r=rand();
    r=r%(9+1);
    ray[i]=r;
    printf("%d",ray[i] );
    rey[ray[i]]++;
  }
for (int i = 0; i < 100; i++) {
  printf("%d",rey[i] );
}



  return 0;
}
