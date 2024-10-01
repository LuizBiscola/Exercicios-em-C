#include <stdio.h>

void main (){
    int num, unidade, dezena;
    scanf("%d", &num);

    if (num>=1 && num<=19)
    {
    switch (num){
        case 1:
        printf ("\num");
        break;

        case 2:
        printf ("\ndois");
        break;

        case 3:
        printf ("\ntres");
        break;

        case 4:
        printf ("\nquatro");
        break;

        case 5:
        printf ("\ncinco");
        break;

        case 6:
        printf ("\nseis");
        break;

        case 7:
        printf ("\nsete");
        break;

        case 8:
        printf ("\noito");
        break;

        case 9:
        printf ("\nnove");
        break;

        case 10:
        printf ("\ndez");
        break;

        case 11:
        printf ("\nonze");
        break;

        case 12:
        printf ("\ndoze");
        break;

        case 13:
        printf ("\ntreze");
        break;

        case 14:
        printf ("\nquatorze");
        break;

        case 15:
        printf ("\nquinze");
        break;

        case 16:
        printf ("\ndezesseis");
        break;

        case 17:
        printf ("\ndezessete");
        break;

        case 18:
        printf ("\ndezoito");
        break;

        case 19:
        printf ("\ndezenove");
        break;

        default:
            break;}
    }

    else if (num>=20 && num<=99)
    {
        dezena = num/10;
        unidade = num%10;

        switch (dezena){
        case 2:
        printf ("\nvinte");
        break;

        case 3:
        printf ("\ntrinta");
        break;

        case 4:
        printf ("\nquarenta");
        break;

        case 5:
        printf ("\ncinquenta");
        break;

        case 6:
        printf ("\nsessenta");
        break;

        case 7:
        printf ("\nsetenta");
        break;

        case 8:
        printf ("\noitenta");
        break;

        case 9:
        printf ("\nnoventa");
        break;

        case 10:
        printf ("\n");
        break;}

            switch (unidade){
            case 1:
        printf (" e um");
        break;

        case 2:
        printf (" e dois");
        break;

        case 3:
        printf (" e tres");
        break;

        case 4:
        printf (" e quatro");
        break;

        case 5:
        printf (" e cinco");
        break;

        case 6:
        printf (" e seis");
        break;

        case 7:
        printf (" e sete");
        break;

        case 8:
        printf (" e oito");
        break;

        case 9:
        printf (" e nove");
        break;

        case 10:
        printf (" e dez");
        break;}
        }
}
