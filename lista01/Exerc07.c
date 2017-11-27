#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    /* Questão 7: Faça	um programa que	receba	quatro números inteiros,
    calcule	e mostre a	soma desses	números*/
    
    int d, e, f, g, h;
    printf("\nDigite 4 valores para soma: \n");
    scanf("%d%d%d%d", &d, &e, &f, &g);
    h = d + e + f + g;
    printf("\aSoma: %d\n", h);
    system("pause");



    return 0;
}
