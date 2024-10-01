#include <stdio.h>
#include <windows.h>

void main (){
    float a,contador;
    char nome[10];

    scanf("%f", &contador);

    fflush(stdin);
    gets(nome);

    a=1;
    while (a<contador){
        printf ("\nPedido numero: %.1f do cliente %s", a, nome);
        a=a+1;
        Sleep(1000);
    }
}
