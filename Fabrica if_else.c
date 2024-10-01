#include <stdio.h>
#include <locale.h>

int main (void)

{
    setlocale (LC_ALL, "Portuguese");

    float produtos, produtosdefeituosos, manutencao;

    printf ("Informe a quantidade de produtos: ");
    scanf ("%f", &produtos);
    printf ("Informe a quantidade de produtos defeituosos: ");
    scanf ("%f", &produtosdefeituosos);
    manutencao = produtos/produtosdefeituosos;

    if (manutencao<=10) printf ("Precisa de manutenção");
        else printf ("Não precisa de manutenção");
}
