#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

//função para converter para celsius
float cel(float f) {
float c;
c = (f - 32) * 5/9;
return c;
}

//função para converter para fahrenheit
float far(float c) {
float f;
f = (9 * c) / 5 + 32;
return f;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

/* 6. Faça um programa para fazer conversão de temperaturas de graus Fahrenheit para graus
Celsius e vice-versa.
O programa deverá apresentar os seguintes subprogramas:
a) Função para converter temperaturas em graus Fahrenheit para graus Celsius. Esta função
receberá como parâmetro o valor da temperatura em graus Fahrenheit a ser convertido e
deverá calcular e retornar para o programa o valor correspondente em graus Celsius.
b) Função para converter temperaturas em graus Celsius para graus Fahrenheit. Este
procedimento receberá como parâmetro o valor da temperatura em graus Celsius a ser
convertido e deverá calcular e retornar o valor correspondente em graus Fahrenheit.
f = 9/5 C + 32      c = 5/9 (f-32)   */

//declaração dasvariáveis
float c, f, c1, f1;
int opcao;
char loop;

inicio: printf("***** BEM VINDO AO CONVERSOR DE TEMPERATURAS *****\n");

do {
    printf("Digite 1 para conversão de °F para °C\n");
    printf("Digite 2 para conversão de °C para °F\n");
    printf("Digite 3 para FINALIZAR!\n");
    printf("OPÇÃO: ");
    scanf("%d", &opcao);

    switch (opcao) {
case 1:
        printf("\n\nDigite uma temperatura em Fahrenheit para ser convertida para Celsius: \n");
        scanf("%f", &f);
        c1 = cel(f);
        printf("\n%.2f Graus Fahrenheit convertido para Celsius é: %.2f\n", f, c1);
        break;
case 2:
        printf("\n\nDigite uma temperatura em Celsius para ser convertida para Fahrenheit: \n");
        scanf("%f", &c);
        f1 = far(c);
        printf("\n%.2f Graus Celsius convertido para Fahrenheit é: %.2f\n", c, f1);
        break;
case 3:
        printf("\n\nObrigado por usar o covnersor de temperaturas!!\n\n");
        goto loop2;
        break;
}
} while (opcao >=4 );

printf("\n\nDeseja reiniciar o Conversor? S para SIM \n");
scanf("%s", &loop);
while (loop=='S') {
    system("cls");
    goto inicio;
}
while (loop=='s') {
    system("cls");
    goto inicio;
}

loop2: system("pause");

    return 0;
}
