#include <stdio.h>
#include <locale.h>
int main (void)
{
    setlocale(LC_ALL,"Portuguese");
    int a;
    printf ("Informe um n�mero: ");
    scanf("%d", &a);
    if (a%2==0){
    printf("Par");}
    else {
    printf("Impar");}
}
