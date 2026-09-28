#include <stdio.h>
int main(){

    /*No momento, por conta da administração pública péssima e da corrupção em todos os setores
estatais, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um
algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o
desconto foi de 9%.*/

//declaração de variaveis
int valor, novoValor, desconto;

//entrada de dados
printf("Digite o valor do seu produto: ");
scanf("%d", &valor);

//processamento
desconto = valor * 9 / 100;
novoValor = valor - desconto;

//saida
printf("Novo valor do produto: R$ %.2d\n", novoValor);

return 0;

}