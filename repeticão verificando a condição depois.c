#include <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL, "Portuguese");
    int a, b, soma;
    char opcao;
    do
    {
        printf(" Informe A:");
        scanf(" %d", &a);
        printf(" Informe B:");
        scanf(" %d", &b);
        soma = a + b;
        printf("Soma: %d", soma);
        printf("\nDeseja realizar nova operação: [S/N]");
        scanf (" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');
}
