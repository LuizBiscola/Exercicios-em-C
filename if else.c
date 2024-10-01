#include <stdio.h>
#include <locale.h>
int main (void)
{
    setlocale (LC_ALL, "Portuguese");

    float papeis;

    printf ("Insira o número de papeis: ");
    scanf ("%f", &papeis);

    if (papeis<=200) (papeis*0,40);
        else (papeis*0,20);
        {
            if (papeis>=500) (papeis*0,10);
 else printf ("O valor pago será: %.2f", papeis);
        }




}

