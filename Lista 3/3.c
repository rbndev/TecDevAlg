#include <stdio.h>
#include <string.h>

int main (void) {
	
	char txt1[24] = "Aluno";
	char txt2[14] = "Rubens Melo";
	int i ;
	
	for(i = 0; i!=100; i++){
		
		strncat(txt1, txt2,15);
		printf("frase 1 = %s\n %d", txt1 );
	
	}
	return 0;
}