#include "stdio.h"
#include "locale.h"
void main ()

{
     setlocale (LC_ALL, "portuguese");
     printf ("%-10.2f %-10.2f %-10.2f \n",8.0,15.253,584.13);
     printf ("%04d\n",21);
     printf ("%6d \n",21);
     printf ("%10.3f\n",3456.78);
     printf ("%3.1f\n",3456.78);
     printf ("\n Testando %-06d",21);
}
