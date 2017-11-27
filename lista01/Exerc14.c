#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    /* Questão 14: Faça	um	programa que receba	o valor	de	um depósito	e o	valor da taxa de juros,	calcule	e
mostre	o	valor	do	rendimento	e	o	valor	total	depois	do	rendimento.*/

//Declaração das variáveis
        float vd, tj, rendimento, vtdr;
//entrada dos dados        
        printf("\nInsira o valor do déposito: \n");
        scanf("%f", &vd);
        printf("Insira a Taxa de Juros: \n");
        scanf("%f", &tj);
//cálculos        
        rendimento = (vd * tj)/100;
        vtdr = vd + rendimento;
//saída dos dados        
        printf("O Valor do Rendimento é R$ %.2f e o valor Total é R$ %.2f\n\a", rendimento, vtdr);
        
        system("pause");

    return 0;
}
