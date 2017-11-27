#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

//função potência usando função POW da biblioteca math.h
float pot(float x, int y) {
float z;
if (y==0) {
    return 1;
}
z = pow(x,y);
return z;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

/* 7. Uma função para calcular X elevado a Y. Esta função deve receber como parâmetro dois
números (X – real e Y – inteiro maior ou igual a zero) e deve calcular e retornar o valor de
XY . */

//declaração de variáveis
float x1, z1;
int y1;

//entrada de dados
printf("Digite um Valor X: \n");
scanf("%f", &x1);
printf("\nDigite um valor Y para ser a Potência de X: \n");
scanf("%d", &y1);

//chamando função da potência
z1 = pot(x1, y1);

//saída dos dados
printf("\nO Resultado da Potência é: %.2f\n", z1);

   system("pause");

    return 0;
}
