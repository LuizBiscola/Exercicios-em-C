#include <stdio.h>
#include <locale.h>
int main (void)

{
    setlocale (LC_ALL, "Portuguese");
    char a,b,c;
    printf ("Informe uma letra: ");
    scanf ("%c",&a);
    printf ("Informe outra letra: ");
    scanf ("%c",&b);
    scanf ("%c",&c);
    printf ("As letras informadas foram %c e %c", a, c);
    getchar ();
}
