#include <stdio.h>

int main() {

  int menu = 1;

  do{
    printf("SELECIONE UMA DAS OPÇOES\n1: Cerveja\n2: Whisky\n3: Refrigerante\n4: Suco de Laranja\n"
    "5: Suco de Uva\n6: Água mineral\n7: Gelo\n8: Picanha\n9: Batata Frita\n0: Sair\n ");
    scanf("%d", &menu);
    
    switch (menu){
        case 1:
            printf("Woow!!!! Toma ai uma cerveja.\n");
        break;
        case 2:
            printf("Woow!!!! Toma ai uma Whisky.\n");
        break;
        case 3:
            printf("Woow!!!! Toma ai um Refrigerante.\n");
        break;
        case 4:
            printf("Woow!!!! Toma ai um Suco de Laranja.\n");
        break;
        case 5:
            printf("Woow!!!! Toma ai um Suco de Uva.\n");
        break;
        case 6:
            printf("Woow!!!! Toma ai uma Água mineral.\n");
        break;
        case 7:
            printf("Woow!!!! Toma ai um Gelo.\n");
        break;
        case 8:
            printf("Woow!!!! Toma ai uma Picanha.\n");
        break;
        case 9:
            printf("Woow!!!! Toma ai uma Batata Frita.\n");
        break;
        case 0:
            printf("Sorry!!! Volte sempre\n");
        break;
        default:
            printf("Digite uma opção valida!\n");
        break;
    }

  } while (menu != 0);
  
    printf("Bye!!! Até mais :D");
    return 0;
}