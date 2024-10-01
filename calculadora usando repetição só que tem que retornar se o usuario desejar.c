#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "Portuguese");
    float a, b, resultado;
    char operacao, opcao;
    do {
        scanf("%f",&a);
        scanf("%f",&b);
        fflush(stdin);
        scanf("%c",&operacao);

        switch (operacao){
        case '+':
        resultado = a + b;
        break;

        case '-':
        resultado = a - b;
        break;

        case '*':
        resultado = a * b;
        break;

        case '/':
        resultado = a / b;
        break;
        }
        printf ("Resultado: %f\n", resultado);
        printf("Deseja realizar mais uma operação: S/N?\n");
        fflush(stdin);
        scanf("%c",&opcao);
        fflush(stdin);
        }while (opcao == 'S' || opcao == 's');
}
