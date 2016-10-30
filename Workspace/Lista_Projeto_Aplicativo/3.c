#include <stdio.h>
#include <stdlib.h>

int main(){
  float numero;

  printf("Digite um valor: ");
  scanf("%f",&numero);

  numero = numero-1;

  printf("Esse é o antecessor do número: %.1f\n",numero);
}
