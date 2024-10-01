#include <stdio.h>
#include <locale.h>
int main (void)
{
    setlocale(LC_ALL,"Portuguese");
    int a;
    printf ("Informe um número: ");
    scanf("%d", &a);
    if (a%2==0){
    printf("Par");}
    else {
    printf("Impar");}
}
