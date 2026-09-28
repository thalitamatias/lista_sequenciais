#include <stdio.h>
int main(){

    /*Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que
calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
o comprimento, a largura e a profundidade da piscina a ser construída. Leve em consideração que o
valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3*/

//declaração de variaveis
float comprimento, largura, profundidade, volume, valor;

//entrada de dados
printf("Digite o comprimento: ");
scanf("%f", &comprimento);
printf("Digite a largura: ");
scanf("%f", &largura);
printf("Digite a profundidade: ");
scanf("%f", &profundidade);

//processamento
volume = comprimento * largura * profundidade;
valor = volume * 45.0;

//saida 
printf("Valor da construcao solicitada: R$ %.2f\n", valor);

return 0;

}