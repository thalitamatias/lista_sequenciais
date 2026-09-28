#include <stdio.h>
#include <math.h>
int main(){

    /*Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado.*/

 //declaração de variaveis
float diagonal, area;

 //entrada de dados
 printf("Digite o valor da diagonal: ");
 scanf("%f", &diagonal);

 //processamento
 area = pow (diagonal, 2)/ 2;

//saida
printf("O valor da diagonal e: %.2f\n", area);

return 0;

}