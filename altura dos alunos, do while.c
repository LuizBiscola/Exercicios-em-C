#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "Portuguese");

    float altura, media, contador, soma;
    char opcao;
    soma = 0;
    contador = 0;

    do {
    printf("Informe a altura: ");
    scanf(" %f", &altura);
    printf("Deseja realizar nova operação: [S/N]\n");
    scanf (" %c", &opcao);
    contador = contador + 1;
    soma = soma + altura;
    } while (opcao == 'S' || opcao == 's');
    media = soma/contador;
    printf("Média de altura: %f", media);
}
