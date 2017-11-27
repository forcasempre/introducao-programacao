#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

    /* 06) Construir um algoritmo que indique se o número digitado está compreendido entre 20 e 90 ou não. */

//declaração da variável
    int n;
//entrada do valor    
    printf("Digite um número: \n");
    scanf("%d", &n);
//declaração para se valor >= a 20 e <= a 90 está entre a faixa de valores    
    if (n>=20&&n<=90) {
        printf("Seu número %d está entre 20 e 90\n", n);
//declaração para se valor < que 20 e > a 90 não está entre a faixa de valores            
    } else {
    printf("Seu número não está entre 20 e 90\n");
    }
    system("pause");
    
    return 0;
}
