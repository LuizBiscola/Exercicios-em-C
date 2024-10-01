#include <stdio.h>
#include <locale.h>
int main (void)
{
    setlocale(LC_ALL,"Portuguese");
    int quantidadefotos;
    float valortotalfotos;
    printf ("Informe a quantidade de fotos: ");
    scanf ("%d", &quantidadefotos);
    if (quantidadefotos>=200)
    {valortotalfotos=quantidadefotos*0.20;}
        else {valortotalfotos=quantidadefotos*0.40;}

    printf("R$: %.2f", valortotalfotos);
}
