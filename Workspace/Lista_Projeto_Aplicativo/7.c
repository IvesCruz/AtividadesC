#include <stdio.h>
#include <stdlib.h>

main(){
  int r,x;

  scanf("%d",&x);

  if(x >= 10){
    r = x+5;
    printf("Valor: %d\n",r);
  }else{
    r = x-7;
    printf("Valor: %d\n",r);
  }
}
