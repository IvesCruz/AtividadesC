#include <stdio.h>
#include <stdlib.h>

int main(){
  int varA, varB, aux;

  printf("Digite um valor para A: ");
  scanf("%d", &varA);

  printf("Digite um valor para B: ");
  scanf("%d", &varB);

  aux = varA;
  varA = varB;
  varB = aux;

  printf("Esse é o valor de A atual: %d.\nEsse é o valor de B atual: %d.\n",varA,varB);
}
