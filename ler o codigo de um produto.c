#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"Portuguese");
    int a;
    printf ("Digite o coigo do produto: ");
    scanf("%d", &a);
    switch (a){
    case 1:
    printf("\nAlimento não perecivel");
    break;

    case 2:
    case 3:
    case 4:
    printf("Alimento perecivel");
    break;

    case 5:
    case 6:
    printf("Vestuario");
    break;

    case 7:
    printf("Higiene");
    break;

    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    printf("Limpeza e utensilio domesticos");
    break;

    default:
    printf("Codigo invalidado");
    break;

    }
}
