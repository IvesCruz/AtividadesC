#include <stdio.h>
#include <stdlib.h>

main(){
  int nivel, semana;
  float result,hora;

  printf("Digite seu nível 1/2/3:");
  scanf("%d",&nivel);

  printf("Digite as suas horas trabalhadas por dia: ");
  scanf("%f",&hora);

  printf("Digite quantos dias da semana você trabalha: ");
  scanf("%d",&semana);

  switch(nivel){
    case 1:
      result = ((hora * 12)*semana)*4;
      printf("Esse é seu salário: R$%.2f\n",result);
    break;

    case 2:
      result = ((hora * 17)*semana)*4;
      printf("Esse é seu salário: R$%.2f\n",result);
    break;

    case 3:
      result = ((hora * 17)*semana)*4;
      printf("Esse é seu salário: R$%.2f\n",result);
    break;
    default:
      printf("Nível não existente !!");
  }
}
