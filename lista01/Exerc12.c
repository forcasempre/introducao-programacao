#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
 
    /* Questão 12: Faça	um	programa	que	receba	o	salário-base	de	um	funcionário,
    calcule	e	mostre	o	salário	a	receber,	sabendo-se	que	esse	funcionário	tem
    gratificação de	5%	sobre o	salário-base e paga	imposto	de	7%	sobre o	salário-base.*/

//Declaração de variáveis;
    float sb, sr, gt, imp;
//Entrada de Dados    
    printf("\ninforme o Salário Base: \n");
    scanf("%f", &sb);
//Cálculo das gratificações, imposto e salário a receber    
    gt = (sb * 5)/100;
    imp = (sb * 7)/100;
    sr = sb + gt - imp;
//impressão dos dados    
    printf("\nO Valor da Gratificação com base em seu salário é: %.2f \n", gt);
    printf("O Valor do Imposto com base em seu salário é: %.2f \n", imp);
    printf("\aO Salário a Receber é: %.2f \n", sr);
    
    system("pause");

    return 0;
}
