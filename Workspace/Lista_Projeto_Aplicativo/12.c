#include <stdio.h>
#include <stdlib.h>

main(){
  float nota[4],media=0;
  int i;

  for(i = 1; i <= 4; i++){
    printf("Digite a %d nota: ",i);
    scanf("%f",&nota[i]);

    media += nota[i]/4;
  }


    if(media >= 7){
      printf("Aluno aprovado. Essa é a nota: %.2f\n",media);
    }else{
      printf("Aluno reprovado. Essa é a média: %.2f",media);
    }
}
