#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
• o peso dessa pessoa em gramas;
• se essa pessoa engordar 5%, qual será seu novo peso em gramas.*/

//declaração de variaveis
int peso, novoPeso, pesoGramas;

//entrada de dados
printf("Digite seu peso: ");
scanf("%d", &peso);

//processamento
pesoGramas = peso * 1000;
novoPeso = pesoGramas * 1.05;

//saida
printf("Seu peso em gramas e: %.2d\n", pesoGramas);
printf("Caso voce engorde 5%% seu novo peso em gramas sera: %.2d\n", novoPeso);

return 0;

}