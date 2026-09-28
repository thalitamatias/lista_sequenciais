#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba dois números inteiros, calcule e imprima a divisão do primeiro número
pelo segundo.*/

   //declaração de variaveis
float n1, n2, soma;

   //entrada de dados
printf("Digite o primero numero: ");
scanf("%f", &n1);

printf("Digite o segundo numero: ");
scanf("%f", &n2);

    //processamento
soma = n1 / n2;

    //saida
printf("Divisao dos numeros: %.2f\n", soma);

return 0;

}