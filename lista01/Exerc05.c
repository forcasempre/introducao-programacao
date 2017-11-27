#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    /* Questão 5: Faça um programa para ler o nome, endereço e telefone	de uma pessoa e em seguida imprimi-los. */
    
    char nome[20], end[50], tel[15];
    printf("\nDigite o nome, em seguida o endereço (sem acento) e depois o telefone\n");
    fflush(stdin);
    gets(nome);
    fflush(stdin);
    gets(end);
    fflush(stdin);
    gets(tel);
    printf("\n\aO nome é: %s", nome);
    printf("\nO endereço é: %s", end);
    printf("\nO Telefone é: %s\n", tel);
    system("pause");

    return 0;
}

