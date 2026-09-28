#include <stdio.h>
int main(){

    /*Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao
pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.*/

//declaração de variaveis
float v1, v2, v3, v4, v5, pagamento, total, troco;

//entrada de dados
printf("Digite o valor do primeiro produto: ");
scanf("%f", &v1);
printf("Digite o valor do segundo produto: ");
scanf("%f", &v2);
printf("Digite o valor do terceiro produto: ");
scanf("%f", &v3);
printf("Digite o valor do quarto produto: ");
scanf("%f", &v4);
printf("Digite o valor do quinto produto: ");
scanf("%f", &v5);

//processamnento
total = v1 + v2 + v3 + v4 + v5;

//saida
printf("Sua conta deu  R$ %.2f\n", total);
printf("Digite aqui o valor que voce vai pagar: ");
scanf("%f", &pagamento);

troco = pagamento - total;

printf("Seu troco: R$ %.f\n", troco);


return 0;
}