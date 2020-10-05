#include <stdio.h>
#include <string.h>

int main (void){
	char str[6] = "UNIPE";
	int tamanho, i ;
	str[6] = '\0';
	
	for (i = 0; str[i] != '\0'; i++){
		tamanho = strlen(str);
		printf("O tamanho da string %s vale: %d \n", str, tamanho);
	}
	
	return 0;
}