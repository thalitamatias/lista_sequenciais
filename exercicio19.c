#include <stdio.h>
int main(){

    /*Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles
e o resto da divisão do somatório por cada um dos valores.*/

//declaração de variaveis
float n1, n2, n3, soma;

//entrada de dados
printf("Digite o primeiro valor: ");
scanf("%f", &n1);
printf("Digite o segundo valor: ");
scanf("%f", &n2);
printf("Digite o terceiro valor: ");
scanf("%f", &n3);

//processmaneto
soma = ( n1 + n2 + n3 ) / 3.0;

//saida
printf("Media entre os numero: %.2f\n", soma);

return 0;

}