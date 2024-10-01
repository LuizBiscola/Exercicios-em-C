#include <stdio.h>
#include <locale.h>

void main (){
    int contador;
    int A[6]={5,7,10,13,15,18};
    int B[6]={9,12,17,25,30,2};
    int C[6];
    for (contador=0;contador<=5;contador++)
    {
        C[contador]=A[contador]+B[contador];
    }
    for (contador=0;contador<=5;contador++)
    {
        printf("%d ", C[contador]);
    }
}
