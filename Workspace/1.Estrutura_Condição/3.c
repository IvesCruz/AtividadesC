#include <stdio.h>
#include <stdlib.h>

main(){
  float n1,n2,n3;

  scanf("%f%f%f",&n1,&n2,&n3);

  if( (n1 != n2) && (n1 != n3) && (n2 != n3) ){

    if( (n1 > n2) && (n1 >n3) && (n2 > n3) )
      printf("Primeiro > Segundo > Terceiro\n");
    else
      if ( (n1 > n2) && (n1 >n3) && (n3 > n2) )
        printf("Primeiro > Terceiro > Segundo\n");


    if( (n2 > n1) && (n2 > n3) && (n1 > n3) )
        printf("Segundo > Primeiro > Terceiro\n");
    else
      if( (n2 > n1) && (n2 > n3) && (n3 > n1) )
        printf("Segundo > Terceiro > Primeiro\n");


    if( (n3 > n1) && (n3 > n2) && (n1 > n2) )
        printf("Terceiro > Primeiro > Segundo \n");
    else
      if( (n3 > n1) && (n3 > n2) && (n2 > n1) )
        printf("Terceiro > Segundo > Primeiro \n");
  }else
  printf("Algum par de número são iguais !\n");
}
