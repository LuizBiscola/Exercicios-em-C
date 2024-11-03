#include <stdio.h>

void main ()
{
    char sinal;
    int a, b;
    float c;
    scanf (" %d", &a);
    scanf (" %d", &b);
    fflush(stdin);
    scanf (" %c", &sinal);

    switch (sinal){
    case '+':
        c=a+b;
        printf("Soma:%f",c);
        break;

    case '-':
        c=a-b;
        printf("Subtracao:%f",c);
        break;

    case '*':
        c=a*b;
        printf("Multiplicacao:%f",c);
        break;

    case '/':
        c=(float)a/b;
        printf("Divisao:%f",c);
        break;

    default:
         printf("Operador invalido");
         break;
    }
}
