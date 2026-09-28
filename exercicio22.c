#include <stdio.h>
int main(){

    /*Escreva um algoritmo para trocar os valores de três variáveis A, B e C de modo que A fique com o
valor de B, B fique com o valor de C e C fique com o valor de A.*/

//declaração de variaveis
int A, B, C, aux;

//entrada de dados
printf("Digite o valor de A: ");
scanf("%d", &A);

printf("Digite o valor de B: ");
scanf("%d", &B);

printf("Digite o valor de C: ");
scanf("%d", &C);

//processamento
aux = A;
A = B;
B = C;
C = aux;

//saida
printf("A = %d\n", A);
printf("B = %d\n", B);
printf("C = %d\n", C);

return 0;

}