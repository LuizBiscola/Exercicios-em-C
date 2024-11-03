#include <stdio.h>

void main ()
{
 float a,b,c;
 scanf (" %f", &a);
 scanf (" %f", &b);
 scanf (" %f", &c);

 if (a>b && a>c){
 printf ("O maior numero é: %f", a);}
 else if (b>a && b>c){printf ("O maior numero é: %f", b);}
 else {printf("O maior numero é: %f", c);}
}
