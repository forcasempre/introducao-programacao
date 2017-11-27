#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    /* QUestão 11: Faça um programa que receba o	salário	de	um funcionário	e o	 percentual	 de	 aumento,
     calcule	e	mostre	o	valor	do	aumento	e	o	novo	salário.*/

//Declaração de variáveis
    float sf, pa, va, ns;
//Entrada de Dados    
    printf("\nDigite o Salário do Funcionário: \n");
    scanf("%f", &sf);
    printf("Digite o percentual de aumento: \n");
    scanf("%f", &pa);
//Cálculo e Impressão do valor do aumento    
    va = (sf * pa)/100;
    printf("O Valor do Aumento do funcionário será: %.2f \n", va);
//Cálculo e impressão do novo salário    
    ns = sf + va;
    printf("O Novo Salário do Funcionário é: %.2f \n\a", ns);
    
    system("pause");

    return 0;
}
