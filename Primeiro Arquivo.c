#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (void)

{
    setlocale(LC_ALL, "Portuguese");

    float a, b, c
    char x, y, z

    printf ("Passe\n");
    scanf ("%f %f %c", &a, &b, &x);
    printf ("%f %f %c", a, b, x);
    getche ();
}
