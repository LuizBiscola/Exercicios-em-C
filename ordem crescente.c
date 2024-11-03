#include <stdio.h>

void main ()
{
    float a,b,c;
    scanf(" %f",&a);
    scanf(" %f",&b);
    scanf(" %f",&c);

    if (a<b && a<c)
    {
        if (b<c)
        {
            printf (" %2.f %2.f %2.f", a, b, c);
        }
        else
        {
            printf (" %2.f %2.f %2.f", a, c, b);
        }
    }
    else
    {
        if (b<c && b<a)
        {
            if (c<a)
            {
                printf (" %2.f %2.f %2.f", b, c, a);
            }
            else
            {
                printf (" %2.f %2.f %2.f", b, a, c);
            }
        }
        else
        {
            if (b<a)
            {
                printf (" %2.f %2.f %2.f", c, b, a);
            }
            else
            {
                printf (" %2.f %2.f %2.f", c, a, b);
            }
        }
    }
}
