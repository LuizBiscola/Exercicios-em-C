#include <stdio.h>
#include <locale.h>
#include <math.h>

void main (){
        int b, c, a ;
        c = 0;
        srand(time(NULL));
        b = rand ()%100;

        //printf("Numero gerado: %d\n", b);
        do
        {
            printf("Insira o numero\n");
            scanf("%d", &a);

            c++;
            if (b>a){
                printf("Chute um numero maior\n");
            } else if (b<a) {
                printf("Chute um numero menor\n");
            } else if (b=a) {
                printf("Acertou!\n");
            }
        } while (b!=a);
        printf("Numero de tentativas: %d", c);
}
