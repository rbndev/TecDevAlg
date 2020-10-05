#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main(void){
    setlocale(LC_ALL, "");
    int i, valor = 0;
    char txt[15], inv[15];

    printf("\nDigite uma palavra: ");
    gets(txt);

    for(i = 0; txt[i]; i++){
        txt[i] = tolower(txt[i]);
    }

    strcpy(inv, txt);
    strrev(inv);

    valor = strcmp(txt, inv);

    if (valor == 0){
        printf("\nA palavra %s é palíndroma\n", txt);
    }else{
        printf("\nA palavra %s não é palíndroma\n", txt);
    }
    
    return 0;
}