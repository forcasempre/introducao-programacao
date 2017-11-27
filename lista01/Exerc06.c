#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    /* Questão 6: Ler dois números inteiros e imprimir a soma.
    Antes do resultado, deverá aparecer a mensagem:	Soma.*/
    
    int a, b, c;
    printf("Digite valores A e B: \n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("\aSoma: %d\n", c);
    system("pause");




    return 0;
}
