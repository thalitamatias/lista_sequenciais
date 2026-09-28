#include <stdio.h>
int main(){

/*Considerando uma eleição de apenas 2 candidatos, elabore um algoritmo que leia do teclado o
número total de eleitores, o número de votos do primeiro candidato e o número de votos do segundo
candidato. Em seguida, o algoritmo deverá apresentar o percentual de votos de cada um dos candidatos
e o percentual de votos nulos.*/

//declaração de variaveis
float nEleitores, nPrimeiroCandidato, nSegundoCandidato, votosNulos, percentual1, percentual2, percentualNulo;

//entrada de dados
printf("Digite o numero total de eleitores: ");
scanf("%f", &nEleitores);

printf("Digite o numero de votos do primeiro candidato: ");
scanf("%f", &nPrimeiroCandidato);

printf("Digite o numero de votos do segundo candidato: ");
scanf("%f", &nSegundoCandidato);

//processamento

percentual1 = nPrimeiroCandidato * 100 / nEleitores;

percentual2 = nSegundoCandidato * 100 / nEleitores;

votosNulos = nEleitores - nPrimeiroCandidato - nSegundoCandidato;

percentualNulo = votosNulos * 100 / nEleitores;

//saida
printf("Percentual de votos do primeiro candidato: %.2f\n", percentual1);
printf("Percentual de votos do segundo candidato: %.2f\n", percentual2);
printf("Percentual de votos nulos: %.2f\n", percentualNulo);

return 0;

}