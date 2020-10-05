#include <stdio.h>

int main(void){
  unsigned long int fatorial = 1;
  int num, i;
  
  printf("Digite um numero inteiro qualquer: ");
  scanf("%d", &num);
  
  for (i=1; i<=num; i++){
        fatorial=fatorial*i;
        printf("i: %d, fatorial: %lu\n",i,fatorial);
    }
  
  printf("fatorial de %d vale %lu", num, fatorial);

  return 0;
}