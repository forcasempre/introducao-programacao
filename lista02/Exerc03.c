#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    /* 3) Construa um algoritmo que leia dois valores numéricos inteiros e efetue a adição; caso o
resultado seja maior que 10, apresente-o.*/

//Declaração das variáveis
        int v1, v2, soma;
//entrada dos valores        
        printf("Digite o primeiro valor:\n");
        scanf("%d", &v1);
        printf("Digite o segundo valor:\n");
        scanf("%d", &v2);
//soma dos valores        
        soma = v1 + v2;
//condicional para soma maior q 10 aprensentar o valor ou não apresentar caso seja menor ou igual a 10        
        if (soma > 10) {
            printf("O Resultado %d é > 10\n\a", soma);
            } else {
            printf("O Resultado não é > que 10\n\a");
            }
        system("pause");

      return 0;
}
