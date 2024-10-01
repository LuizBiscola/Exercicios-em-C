#include <stdio.h>
#include <locale.h>

int main (void)

{
    int idade;

    printf ("Informe a idade: ");
    scanf ("%d", &idade);

    if (idade<=10) printf ("Categoria Infantil");
       else if (idade<=18) printf ("Categoria Juvenil");
            else printf ("Categoria Senior");
       }







