#include <stdio.h>

void main ()
{
    float aux, saldo, saque;
    printf("Informe o saldo: ");
    scanf (" %f",&saldo);

    if (saldo>0)
    {
        printf ("Informe o valor de saque: ");
        scanf(" %f", &saque);
        if (saque<=saldo)
        {
            aux = saldo-saque;
            printf("\nSeu saque foi efetuado com sucesso no valor de: %.1f", saque);
            printf("\nSeu novo saldo: %.2f", aux);
        }
        else
            {
                printf("Saldo insuficiente");
            }
    }
    else
    {
        printf("Saldo negativo para saque");
    }
    }

