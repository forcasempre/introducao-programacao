#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

        /* 17) Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual,
        calcule e mostre: a) A idade dessa pessoa; b) Quantos anos essa pessoa terá em 2020.*/

//Declaração das variáveis
    int an, at, idade, idadep;
    const int ap=2020;
//entrada de dados    
    printf("\nDigite o Ano de Nascimento:\n");
    scanf("%d", &an);
    printf("Digite o Ano Atual:\n");
    scanf("%d", &at);
//cálculo dos dados    
    idade = at - an;
    idadep = ap - an;
//saída dos dados    
    printf("Sua idade Atual é: %d Anos, e sua idade em 2020 será: %d Anos.\n\a", idade, idadep);
    
    system("pause");

         return 0;
}
