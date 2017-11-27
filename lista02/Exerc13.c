#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

/* 13) Ler um número inteiro entre 1 e 12 e escrever o mês correspondente. Caso o usuário digite
um número fora desse intervalo, deverá aparecer uma mensagem informando que não
existe mês com este número. Obs. Utilize switch – case. */

//declaração da variável
    int mes;

//entrada do valor
printf("Digite um número de 1 as 12: \n");
    scanf("%d", &mes);

//condiçoes usando SWITCH, CASE para cada valor e com o DEFAULT para mês inválido
    switch (mes) {
case 1:
    printf("Janeiro\n\a");
    break;
case 2:
    printf("Fevereiro\n\a");
    break;
case 3:
    printf("Março\n\a");
    break;
case 4:
    printf("Abril\n\a");
    break;
case 5:
    printf("Maio\n\a");
    break;
case 6:
    printf("Junho\n\a");
    break;
case 7:
    printf("Julho\n\a");
    break;
case 8:
    printf("Agosto\n\a");
    break;
case 9:
    printf("Setembro\n\a");
    break;
case 10:
    printf("Outubro\n\a");
    break;
case 11:
    printf("Novembro\n\a");
    break;
case 12:
    printf("Dezembro\n\a");
    break;
default:
    printf("Não Existe Mês com Este Número!\n\a");
    break;
    }

    system("pause");

    return 0;
}
