#include <stdio.h>
#include <stdlib.h>

main(){
  int i;

  for(i=1000; i < 2000; i++){
    if(i/11 == 5) {
      printf("Números: %d\n",i);
    }
  }
}
