#include <stdio.h>
int main(){

    /*Faça um programa que receba a quantidade e o valor de três produtos, no seguinte formato:
quantidade1 valor1 quantidade2 valor2 quantidade3 valor3. O programa deve calcular esses valores
seguindo a fórmula total = quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3. O valor
total deve ser apresentado no final da execução do programa.*/

//declaração de variaveis
float v1, q1, v2, q2, v3, q3, total;

//entrada de dados
printf("Digite a primeira quantidade: ");
scanf("%f", &q1);
printf("Digite o primero valor: ");
scanf("%f", &v1);

printf("Digite a segunda quantidade: ");
scanf("%f", &q2);
printf("Digite o segundo valor: ");
scanf("%f", &v2);

printf("Digite a terceira quantidade: ");
scanf("%f", &q3);
printf("Digite o terceiro valor: ");
scanf("%f", &v3);

//processamento

total = q1 * v1  + q2 * v2 + q3 * v3;

//saida
printf("Valor total: R$ %.2f\n", total);

return 0;

}
