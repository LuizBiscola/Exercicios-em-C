#include <stdio.h>

void main ()

{
    int dia, mes, ano;
    printf ("Insira o dia: ");
    scanf(" %d", &dia);
    printf ("Insira o mes: ");
    scanf(" %d", &mes);
    printf ("Insira o ano: ");
    scanf(" %d", &ano);

    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
    {
        if (dia>=1 && dia<=31)
        {
            printf ("Valido");
        }
        else
        {
            printf ("Invalido");
        }
    }
    else if (mes==4 || mes==6 || mes==9 || mes==11)
    {
        if (dia>=1 && dia<=30)
            {
                printf ("Valido");
            }
            else
            {
                printf ("Invalido");
            }
        }
    else if (mes==2)
    {
        if (ano%4==0)
        {
             if (dia>=1 && dia<=29)
            {
                 printf ("Valido");
            }
            else
            {
                printf ("Invalido");
            }
        }
         else if (dia>=1 && dia<=28)
            {
            printf ("Valido");
            }
        else
            {
            printf ("Invalido");
            }
    }
    else
    {
        printf ("invalido");
    }
}
