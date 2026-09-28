#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e
imprima:
• a idade dessa pessoa;
• essa idade convertida em semanas.*/

//declaração de variaveis
int anoNascimento, anoAtual, idade, meses;

//entrada de dados
printf("Digite seu ano de nascimento: ");
scanf("%d", &anoNascimento);

printf("Digite o ano atual: ");
scanf("%d", &anoAtual);

//processamento
idade = anoAtual - anoNascimento;
meses = idade * 12.0;

//saida
printf("Sua idade e: %.2d\n", idade);
printf("Sua idade em meses e: %.2d\n", meses);

return 0;

}