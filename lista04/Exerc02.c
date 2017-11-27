#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//função para calcular o fatorial de um número
int fat(int n) {
    int nf, f=1;
    for ( nf=n; nf>1; nf--) {
        f = f * nf;
    } return f;
    }

int main()
{
    setlocale(LC_ALL, "portuguese");

/* 2. Criar uma função que calcule o fatorial de um número. Em seguida, crie um programa para
calcular o fatorial de todos os números pares de 0 até 50. */

//declaração da variável
    int n, f=1;

//condição para executar a funçaõ do fatorial com valores pares de 0 a 50 e imprimir cada fatorial
    for (n=0; n<=50; n++) {
    if (n % 2 == 0) {
        f = fat (n);
        printf("A Fatorial do número %d é %d\n", n, f);
    }
    }

   system("pause");

    return 0;
}
