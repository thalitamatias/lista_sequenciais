#include <stdio.h>
int main(){

  /*Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de
25% na diária. Sendo informados, através do teclado, o número de apartamentos do hotel e o valor da
diária por apartamento para o final de semana completo, elabore um programa para calcular:
• Valor promocional da diária;
• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%;
• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%;
• Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.*/

//declaração de variaveis
float apartamentos, apartamentos70, diaria, diariaPromocional, total100, total70, valorArrecadar;

//entrada de dados
printf("Digite o numero de apartamentos: ");
scanf("%f", &apartamentos);

printf("Digite o valor da diaria: ");
scanf("%f", &diaria);

//processamento
diariaPromocional = diaria * 75.0 / 100;
total100 = apartamentos * diariaPromocional;

apartamentos70 = apartamentos * 70 / 100;
total70 = apartamentos70 * diariaPromocional;

valorArrecadar = (apartamentos * diaria) - total100;

//saida
printf("Valor promocional da diaria: R$ %.2f\n", diariaPromocional);
printf("Valor arrecadado com 100%% de ocupacao: R$ %.2f\n", total100);
printf("Valor arrecadado com 70%% de ocupacao: R$ %.2f\n", total70);
printf("Valor que o hotel deixara de arrecadar: R$ %.2f\n", valorArrecadar);

return 0;

}