#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Questão 4: Crie um programa para ler um número inteiro e	imprimir seu sucessor e	seu	antecessor. 
    
    int w;
    //entrada de dados
    printf("\nDigite um valor: \n");
    scanf("%d", &w);
    printf("Seu sucessor é: %d\n", w=++w);
    printf("Seu antecessor é: %d\n", w=--w, w=--w);
    w=++w;
    printf("valor real de W: %d\n\a", w);
    system("pause");


    return 0;
}

