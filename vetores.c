#include <stdio.h>
#include <locale.h>

void main (){

    int cont;
    int vetor[10];
    for (cont=0;cont<=9;cont++)
    {
        scanf("\n%d", &vetor[cont]);
    }
    for (cont=0;cont<=9;cont++)
    {
                printf("%d ", vetor[cont]);
    }
}
