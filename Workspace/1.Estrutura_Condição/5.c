#include <stdio.h>
#include <stdlib.h>

//SUBENTENDA QUE O PREÇO É O PREÇO TOTAL !!
//FORMULA SE NÃO FOSSE: preco = ( (preco*quantidade)-((preco*quantidade)*0.1) );

main(){
  char nome[255];
  float preco;
  int quantidade;

  scanf("%s%f%d",&nome,&preco,&quantidade);

  if( (quantidade > 10) && (quantidade < 21) )
    preco = (preco-(preco*0.1));
  if( (quantidade > 20) && (quantidade <= 50) )
    preco = (preco -(preco*0.2));
  if(quantidade > 50)
    preco = (preco-(preco*0.25));

  printf("Seu produto: %s. Total: %.2f.",nome,preco);
}
