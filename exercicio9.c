#include <stdio.h>
#include <math.h>
int main(){

    /*Faça um programa que receba um número inteiro, calcule e imprima:
• a raiz quadrada desse número;
• esse número elevado ao quadrado.*/

//declaração de variaveis
float n1, raizQuadrada, quadrado;

//entrada de dados
printf("Digite um numero inteiro: ");
scanf("%f", &n1);

//processamento
raizQuadrada = sqrt(n1);
quadrado = pow(n1, 2);

//saida
printf("A raiz quadrada e: %.2f\n", raizQuadrada);
printf("O numero elevado ao quadrado e: %.2f\n", quadrado);

return 0;

}