#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se
que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.*/

//declração de variaveis
float precoCusto, percentual, acrescismo, precoVenda;

//entrada de dados
printf("Digite o preco de custo: ");
scanf("%f", &precoCusto);

printf("Digite percentual de acrescimo: ");
scanf("%f", &percentual);

//processamento
acrescismo = precoCusto * percentual / 100;
precoVenda = precoCusto + acrescismo;

//saida
printf("Preco de venda: %.2f\n", precoVenda);

return 0;

}