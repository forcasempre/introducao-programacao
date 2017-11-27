#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//função para cálculo da média de 3 notas
float m_aluno (float n1, float n2, float n3) {
    float m;
return m = (n1 + n2 + n3) / 3;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    {
        /*1. Crie uma função que receba três notas de um aluno e calcule a sua média. Crie também um
programa (main) que irá solicitar ao usuário o número de alunos que ele(a) pretende calcular
a média e, para cada aluno, calcular as suas respectivas médias. */

//declaração de variáveis
    int nalunos;
    float media, n1, n2, n3;

//entrada de quantidade de alunos para calcular a média
printf("Digite o Número de Alunos que deseja calcular uma média: \n");
scanf("%d", &nalunos);

/*condição for enquanto nalunos for maior ou igual a 1 então receba 3 notas, calcule a média e imprima
esta média, em seguida diminuia 1 de nalunos repetindo até chegar no número de aluno <1 */
for ( media ; nalunos>=1; nalunos--) {
    printf("\n\nDigite 3 Notas: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    media = m_aluno(n1, n2, n3);
    printf("A Média é: %.2f\n", media);
        }
        system("pause");
    }

 

    return 0;
}
