#include <stdio.h>
#include <stdlib.h>

main(){
  int nascimento, entrada, codigo, ano_atual;

  printf("Digite seu código: ");
  scanf("%d",&codigo);

  printf("Digite o ano de nascimento: ");
  scanf("%d",&nascimento);

  printf("Digite a data de entrada na empresa: ");
  scanf("%d",&entrada);

  printf("Digite o ano atual: ");
  scanf("%d",&ano_atual);

  entrada = ano_atual - entrada; // DESCOBRI A DATA DE ENTRADA
  nascimento = ano_atual - nascimento; // DESCOBRI A IDADE

  if( (nascimento >= 65) && (entrada >= 30) ){
    printf("O empregado com código: %d já pode se aposentar !");
  }
  if( (nascimento >= 60) && (entrada >= 25) ){
    printf("O empregado com código: %d não pode se aposentar !");
  }
}
