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

//declaração de variáveis
    float diaria1=50.00, txpg1;
    int qtd1;

//entrada de dados
    printf("Digite a quantidade de dias de hospedagem: \n");
    scanf("%d", &qtd1);
    
//condição para menor q 15 diárias    
    if (qtd1<15) {
        printf("O Valor da diária é R$ %.2f", qtd1*15.30);
//condição para igual a 15 diárias         
    } else if (qtd==15) {
        printf("O Valor da diária é R$ %.2f", qtd1*10.00);
//condição paramaior q 15 diárias         
    } else {
        printf("O Valor da diária é R$ %.2f", qtd1*8.50);
        }
        system("pause");

    return 0;
}
