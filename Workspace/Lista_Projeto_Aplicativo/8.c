#include <stdio.h>
#include <stdlib.h>

main(){
  float n1,n2;

  scanf("%f%f",&n1,&n2);

  if(n1 > n2){
    printf("O %f é maior !\n",n1);
  }
  if(n2 >n1){
    printf("O %f é maior !\n",n2);
  }
}
