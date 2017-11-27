#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    /* 2) Construa um programa que receba um número e imprima-o caso ele seja maior que 20. */

//Declaração da variável
    int n0;
//entrada do valor    
    printf("\nDigite um valor:");
    scanf("%d", &n0);
//condicional para n maior q 20 ou n menor ou igual a 20    
    if (n0 > 20) {
        printf("O Número %d é maior que 20\n\a", n0);
    } else
        printf("Seu Número não é maior que 20\n\a");
        
        system("pause");

      return 0;
}
