#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

/* 18) O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de
        lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba
        o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de imposto.
        Calcule e mostre: a) O valor correspondente ao lucro do distribuidor; b) O valor correspondente
        aos impostos; c) O preço final do veículo. */

//Declaração das variáveis
    float pf, pl, pimp, vl, vimp, pfinal;
//entrada dos dados    
    printf("\nDigite o Preço de Fábrica do Veículo:\n");
    scanf("%f", &pf);
    printf("Digite o Percentual de Lucro sobre o Valor de Fábrica do Veículo:\n");
    scanf("%f", &pl);
    printf("Digite o Percentual de Imposto aplicado ao Valor de Fábrica do Veículo:\n");
    scanf("%f", &pimp);
//cálculos    
    vl = (pf * pl)/100;
    vimp = (pf * pimp)/100;
    pfinal = pf + vl + vimp;
//saída dos dados    
    printf("O Valor correspondente ao lucro do distribuidor será R$ %.2f\n", vl);
    printf("O Valor correspondente ao imposto será R$ %.2f\n", vimp);
    printf("O Preço final do veículo será R$ %.2f\n\a", pfinal);
    
    system("pause");

         return 0;
}
