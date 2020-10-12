#include <stdio.h>

void main (void){
	unsigned short num1, num2, i, j, c;
	unsigned short aux, aux2;

	scanf("%hu", &c);

	while (c--){

		scanf("%hu %hu", &num1, &num2);

		for (i = num1; i <= num2; i++)
			printf("%hu", i);

		for (i = num2; i >= num1; i--){
			aux = i;
			while (aux){
				aux2 = aux%10;
				printf("%hu", aux2);
				aux = aux/10;
			}
		}	
		printf("\n");
	}
}
