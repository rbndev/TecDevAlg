#include <stdio.h>

int main(void) {
  
  int num = 0;
  
  printf("Digite um Numero ");
  scanf("%d", &num);
  
  if (num == 0){
    printf("\n Numero 0 nao e valido! \n");
  } else{
        if (num %2 == 0){
            printf("o numero %d e par!\n", num);
        }else{
            printf("o numero %d e impar!\n", num);
        }
    }
  printf("\nPrograma finalizado com sucesso!");
  return 0;
}