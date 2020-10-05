#include <stdio.h>

int main(void){

    int tInicial, razao, tNum, nTermos, i;
    tInicial = 0;
    tNum = 0;
    printf("Digite a razao da progressao aritmetica: ");
    scanf("%d", &razao);
    printf("Digite o numero de termos da progressao: ");
    scanf("%d", &nTermos);

    for (i=0; i < nTermos; i++){
        tNum = tInicial + i*razao;
        printf ("%d, ", tNum);
    }

    printf ("fim da progressao");
    return 0;
}