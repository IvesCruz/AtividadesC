#include <stdio.h>
#include <stdlib.h>

main(){
  float n1,n2;

  scanf("%f%f",&n1,&n2);

  if(n1 > n2){
    printf("O primeiro é maior do que o segundo !");
  }
  if(n2 > n1){
    printf("O segundo é maior do que o primeiro !");
  }else{
    printf("Os números são iguais !");
  }
}
