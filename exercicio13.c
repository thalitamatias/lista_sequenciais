#include <stdio.h>
int main(){

    /*Sabe-se que o kilowatt de energia custa um quinto do salário mínimo. Faça um algoritmo que
receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. Calcule e
imprima:
• o valor, em reais, de cada kilowatt;
• o valor, em reais, a ser pago por essa residência;
• o novo valor a ser pago por essa residência, a partir de um desconto de 15%.*/


//declaração de variaveis
float salarioMinino, qntdKilowatts, valorKilowatts, valorTotal, valorDesconto;


//entrada de dados
printf("Digite o valor do salario minino: ");
scanf("%f", &salarioMinino);

printf("Digite a quantidade de quilowatts gastos pela casa: ");
scanf("%f", &qntdKilowatts);

//processamento
valorKilowatts = salarioMinino / 5.0;
valorTotal = valorKilowatts * qntdKilowatts;
valorDesconto = valorTotal * 0.85;

//saida
printf("Valor de cada killowatts: R$ %.2f\n", qntdKilowatts);
printf("Valor a ser pago: R$ %.2f\n", valorKilowatts);
printf("Valor com 15%% de desconto: R$ %.2f\n", valorDesconto);

return 0;

}