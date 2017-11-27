#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");


    /* Questão 10: Faça um programa que receba o salário	de um funcionário, calcule e mostre	o novo salário,
      sabendo-se que este sofreu um	aumento	de	25%.*/

//Declaração das variáveis
    float SL, NS;
//Entrada de Dados
    printf("\nDigite o Salário Atual: \n");
    scanf("%f", &SL);
//Cáuclo do novo salário
    NS = SL + ((SL *25)/100);
//Saída de dados
    printf("\aNovo Salário: %.2f \n", NS);
    
    system("pause");


    return 0;
}
