#include <stdio.h>
#include <math.h>
int main(){

    /*Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu
rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses.
Sabendo-se que a fórmula usada para este cálculo é:
Valor acumulado = (P*(1 +i)n – 1)/i em que i = taxa, P = aplicação mensal e n = número de meses.*/

//declaração de variaveis
float vConstante, taxa, nMeses, vAcumulado;

//entrada de dados
printf("Digite o valor constante da aplicacao: ");
scanf("%f", &vConstante);

printf("Digite o valor da taxa: ");
scanf("%f", &taxa);

printf("Digite o numero de meses: ");
scanf("%f", &nMeses);

//processamento
taxa = taxa / 100;

vAcumulado = vConstante * (pow(1 + taxa, nMeses) - 1) / taxa;

//saida 
printf("Valor acumulado: %.2f\n", vAcumulado);

return 0;

}