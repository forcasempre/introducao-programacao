#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    /* 1) Faça um programa que lê 2 valores A e B (inteiros) e informa se A é divisível por B ou não. */
    
//Declaração das variáveis    
    int n1, n2, resto;
//Entrada dos dados    
    printf("Digite o Valor A: \n");
    scanf("%d", &n1);
    printf("Digite o Valor B: \n");
    scanf("%d", &n2);
//Cálculo do resto    
    resto = n1 % n2;
//Condicional se resto = 0 então A é divisível por b, se não A não é divisível por B    
    if (resto == 0) {
            printf("A é Divisível por B!\n\a");
        } else {
            printf("A não é Divisível por B!\n\a");
        }
        system("pause");

      return 0;
}
