#include <stdio.h>
#include <stdlib.h>

main(){
  int x,y,z;

  scanf("%d%d%d",&x,&y,&z);

  if(x + y >= z && x + z >= y && y + x >= z){
    if(x == y && y == z && z == x){
      printf("Triângulo equilatero");
    }
    else if(x == y || y == z || z == x){
      printf("Triângulo Isosceles");
    }
    else if(x != y && y != z && z != x){
      printf("Triângulo Escaleno");
    }
  }
  else
    printf("Valores inválidos !");
}
