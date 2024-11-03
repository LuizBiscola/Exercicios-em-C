#include <stdio.h>

void main ()
{
    int a, b;
    scanf (" %d", &a);
    scanf (" %d", &b);

    if (a>=6 && b>=21)
    {
        printf ("\nArovado por notas");
        printf ("\nReprovado por presenca");
    }
    else if (a>=6 && b<=20)
    {
        printf ("\nArovado por notas");
        printf ("\nAprovado por presenca");
    }
    else if (a<=6 && b<=20)
    {
        printf ("\nReprovado por notas");
        printf ("\nAprovado por presenca");
    }
    else if (a<=6 && b>=21)
    {
        printf ("\nReprovado por notas");
        printf ("\nReprovado por presenca");
    }

}
