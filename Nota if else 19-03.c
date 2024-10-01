#include <stdio.h>
#include <locale.h>
int main (void)

{
    setlocale(LC_ALL,"Portuguese");
    float nota;
    printf ("Informe a nota: ");
    scanf("%f", &nota);
    if (nota >= 6)
    {
            printf("Aprovado");
     }
     else
     {
         printf("Repovado");
     }
}
