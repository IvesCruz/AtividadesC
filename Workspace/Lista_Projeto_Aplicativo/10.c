#include <stdio.h>
#include <stdlib.h>

main(){
  float n1,n2,calc;

  scanf("%f%f",&n1,&n2);

  if(n1 > n2){
    calc = n1/n2;
    printf("Esse é o calculo: %.1f\n",calc);
  }else{
    calc = n2/n1;
    printf("Esse é o calculo: %.1f\n",calc);
  }
}
