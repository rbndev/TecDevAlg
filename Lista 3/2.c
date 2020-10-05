#include <stdio.h>
#include <string.h>

int main (void) {
	
	char str1[4] = "abc";
	char str2[4] = "abc";
	int retorno, i;
	
	for (i=0 ;retorno !=1; i++){
        retorno = strcmp(str1,str2);
        printf("Retornando = %d \n", retorno);
	}
	return 0;
}