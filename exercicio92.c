#include <stdio.h>
int main(){

    /*Faça um algoritmo que calcule e imprima a área das seguintes figuras geométricas:
• triângulo; quadrado; círculo; trapézio; retângulo; losango.*/

//declaração de variaveis
float base, altura, raio, baseMaior, baseMenor, diagMaior, diagMenor, lado;
float areaTriangulo, areaQuadrado, areaCirculo, areaTrapezio, areaRetangulo, areaLosango;

//entrada de dados Tringulo
printf("Digite a base do triangulo: ");
scanf("%f", &base);
printf("Digite a altura do triangulo: ");
scanf("%f", &altura);

//processamento Triangulo
areaTriangulo = (base * altura) / 2.0;

//entrada de dados Quadrado
printf("Digite o lado do quadrado: ");
scanf("%f", &lado);

//processamento Quadrado
areaQuadrado = lado * lado;

//entrada de dados Circulo
printf("Digite o raio do circulo: ");
scanf("%f", &raio);

//processamento Circulo
areaCirculo = 3.14159 * (raio * raio);

//entrada de dados Trapezio
printf("Digite a base maior: ");
scanf("%f", &baseMaior);
printf("Digite a base menor: ");
scanf("%f", &baseMenor);
printf("Digite a altura: ");
scanf("%f", &altura);

//processamento Trapezio
areaTrapezio = ((baseMaior + baseMenor) * altura) / 2.0;

//entrada de dados Retangulo
printf("Digite a base do retangulo: ");
scanf("%f", &base);
printf("Digite a altura do retangulo: ");
scanf("%f", &altura);

//processamento Retangulo
areaRetangulo = base * altura;

//entrada de dados Losango
printf("Digite a diagonal maior: ");
scanf("%f", &diagMaior);
printf("Digite a diagonal menor: ");
scanf("%f", &diagMenor);

//processamento Losango
areaLosango = (diagMaior * diagMenor) / 2.0;

//saida
printf("Area do Triangulo: %.2f\n", areaTriangulo);
printf("Area do Quadrado: %.2f\n", areaQuadrado);
printf("Area do Circulo: %.2f\n", areaCirculo);
printf("Area do Trapezio: %.2f\n", areaTrapezio);
printf("Area do Retangulo: %.2f\n", areaRetangulo);
printf("Area do Losango: %.2f\n", areaLosango);


return 0;

}