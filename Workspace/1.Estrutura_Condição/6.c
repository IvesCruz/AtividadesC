#include <stdio.h>
#include <stdlib.h>

main(){
  float altura;
  char sexo;

  printf("Digite sua altura: ");
  scanf("%f",&altura);

  printf("Digite seu sexo H/M: ");
  scanf("%s",&sexo);

  switch (sexo) {
    case 'H':
      altura = ((72.7 * altura)-58);
      printf("Esse é seu peso ideal: %.2f\n",altura);
    break;

    case 'M':
      altura = ((62.1 * altura) - 44,7);
      printf("Esse é seu peso ideal: %.2f\n",altura);
    break;
  }
}
