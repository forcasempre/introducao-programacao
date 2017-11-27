#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    /* 16) Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área=npi2
    Obs.: Crie uma constante para pi , sabendo que ele vale 3.1415.*/

//Declaração de Variáveis
        float raio, raio2, area;
        const float pi=3.1415;
//entrada de dados        
        printf("Digite o valor do Raio do Círculo:\n");
        scanf("%f", &raio);
//cálculo do raio com função "pow" que é a potência, através da biblioteca math.h        
        raio2 = pow(raio,2);
//cálculo da área        
        area = pi * raio2;
//saída de dados        
        printf("O Valor de PI é: %.4f\n", pi);
        printf("A Potência do Raio é: %.2f\n", raio2);
        printf("A Área do Círculo é: %.2f\n\a", area);
        
        system("pause");

         return 0;
}
