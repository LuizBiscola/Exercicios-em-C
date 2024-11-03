#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"Portuguese");
    int valorproduto, resultado, calculo, formapagamento;

    printf("Qual o valor do produto: ");
    scanf("%d", &valorproduto);

    printf("Forma de pagamento:");
    printf("\n1 - À vista em dinbheiro ou cheque, recebe 10%% de desconto");
    printf("\n2 - À vista no cartão de crédito, recebe 15%% de desconto");
    printf("\n3 - Em duas vezes, preço normal da etiqueta sem juros");
    printf("\n4 - Em duas vezes, preço norml da etiqueta mais juros de 10%");
    printf("\nQual a forma de pagamento?\n");
    scanf("%d", &formapagamento);

    switch (formapagamento){
    case 1:
    resultado = valorproduto*0.1;
    resultado = valorproduto - resultado;
    printf ("Valor final: %d", resultado);
    break;

    case 2:
    resultado = valorproduto*0.15;
    resultado = valorproduto - resultado;
    printf ("Valor final: %d", resultado);
    break;

    case 3:
    resultado = valorproduto/2;
    printf ("Duas parcelas de: %d", resultado);
    printf ("Valor total: %d", valorproduto);
    break;

    case 4:
    resultado = valorproduto*0.15;
    resultado = valorproduto + resultado;
    calculo = resultado/3;
    printf ("Tres parcelas de: %d", calculo);
    printf ("Valor total: %d", resultado);

    default:
    printf ("Metodo de pagamento incorreto");
    break;
    }
}

