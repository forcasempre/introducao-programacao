#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

/* 10) Um hotel cobra R$50,00 reais a diária e mais uma taxa de serviços. A taxa de serviços é de:
• 15,30 por dia, se número de diárias <15
• 10,00 por dia, se número de diárias =15
• 8,50 por dia, se número de diárias >15
Faça um programa que lê a quantidade de dias que o hóspede ficou no hotel e imprime a taxa a pagar.
USANDO WHILE */

//declaração das variáveis
float diaria=50.00, txpg;
int qtd;

//entrada de dados
    printf("Digite a quantidade de dias de hospedagem: \n");
    scanf("%d", &qtd);
    
//teste de cada condição com WHILE antes de imprimir    
    while (qtd<15) {
        printf("O valor da taxa a pagar é: %.2f", qtd*15.30);
        break;
        }
    while (qtd==15) {
        printf("O valor da taxa a pagar é: %.2f", qtd*10.00);
        break;
        }
    while (qtd>15) {
        printf("O valor da taxa a pagar é: %.2f", qtd*8.50);
        break;
        }
    system("pause");

    return 0;
}
