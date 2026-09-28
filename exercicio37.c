#include <stdio.h>
int main(){

  /*Elabore um algoritmo para efetuar o cálculo da quantidade de combustível gasto em uma viagem,
utilizando-se um automóvel que faz 12 Kms por litro. Para obter o cálculo, o usuário deverá fornecer o
tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter a distância
percorrida (distância = tempo * velocidade).*/


//declaração de variaveis
float tempoGasto, velocidade, distancia, qtdCombustivel;

//entrada de dados
printf("Digite o tempo gasto durante a viagem: ");
scanf("%f", &tempoGasto);

printf("Digite a velociade durante a viagem: ");
scanf("%f", &velocidade);

//processamento
distancia = tempoGasto * velocidade;
qtdCombustivel = distancia / 12.0;

//saida 
printf("A quantidade gasta de combustivel na viagem foi: %.2f\n", qtdCombustivel);

return 0;

}