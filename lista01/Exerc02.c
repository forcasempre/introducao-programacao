#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Questão 2: Crie um algoritmo que imprima o produto entre 28 e	43.
    int x, y, z;
    x = 28;
    y = 43;
    //o produto é a multiplicação entre X e Y
    z = x*y;
    printf("\nO produto entre 28 e 43 é: %d\n\a", z);
    system("pause");


    return 0;
}

