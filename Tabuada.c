#include <stdio.h>

void main (){
    int num, aux, aux2;
    scanf("%d",&num);
    aux=0;
    while(aux<20)
    {
        aux = aux +1;
        aux2 = aux*num;
        printf ("\n%dx%d=%d", num, aux, aux2);
    }
}
