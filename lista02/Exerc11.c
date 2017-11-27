#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
/* 11) Depois da liberação do governo para as mensalidade dos planos de saúde, as pessoas começaram a fazer pesquisas para
descobrir um bom plano, não muito caro. Um vendedor de plano de saúde apresentou a tabela a seguir. Criar um algoritmo
que entre com o nome e a idade de uma pessoa e imprimir o nome e o valor que ela deverá pagar.
• Até 10 anos – R$30,00                 • Acima de 10 até 29 anos – R$60,00
• Acima de 29 até 45 anos – R$120,00    • Acima de 45 até 59 anos – R$150,00
• Acima de 59 até 65 anos – R$250,00    • Maior que 65 anos – R$400,00 */

//declaração de variáveis
    char nome[40];
    int idade;

//entrada de dados
    printf("Digite o Nome: \n");
    fflush(stdin);
    gets(nome);
    printf("\nDigite a Idade: \n");
    scanf("%d", &idade);
    
//condições para valores dos planos    
    if (idade<=10) {
        printf("O Valor do plano de %s é de R$ 30,00\n\a", nome);
    } else if (idade<=29) {
        printf("O Valor do plano de %s é de R$ 60,00\n\a", nome);
    } else if (idade<=45) {
        printf("O Valor do plano de %s é de R$ 120,00\n\a", nome);
    } else if (idade<=59) {
        printf("O Valor do plano de %s é de R$ 150,00\n\a", nome);
    } else if (idade<=65) {
        printf("O Valor do plano de %s é de R$ 250,00\n\a", nome);
    } else {
        printf("O Valor do plano de %s é de R$ 400,00\n\a", nome);
    }
    system("pause");


    return 0;
}
