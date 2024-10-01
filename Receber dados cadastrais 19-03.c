#include <stdio.h>
#include <locale.h>
int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    char nome[40];
    char endereco[50];
    char bairro[40];
    char cidade[40];
    char uf[3];
    char cep[9];
    printf("Informe o nome: ");
    gets(nome);
    printf("Informe o Endereço: ");
    gets(endereco);
    printf("Informe o Bairro: ");
    gets(bairro);
    printf("Informe a Cidade: ");
    gets(cidade);
    printf("Informe o UF: ");
    gets(uf);
    printf("Informe o CEP: ");
    gets(cep);
    printf("\n|Nome: %s",nome);
    printf("\n|Endereço: %s",endereco);
    printf("\n|Bairro: %s",bairro);
    printf("\n|Cidade: %s",cidade);
    printf("\n|UF: %s", uf);
    printf("\n|CEP: %s", cep);
    getche();
}
