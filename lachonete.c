#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "Portuguese");
    int produto, quantidade;
    float auxiliar, total;
    char opcao;

    do {
        printf("Qual o produto");
        scanf("%d",&produto);
        printf("Qual a quantidade");
        scanf("%d",&quantidade);

        switch (produto){
        case 1:
        auxiliar  = quantidade * 6.00;
        break;

        case 2:
        auxiliar  = quantidade * 8.00;
        break;

        case 3:
        auxiliar  = quantidade * 4.50;
        break;

        case 11:
        auxiliar  = quantidade * 5.00;
        break;

        case 12:
        auxiliar  = quantidade * 5.20;
        break;
        }
        total = total + auxiliar;
        printf("Quer algo mais?: S/N?\n");
        fflush(stdin);
        scanf (" %c", &opcao);

        }while (opcao == 'S' || opcao == 's');
        printf("Total: %f", total);
}
