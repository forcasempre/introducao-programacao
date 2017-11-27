#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    /* Questão 8: Faça um programa que receba três notas, calcule e	mostre a média aritmética entre	elas.*/
    
    float n1, n2, n3, media;
    printf("\nDigite a Nota 1: \n");
    scanf("%f", &n1);
    printf("Digite Nota 2: \n");
    scanf("%f", &n2);
    printf("Digite Nota 3: \n");
    scanf("%f", &n3);
    media = (n1 + n2 + n3)/3;
    printf("\n\aA Média é: %.1f\n", media);
    system("pause");

    return 0;
}
