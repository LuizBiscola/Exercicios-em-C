#include <stdio.h>
#include <locale.h>
int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    int a, resultado, resto, dezena, unidade, soma;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    resultado=a/10;
    resto=a%10;
    dezena=resto*10;
    unidade=resultado;
    soma=dezena+unidade;
    printf("Resultado do número invertido é: %d", soma);

}
