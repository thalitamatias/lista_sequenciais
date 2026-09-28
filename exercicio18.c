#include <stdio.h>
int main(){

    /*Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a área total
existente.*/

//declaração de variaveis
float largura, comprimento, areaTotal;

//entrada de dados
printf("Digite a largura do lote: ");
scanf("%f", &largura);

printf("Digite o comprimento do lote: ");
scanf("%f", &comprimento);

//processamento
areaTotal = largura * comprimento;

//saida
printf("A area total do lote e: %.2f\n", areaTotal);

return 0;
}