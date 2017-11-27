#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

/* 12) Escreva um programa em C que lê o nome, o peso (em kg) e a altura (em m) de uma pessoa e que ao final mostre
a seguinte mensagem: “Nome_da_Pessoa está com Índice de Massa Corporal IMC_da_Pessoa (Categoria_do_IMC)”.
O cálculo do IMC se dá pela seguinte fórmula: IMC = peso / altura2 . De acordo com o valor obtido,
a pessoa encontra-se em uma das seguintes categorias:
FAIXA DE IMC CATEGORIA
IMC < 18,5 Abaixo do Peso           18,5 <= IMC < 25 Peso Normal
25 <= IMC < 30 Acima do Peso         IMC ≥ 30 Obesidade */

//declaração de variáveis
    char nome1[40];
    float peso, altura, altura2, imc;

//entrada de dados
    printf("Digite o Nome: \n");
    fflush(stdin);
    gets(nome1);
    printf("Digite o Peso em Kg: \n");
    scanf("%f", &peso);
    printf("Digite a Altura em M: \n");
    scanf("%f", &altura);

//cálculos da altura com função pow (biblioteca math.h) e do imc
    altura2 = pow(altura,2);
    imc = peso / altura2;

//condições de acordo com o IMC usando if, else if e else  
  if (imc<18.5) {
        printf("%s está com índice de massa Corporal %2.f (Abaixo do Peso)\n\a", nome1, imc);
    } else if (imc<25) {
        printf("%s está com índice de massa Corporal %2.f (Peso Normal)\n\a", nome1, imc);
    } else if (imc<30) {
        printf("%s está com índice de massa Corporal %2.f (Acima do Peso)\n\a", nome1, imc);
    } else {
        printf("%s está com índice de massa Corporal %2.f (Obesidade)\n\a", nome1, imc);
    }
    system("pause");

    return 0;
}
