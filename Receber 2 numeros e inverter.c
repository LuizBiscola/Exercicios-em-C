#include <stdio.h>
#include <locale.h>
int main (void){
    setlocale(LC_ALL, "Portuguese");
    int a, b, aux;
    printf("Informe o valor de a: ");
        scanf("%d", &a);
    printf("Informe o valor de b: ");
        scanf("%d", &b);
    aux=a;
    a=b;
    b=aux;
    printf("\nOs valores de a é: %d", a);
    printf("\nOs valores de b é: %d", b);
    getche();
}
