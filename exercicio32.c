#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
• A idade dessa pessoa;
•Quantos anos ela terá em 2028.*/

//declaração de variaveis
int idade, idade2028, anoNascimento, anoAtual;

//entrada de dados
printf("Digite o ano de seu nascimento: ");
scanf("%d", &anoNascimento);

printf("Digite o ano atual: ");
scanf("%d", &anoAtual);

//processamento
idade = anoAtual - anoNascimento;
idade2028 = 2028 - anoNascimento;

//saida
printf("Sua idade e: %.2d anos\n", idade);
printf("Voce tera em 2028: %.2d anos\n", idade2028);

return 0;

}
