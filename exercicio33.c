#include <stdio.h>
int main(){

    /*Cada degrau de uma escada tem uma altura X. Faça um algoritmo que receba essa altura e a altura
que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá
subir para atingir seu objetivo.*/

//declaração de variaveis
float alturaDegrau, alturaEscada, total;


//entrada de variaveis
printf("Digite a altura do degrau: ");
scanf("%f", &alturaDegrau);

printf("Digite a altura desejada: ");
scanf("%f", &alturaEscada);


//processamento
total = alturaEscada / alturaDegrau;


//saida;
printf("Voce precisara de %.2f degraus.", total);

return 0 ;

}