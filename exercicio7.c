#include <stdio.h>
#include <math.h>
int main(){

    /*Faça um algoritmo que receba dois numeros, calcule e imprima um elevado ao outro.*/

//declaração de variaveis
float n1, n2, resultado;

//entrada de dados
printf("Digite o primeiro numero: ");
scanf("%f", &n1);

printf("Digite o segundo numero: ");
scanf("%f", &n2);

//processamento
resultado = pow(n1,n2);

//saida 
printf("%.2f elevado a %.2f e: %.2f\n", n1, n2, resultado);

return 0;

}