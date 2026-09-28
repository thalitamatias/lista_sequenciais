#include <stdio.h>
int main(){

    /*Crie um programa que receba três nomes quaisquer por meio da linha de execução do programa, e
os imprima na tela da seguinte maneira: o primeiro e o último nomes serão impressos na primeira linha
um após o outro, o outro nome (o segundo) será impresso na segunda linha.*/

//declaração de variaveis
char nome1[10], nome2[10], nome3[10];

//entrada de dados
printf("Digite algo: ");
scanf("%s", nome1);
printf("Digite algo: ");
scanf("%s", nome2);
printf("Digite algo: ");
scanf("%s", nome3);

//saida
printf("%s, %s\n", nome1, nome3);
printf("%s\n", nome2);

return 0;

}