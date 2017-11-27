#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    /* Questão 13: Faça	um programa que receba o salário-base	de um	funcionário, calcule e mostre o salário
a	receber, sabendo-se	que	esse funcionário tem gratificação	de R$50.00 e paga	imposto	de
10%	sobre	o	salário-base.*/

//Declaração das variáveis
        float sab, sar, grt, ip;
//entrada dos dados        
    printf("\ninforme o Salário Base: \n");
    scanf("%f", &sab);
//Cálculos    
    grt = 50;
    ip = (sab * 10)/100;
    sar = sab + grt - ip;
//Saída dos dados    
    printf("\nO Funcionário possui uma gratificação fixa de R$ 50,00\n");
    printf("O Valor do Imposto com base em seu salário é: %.2f \n", ip);
    printf("\aO Salário a Receber é: %.2f \n", sar);
    
    system("pause");

    return 0;
}
