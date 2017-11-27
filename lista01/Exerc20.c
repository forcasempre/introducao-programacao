#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

        /* 20) Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura
        e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus
        o usuário deverá subir para atingir seu objetivo, sem se preocupar com  a altura do usuário */

//Declaração das variáveis
    float degrau, altalc, altura, obj;
//entrada dos dados    
    printf("\nDigite a altura do degrau em cm: ");
    scanf("%f", &degrau);
    printf("\nDigite a Altura que deseja alcançar em metros: ");
    scanf("%f", &altalc);
//cálculos    
    altura = altalc * 100;
    obj = altura / degrau;
//saída dos dados    
    printf("Você precisará subir %.1f degraus para alcançar a altura desejada\n\a", obj);
    
    system("pause");

         return 0;
}
