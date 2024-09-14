#include "stdio.h"
void main()
{
   int a,b,c;
   printf("Informe A:");
   scanf("%d",&a);
   printf("Informe B:");
   scanf("%d",&b);
   printf("Informe C:");
   scanf("%d",&c);
   if((a<b) && (a<c))
   {
      printf("Menor: %d",a);
      if(b<c)
      {
         printf("Meio: %d Maior: %d",b,c);
      }
      else
      {
          printf("Meio: %d Maior: %d",c,b);
      }
   }
   else
   {
      if((b<a)&&(b<c))
      {
          printf("\nMenor: %d",b);
          if(a<c)
          {
              printf("\nMeio: %d \nMaior: %d",a,c);
          }
          else
          {
              printf("\nMeio: %d \nMaior: %d",c,a);
          }
      }
      else
      {
        printf("\nMenor: %d",c);
        if(a<b)
        {
            printf("\nMeio: %d \nMaior: %d",a,b);
        }
        else
        {
            printf("\nMeio: %d \nMaior: %d",b,a);
        }
      }
   }
}