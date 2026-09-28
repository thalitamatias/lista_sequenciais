#include <stdio.h>
int main(){

    /*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de
conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

//declaração de variaveis
float f, c;

//entrada de dados
printf("Digite a temperatura em graus Celsius: ");
scanf("%f", &c);

//processamento
f = (9 * c + 160) / 5;

//saida
printf("Temperatura em Fahrenheit: %.2f\n", f);

return 0;
}