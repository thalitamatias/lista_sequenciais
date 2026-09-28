#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba dois números inteiros e imprima a soma desses dois números.*/

    //declaração de variaveis
int n1, n2, soma;

    //entranda de dados
printf("Digite o primeiro numero: ");
scanf("%d", &n1);

printf("Digite o segundo numero: ");
scanf("%d", &n2);

     //processamento
soma = n1 + n2;

     //saida 
printf("Soma dos numeros: %.2d\n", soma);

return 0;

}