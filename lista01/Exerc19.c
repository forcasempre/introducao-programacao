#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

        /* 19) Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo.
        Calcule e mostre o salário a receber seguindo as regras abaixo: a) a hora trabalhada vale a metade
        do salário mínimo; b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo
        valor da hora trabalhada; c) o imposto equivale a 3% do salário bruto; d) o salário a  receber
        equivale ao salário bruto menos o imposto.     */

//Declaração das variáveis
    int ht;
    float vsm, vht, sb, imp, sr;
//entrada de dados    
    printf("\nDigite o nº de horas Trabalhadas: \n");
    scanf("%d", &ht);
    printf("Digite o Valor do Salário Mínimo:\nR$ ");
    scanf("%f", &vsm);
//Cálculos    
    vht = vsm / 2;
    sb = vht * ht;
    imp = (sb * 3)/100;
    sr = sb - imp;
//saída dos dados    
    printf("O Valor da Hora Trabalhada é R$ %.2f\n", vht);
    printf("O Valor do Salário Bruto é R$ %.2f\n", sb);
    printf("O Valor do Imposto sobre o Salário Bruto é R$ %.2f\n", imp);
    printf("O salário a Receber é R$ %.2f\n\a", sr);
    
    system("pause");

         return 0;
}
