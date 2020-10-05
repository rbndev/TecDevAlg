#include <stdio.h>

int main(void){

    int tInicial, razao, iRazao, tNum, nTermos, i;  
    tInicial = 1;
    iRazao = 1;
    tNum = 0;

    printf("Digite a razao da progressao geometrica: ");
    scanf("%d", &razao);

    printf("Digite o numero de termos da progressao: ");
    scanf("%d", &nTermos);

    for (i=0; i < nTermos; i++){
        tNum = tInicial * iRazao;
        iRazao = iRazao * razao;
        printf ("%d, ", tNum);
    }
 
    printf ("fim da progressao");
    return 0;

}