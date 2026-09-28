#include <stdio.h>
int main(){

    /*Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos (em KM) e
uma determinada velocidade (km/h), diga qual o tempo médio que levará para chegada a esse local e
qual a velocidade em metros/segundo.*/

//declaração de variaveis
float distancia, velocidade, tempo, velocidadeMS;

//entrada de dados
printf("Digite a distancia(KM): ");
scanf("%f", &distancia);

printf("Digite a velocidade(KMh): ");
scanf("%f", &velocidade);

//processamento
tempo = distancia / velocidade;
velocidadeMS = velocidade / 3.6;

//saida
printf("Tempo medio de chegada: %.2f horas \n", tempo);
printf("Velocidade em metros por segundo: %.2f\n", velocidadeMS);

return 0;

}