#include <stdio.h>
#include <locale.h>
int main (void)
{
    setlocale(LC_ALL,"Portuguese");
    char nome[40];
    char cpf [12];
    int dia, mes, ano;

    printf ("Nome: ");
    gets(nome);
    printf ("Dia: ");
    scanf("%d", &dia);
    printf ("Mes: ");
    scanf("%d", &mes);
    printf ("Ano: ");
    scanf("%d", &ano);
    printf ("Cpf: ");
    fflush (stdin);
    gets (cpf);

    printf("\n|Nome: %s", nome);
    printf("\n|Data nascimento: %d/%02d/%d", dia, mes, ano);
    printf("\n|Cpf: %s", cpf);
}
