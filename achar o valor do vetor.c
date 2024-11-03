#include <stdio.h>

void main (){
    int A[]={3,5,1,8,9,13,7,18,25,2};
    int contador,aux;
    aux = A[0];

    for (contador=0;contador<10;contador++){
        if (aux<A[contador])
        {
            aux = A[contador];
        }
    }
    printf("%d", aux);
}
