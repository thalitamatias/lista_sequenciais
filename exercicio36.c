#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba o custo de um espetáculo teatral e o preço do convite esse
espetáculo. Esse programa deve calcular e mostrar:
• A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja
alcançado.
•A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.*/

//declaração de variaveis
float custoTeatral, precoConvite, qtdConvites, lucro;

//entrada de dados
printf("Digite o custo teatral: ");
scanf("%f", &custoTeatral);

printf("Digite o preco do convite: ");
scanf("%f", &precoConvite);

//processamento
qtdConvites = custoTeatral / precoConvite;
lucro = qtdConvites * 1.23;

//saida
printf("A quantidade de convites que devem ser vendidos e: %.2f\n", qtdConvites);
printf("A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%% e: %.2f\n", lucro);

return 0;

}