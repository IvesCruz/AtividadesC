#include <stdio.h>
#include <stdlib.h>

main(){
  int n,i;

  scanf("%d",&n);

  for(i=1;i<=n;i++){
    if(n%i==0){
      printf("Esses são os seus divisores: %d\n",i);
    }
  }
}
