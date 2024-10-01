#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

 void main () {

    setlocale(LC_ALL,"Portuguese");
    int numerorandomico, contador, linha, cartao;
    srand(time(NULL));
    printf(" +-----------------------------+\n");
    for (linha=1;linha<=10;linha++){
            printf(" | ");
        for (contador=1;contador<=6;contador++){
                numerorandomico = (rand ()%60)+1;
                printf("%.02d | ", numerorandomico);
        }
        printf(" \n +-----------------------------+");
        printf("\n");

    }
    //printf(" +-----------------------------+");

 }
