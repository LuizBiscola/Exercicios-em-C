#include <stdio.h>

void main ()
{
 float a,b,c, maior;
 scanf (" %f", &a);
 scanf (" %f", &b);
 scanf (" %f", &c);
 maior =a;
 if (maior<b)
    {
     maior = b;
    }
 if (maior<c)
    {
     maior = c;
    }
    printf("O maior numero é: %f", maior);
}
