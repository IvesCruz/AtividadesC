#include <stdio.h>
#include <stdlib.h>

main(){
  float receita,despesa,calc;

  printf("Digite a receita: ");
  scanf("%f",&receita);

  printf("Digite a despesa: ");
  scanf("%f",&despesa);

  calc = receita - despesa;

  if(calc > 0){
    printf("A empresa está tendo lucro. Esse é o lucro: R$%.2f\n",calc);
  }else{
    printf("A empresa não está tendo lucro. Esse é o prejuízo: R$%.2f\n",calc);
  }
}
