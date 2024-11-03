#include "stdio.h"
void main(){
    float imc, peso, altura;
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    printf("Digite seu peso: ");
    scanf("%f",&peso);
    imc = peso/(altura*altura);
    printf("IMC: %.3f\n", imc);
    if (imc<18.5)
    {
        printf("Abaixo do peso");}
    else if  (imc>=18.5 && imc<=24.9){
        printf("Peso normal");}
    else if (imc>=25 && imc<=29.9){
        printf("Sobrepeso");}
    else if (imc>=30 && imc<=34.9){
        printf("Obesidade I");}
    else if (imc>=35 && imc<=39.9){
        printf("Obesidade II");}
    else if (imc>40){
        printf("Obesidade III");}
}
