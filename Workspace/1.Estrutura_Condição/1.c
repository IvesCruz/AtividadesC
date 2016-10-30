#include <stdio.h>
#include <stdlib.h>

main(){
  int n1,n2

  scanf("%d%d",&n1,&n2);

  if(n1 == n2){
    printf("Números são iguais !");
  }
  if(n1 > n2){
    printf("São diferentes. %d é maior !",n1);
  }else{
    printf("São diferentes. %d é maior !",n2);
  }
}
