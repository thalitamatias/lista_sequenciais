#include <stdio.h>
int main(){

/*Faça um algoritmo que receba o valor do salário de um funcionário e o valor do salário mínimo. Calcule e
imprima quantos salários mínimos ganha esse funcionário.*/

//declaração de variaveis
float salario, salarioMinimo, calculo;


//entrada de dados
printf("Digite seu salario: ");
scanf("%f", &salario);

printf("Digite o salario minimo: ");
scanf("%f", &salarioMinimo);

//processamento
calculo = (salario / salarioMinimo);

//saida
printf("Voce recebe %.2f salarios minimos\n", calculo);

return 0;

}