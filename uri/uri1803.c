#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char matring[4][82];

int getColumn(int cIndex) {
    char numstr[5];
    int num;

    for (int i = 0; i < 4; ++i) {
        numstr[i] = matring[i][cIndex];
    }

    numstr[4] = '\0';

    num = atoi(numstr);

    return num;
}

void readMatring() {
    int ln;
    memset(matring, 0, 4 * 82);
    for (ln = 0; ln < 4; ++ln){
        gets(matring[ln]);
    }
}

int main(void){
    int coluna, colunas, F, L;
    readMatring();
    
    
    colunas = strlen(matring[0]);
    
    F = getColumn(0);
    L = getColumn(colunas - 1);

    for (coluna = 1; coluna < colunas - 1; ++coluna) {
        int c = (F * getColumn(coluna) + L) % 257;
        printf("%c", c);
    }

    printf("\n");
    return 0;
}

