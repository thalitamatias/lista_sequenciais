#include <stdio.h>
int main(){

    /*A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça
um algoritmo que receba um valor de uma compra e mostre o valor das prestações*/

//declaração de variaveis
float produto, resultado;

//entrada de dados
printf("Digite o valor do produto: ");
scanf("%f", &produto);

//processamento
resultado = produto / 5.0;

//saida 
printf("Sua compra ficara cinco prestacoes de %.2f sem juros!", resultado);

return 0;

}