#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e imprima a
média ponderada dessas notas.*/


 //declaração de variaveis
float n1, n2, media;
float peso1 = 1.0, peso2 = 2.0;

 //entrada de dados
printf("Digite sua primeira nota: ");
scanf("%f", &n1);

printf("Digite sua segunda nota: ");
scanf("%f", &n2);

 //processamento
media = (n1 * peso1 + n2 * peso2) / (peso1 + peso2);

 //saida
printf("A media sua media ponderada e: %.2f\n", media);

return 0;
}