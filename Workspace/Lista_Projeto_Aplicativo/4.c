#include <stdio.h>
#include <stdlib.h>

int main(){
  float base, altura,area;

  printf("Digite a base e a altura: ");
  scanf("%f%f",&base,&altura);

  area = base*altura;

  printf("Essa é a área do retângulo: %.1f\n",area);
}
