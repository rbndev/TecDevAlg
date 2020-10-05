#include <stdio.h>

int main(void){
	int i;
    char fnt[20] = " ";
    char cp[20] = " ";

    printf("Fonte: ");
    scanf("%s",fnt);

    for (i=0; fnt[i] != '\0'; i++){
        cp[i] = fnt[i];
    }
    
    printf("copia: %s\nfonte: %s\n", cp, fnt);
	return 0;
}