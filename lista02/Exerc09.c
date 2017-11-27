#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

   /* 9) Entrar com três números e imprimir o maior número (suponha números diferentes). */

//declaração das variáveis
    int num1, num2, num3, soma;
//entrada dos dados
    printf("Digite o 1° Número: \n");
    scanf("%d", &num1);
    printf("Digite o 2° Número: \n");
    scanf("%d", &num2);
    printf("Digite o 3° Número: \n");
    scanf("%d", &num3);

//condição para se n1 > n2 e n1 > n3
    if (num1>num2&&num1>num3) {
        printf("\n%d\n\a", num1);
        } else if (num2>num1&&num2>num3) {
        printf("\n%d\n\a", num2);
        } else {
        printf("\n%d\n\a", num3);
}



    return 0;
}
