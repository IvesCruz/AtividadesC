#include <stdio.h>
#include <stdlib.h>

main(){
  int n,i;

  scanf("%d",&n);

  if(n > 0){
    for(i = 1; i <= n; i++){
      printf("%d\n",i);
    }
  }else{
    printf("O número é menor do que zero ou é zero !\n");
  }
}
