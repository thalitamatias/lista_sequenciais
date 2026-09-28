#include <stdio.h>
int main(){

    /*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a
percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28%
e os impostos 45%. Escrever um algoritmo que leia o custo de fábrica de um carro e informe o custo ao
consumidor do mesmo.*/

//declaração de variaveis
float custoFabrica, custoConsumidor, imposto, valorImposto, distribuidor;

//entrada de dados
printf("Digite o custo de fabrica: ");
scanf("%f", &custoFabrica);

//processamento
imposto = custoFabrica * 45.0 / 100;
valorImposto = custoFabrica + imposto;
distribuidor = valorImposto * 28.0 / 100;
custoConsumidor = valorImposto + distribuidor;

//saida
printf("O custo ao consumidor e: R$ %.2f\n", custoConsumidor);

return 0;

}