#include <stdio.h>
#include <stdlib.h>

main(){
  char nome[255];
  int quantidade;
  float preco,total;

  printf("Digite o nome do produto: ");
  scanf("%s",&nome);

  printf("Digite a quatidade comprada: ");
  scanf("%d",&quantidade);

  printf("Digite o preço do produto: ");
  scanf("%f",&preco);

  if(quantidade <= 5){
    total = ( (quantidade * preco) - ((quantidade * preco) * 0.02));
  }
  if((quantidade > 5) && (quantidade <=10)){
    total = ((quantidade * preco) - ((quantidade * preco) * 0.03));
  }
  if(quantidade > 10){
    total = ((quantidade * preco) - ((quantidade * preco) * 0.05));
  }

  printf("%s que teve %d unidades compradas ficou com o preço de: %.2f",
          nome,quantidade,total);
}
