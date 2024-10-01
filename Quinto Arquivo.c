#include "stdio.h"
#include "locale.h"
void main ()

{
    setlocale (LC_ALL, "portuguese");
    printf ("+-----------------------------------------------------+");
    printf ("\n|Nome:      \t Endereço: \t Data de Nascimento:  |");
    printf ("\n|-%s \t -%s \t -%d de %s de %d |", "Luiz Eduardo", "Guaraituba",12,"Março", 2005);
    printf ("\n+-----------------------------------------------------+");

    getchar ();

}
