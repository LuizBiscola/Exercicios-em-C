#include <stdio.h>
#include <math.h>
int main (void)

{
    int a,b,c,d,e,f,g;
    int raiz;
    int pot;
    a=5;
    b=6;
    c=a+b;
    d=a-b;
    e=a*b;
    f=a+(b/b);
    g=a%b;
    raiz=sqrt(600);
    pot = pow(2,3);



    printf ("Soma: %d",c);
    printf ("\nSubtracao: %d", d);
    printf ("\nMultiplicacao: %d", e);
    printf ("\nDivisao: %d", f);
    printf ("\nResto: %d", g);
    printf ("\nRaiz de 4: %d", raiz);
    printf ("\nPotencia: %d", pot);
    getche ();

}
