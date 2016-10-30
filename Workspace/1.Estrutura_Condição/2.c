#include <stdio.h>
#include <stdlib.h>

main(){
  float imposto, result;
  int ano;

  scanf("%f%f",&ano, &imposto);

  if(ano < 1990)
    result = preco * 0.01;
  else
    result = preco * 0.015;

  printf("Esse é o seu imposto: %.2f",result);
}
