#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

/* Questão 15. Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que:
        Área = (base * altura)/2. */

//Declaração das variáveis
        float base, altura, area;
//entrada dos dados        
        printf("\nDigite a base do Triângulo em metros:\n");
        scanf("%f", &base);
        printf("Digite a Altura do triângulo em metros:\n");
        scanf("%f", &altura);
//cálculo da área do triângulo        
        area = (base * altura)/2;
//saída dos dados        
        printf("A área do Triângulo é: %.2f metros\n", area);
        
        system("pause");

    return 0;
}
