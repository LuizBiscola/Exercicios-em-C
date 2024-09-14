// Exercicio da Sequencia de fibbonaci

#include <stdio.h>
void main (){
    int fixo, anterior, proximo, contador;
    anterior = 1;
    proximo = 1; 
    fixo = 1;

    printf("\n1");
    printf("\n1");
    
    for (contador=0;contador<=21;contador++){
        proximo = anterior + fixo;
        fixo = proximo;
        
        anterior = fixo;
        printf("\n%d", proximo);
    }
}
