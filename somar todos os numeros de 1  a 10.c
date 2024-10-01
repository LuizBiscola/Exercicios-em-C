#include <stdio.h>

void main (){
    int total, soma;

    total = 0;
    soma = 0;

    while (soma<1000)
    {
        soma=soma+1;
        total=total+soma;
        printf("\nTotal parcial: %d", total);
    }
    printf ("\nTotal: %d", total);
}
