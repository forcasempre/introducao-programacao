#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//função para calcular fatorial
int fat(int n) {
    int nf, f=1;
    for ( nf=n; nf>1; nf--) {
        f = f * nf;
    } return f;
    }

//função da questão 5 com função fatorial
float c(float n, float p) {
float z;
z = fat(n) / (fat(p) * fat(n-p));
return z;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

/* 5. Criar uma função que calcule o número de combinações de n elementos p a p. A fórmula da
combinação é a seguinte: c  n/p = __n!__
                                  p! * (n-p)!  */

float n, f1, f2, p, c1;

printf("Digite um número para fatorial de N e outro para fatorial de P: \n");
scanf("%f %f", &n, &p);

c1 = c(n, p);

printf("\no fatorial de C = !P / !P * (n - p)! é: %.2f\n", c1);

   system("pause");

    return 0;
}
