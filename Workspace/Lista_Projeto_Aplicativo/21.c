#include <stdio.h>
#include <stdlib.h>

main(){
  int fat=1, n;

  scanf("%d", &n);
  if(n > 1){
    for(fat; n > 1; n--){
      fat *= n;
    }
    fflush(stdin);
    printf("Fatorial é: %d\n", fat);
  }else{
    printf("Fatorial é 1\n");
  }
}
