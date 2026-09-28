#include <stdio.h>
int main(){

/*Faça um algoritmo que apresente, para um salário informado pelo usuário, um novo salário com
aumento de 37%.*/

//declaração de variaveis
float salario, novoSalario;

//entrada de dados
printf("Digite seu salario: ");
scanf("%f", &salario);

//processamento
novoSalario = salario * 1.37;
  
//saida 
printf("Seu novo salario e: R$ %.2f\n", novoSalario);

return 0;
}