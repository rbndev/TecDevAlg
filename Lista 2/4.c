#include <stdio.h>

int main(void) {
    int ano;
    printf("Insira um ano qualquer: ");
    scanf("%d", &ano);

    if (ano %4 == 0){
        printf("O ano de %d e bissexto", ano);
    }else{
        printf("O ano de %d nao e bissexto", ano);
    } 
    return 0;
}