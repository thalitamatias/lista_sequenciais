#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário
sabendo-se que este sofreu um aumento de 25%.*/

//declaração de variaveis
float salario, aumento, novoSalario;

printf("Digite seu salario: ");
scanf("%f", &salario);

aumento = salario * 0.25;
novoSalario = salario + aumento;

printf("Seu novo salario sera: %.2f\n", novoSalario);

return 0;

}