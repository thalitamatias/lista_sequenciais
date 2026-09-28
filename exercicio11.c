#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor do imposto de
renda a ser pago, sabendo que o imposto equivale a 5% do salário.*/

//declaração de variaveis
float salario, impostodeRenda;

//entrada de dados
printf("Digite seu salario: ");
scanf("%f", &salario);

//processamento
impostodeRenda = salario * 0.05;

//saida
printf("O imposto de renda a ser pago e: %.2f\n", impostodeRenda);

return 0;

}