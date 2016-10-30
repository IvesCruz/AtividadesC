#include <stdio.h>
#include <stdlib.h>

main(){
  float salario, new_sal;

  printf("Digite o seu salário: ");
  scanf("%f",&salario);

  if(salario <= 500){
    new_sal = salario+(salario * 0.15);
  }
  if(salario <= 1000){
    new_sal = salario+(salario * 0.15);
  }
  if(salario > 1000){
      new_sal = salario+(salario * 0.05);
  }
  printf("Seu salário atual: %.2f. Esse é o novo salário: %.2f",salario,new_sal);
}
