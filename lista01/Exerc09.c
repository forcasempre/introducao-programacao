#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    /* Questão 9: Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a
    média ponderada	dessas notas.*/
    
    //Entrada de Dados
    float nt1, nt2, nt3, p1, p2, p3, mnt, mp, mdp;
    printf("\nDigite a Nota 1 em seguida seu respectivo peso: \n");
    scanf("%f%f", &nt1, &p1);
    printf("Digite a Nota 2 em seguida seu respectivo peso: \n");
    scanf("%f%f", &nt2, &p2);
    printf("Digite a Nota 3 em seguida seu respectivo peso: \n");
    scanf("%f%f", &nt3, &p3);
    
    //Cálculo da Média Ponderada
    //Cálculo do montante do peso
    mnt = (nt1*p1) + (nt2*p2) + (nt3*p3);
    //Cáuculo da soma dos pesos
    mp = (p1 + p2 + p3);
    //Cáuculo da Média ponderada dividindo o montante da soma dos pesos pela soma dos pesos
    mdp = mnt / mp;
    
    //saída de dados
    printf("\n\aA Média Ponderada é: %.1f\n", mdp);
    system("pause");


    return 0;
}
