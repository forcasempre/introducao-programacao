#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

/* 4) Construa um algoritmo que leia dois números e efetua a adição. caso o valor somado seja
maior que 20, este deverá ser apresentado somando-se a ele mais 8; caso o valor somado
seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.*/

//declaração das variáveis
        int nv1, nv2, nv;
//entrada dos valores        
        printf("\nDigite o Valor A:\n");
        scanf("%d", &nv1);
        printf("Digite o Valor B:\n");
        scanf("%d", &nv2);
//soma dos valores        
        nv = nv1 + nv2;
//condição para se soma maior que 20 então somar mais 8 e apresentar        
        if (nv > 20) {
            nv = nv + 8;
            printf("O Valor foi acrescentado 8: novo valor %d\n\a", nv);
//condição para se soma menor ou igual a 20 então subtrair 5            
        } else {
        nv = nv - 5;
        printf("Foi subtraido 5 do seu valor: novo valor %d\n\a", nv);
        }
        system("pause");

      return 0;
}
