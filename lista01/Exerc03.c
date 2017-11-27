#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Questão 3: Crie um programa que leia	dois números inteiros e	imprima-os. 
    
    int a, b;
    //entrada de dados
    printf("\nDigite o Valor de A e B:\n");
    scanf("%d%d", &a, &b);
    //saída de dados
    printf("\nOs Valores de A e B são: %d e %d \n\a", a, b);
    system("pause");


    return 0;
}

