#include <stdio.h>
int main(){
    
    /*Faça um algoritmo para ler os coeficientes (a,b,c,d,e,f) das equações e calcular e exibir os valores de x e
y.*/

//declaração de variaveis
float a, b, c, d, e, f, x, y;

//entrada de dados
printf("Digite o valor de A: ");
scanf("%f", &a);

printf("Digite o valor de B: ");
scanf("%f", &b);

printf("Digite o valor de C: ");
scanf("%f", &c);

printf("Digite o valor de D: ");
scanf("%f", &d);

printf("Digite o valor de E: ");
scanf("%f", &e);

printf("Digite o valor de F: ");
scanf("%f", &f);

//processamento

y = (a * f - c * d) / (a * e - b * d);
x = (c * e - b * f) / (a * e - b * d);

//saida

printf("O valor de Y e: %.2f\n", y);
printf("O valor de X e: %.2f\n", x);

return 0;

}
