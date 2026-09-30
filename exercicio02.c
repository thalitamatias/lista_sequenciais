#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba dois números reais, calcule e imprima a subtração do primeiro número
pelo segundo.*/


   //declaração de variaveis
int n1, n2, soma;


   //entrada de daados
printf("Digite o primero numero: ");
scanf("%d", &n1);

printf("Digite o segundo numero: ");
scanf("%d", &n2);

   //processamento
soma = n1 - n2;

   //saida
printf("Subtracao dos numeros: %.1d\n", soma);

return 0;

}