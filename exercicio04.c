#include <stdio.h>
int main(){

    /*Faça um algoritmo que receba três notas de um aluno, calcule e imprima a média aritmética entre essas
notas.*/

 //declaração de variaveis
float n1, n2, n3, media;

 //entrada de dados
printf("Digite sua primeira nota: ");
scanf("%f", &n1);

printf("Digite sua segunda nota: ");
scanf("%f", &n2);

printf("Digite sua terceira nota: ");
scanf("%f", &n3);
 
 //processamento
media = (n1 + n2 + n3) / 3;

 //saida
printf("Sua media e: %.2f\n", media);

return 0;
}