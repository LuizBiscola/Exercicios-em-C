#include <stdio.h>
#include <locale.h>

void main (){
    int vetorA[10]={5,10,15,6,45,32,76,23,9,12};
    int contador=0;
    int numero;
    int status=0;
    char opcao;
    do {
    printf("Informe onumero: ");
    scanf("%d", &numero);
    while(contador<10)
    {
        if (numero == vetorA[contador])
        {
            printf("Numer %d existe no vetor", numero);
            status=1;
        }
        contador++;
    }
    if (status==0){
        printf("Numero nao esta no vetor");
    }
    printf("\nDeseja continuar? S/N");
    fflush(stdin);
    scanf("%c", &opcao);
    }while(opcao=='S' || opcao=='s');
}

