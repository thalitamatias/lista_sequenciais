#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba o peso e a altura de uma pessoa e calcule o índice de massa
corpórea. Ele mede a relação entre peso e altura (peso em Kg, dividido pelo quadrado da altura em
metros).*/

//declaração de variaveis
float peso, altura, massa;

//entrada de dados
printf("Digite seu peso: ");
scanf("%f", &peso);

printf("Digite sua altura: ");
scanf("%f", &altura);

//processamento
massa = peso / (altura * altura);

//saida
printf("Sua massa corporea e: %.2f\n", massa);

return 0;

}