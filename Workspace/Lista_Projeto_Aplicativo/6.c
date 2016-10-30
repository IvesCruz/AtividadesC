#include <stdio.h>
#include <stdlib.h>

int main(){
  float total, brancos, nulos;

  do{
    printf("Digite os votos totais, brancos e nulos: ");
    scanf("%f%f%f",&total,&brancos,&nulos);
  }while( (brancos > total && nulos > total) );

  brancos = ((brancos*100)/total);
  nulos = ((nulos*100)/total);

  printf("Essa é a porcentagem de votos em branco: %.2f%\n",brancos);
  printf("Esse é a porcentagem de votos núlos: %.2f%\n",nulos);
}
