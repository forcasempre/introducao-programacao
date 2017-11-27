#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

/* 5) A prefeitura do Recife abriu uma linha de crédito para os funcionários estatutários. O valor
máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer um algoritmo
que permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo
pode ou não ser concedido.*/

//Declaração das variáveis
        float sb, ve, valmax, vparcela;
        int np;
//entrada dos dados        
        printf("\nInforme o Salário Bruto:\n");
        scanf("%f", &sb);
        printf("Informe o Valor do Empréstimo:\n");
        scanf("%f", &ve);
        printf("Informe o Número de Parcelas:\n");
        scanf("%d", &np);
//cálculo do valor máximo do empréstimo        
        valmax = (sb * 30)/100;
//cálculo do valor da parcela        
        vparcela = ve / np;

//condição para se valor da parcela maior que o valor máximo da parcela então não conceder
        if (vparcela > valmax) {
            printf("\n\aO Empréstimo NÃO pode ser concedido!");
//condição para se valor da parcela menor ou igual que o valor máximo da parcela então conceder            
        } else {
        printf("\n\aO Empréstimo PODE ser concedido!");
        }
        system("pause");

      return 0;
}
