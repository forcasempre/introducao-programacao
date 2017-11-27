#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

    /* 8) Entrar com dois números e imprimi-los em ordem crescente (suponha números diferentes). */

//Declaração das Variáveis
    int n1, n2;
//Entrada dos dados    
    printf("Digite o 1º número: \n");
    scanf("%d", &n1);
    printf("DIgite o 2º número: \n");
    scanf("%d", &n2);
    printf("\n");

//condição para se n1 <= n2 então para n1<=n2 imprimir n1 e acrescentar +1 em n1
    if (n1<=n2) {
        for (  ; n1<=n2 ; n1++) {
            printf("%d\n", n1);
    }
//condição para se n1 >= n2 então para n1>=n2 imprimir n1 e diminuir -1 em n1
    } else if (n1>=n2) {
        for ( ; n1>=n2; n1--) {
            printf ("%d\n", n1);
    }
    }
    system("pause");

    return 0;
}
