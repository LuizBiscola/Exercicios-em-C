#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale (LC_ALL, "portuguese");

    int a;
    float b;
    printf ("O n�mero de folhas a serem compradas � de:");
    scanf ("%d", &a);

    if (a>=100) (b=a*0.20);
        else (b=a*0.25);

    printf("O valor a ser pago nas folhas ser� de:%.2f",b);
    getche ();
}
