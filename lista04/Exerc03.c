#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// função para verificar quantas vezes um número é divisível por outro
int d(int n1, int n2) {
  int cont=0, auxd, resto;
  if (n2==1) return 1;
  if (n2>= 2) {
  for ( ; n1 % n2 == 0 ; cont++) {
     auxd = n1 / n2;
    n1 = auxd;
  } }
  return cont;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

/* 3. Criar uma função que verifique quantas vezes um número é divisível por outro. */
    int n1, n2;

//usando do while, do para exibir as informações de entrada antes da condição
do {
    printf("Digite o Valor A e B (A >= B && B != 0): ");
    scanf("%d %d", &n1, &n2);
//while para testar a condição se é verdadeira e seguir adiante ou se for falsa e retornar para o DO    
} while (n1 < n2 || n2 == 0);

//imprimir o resultado
printf("%d é divisível por %d - %d vezes;\n", n1, n2, d(n1, n2));

   system("pause");

    return 0;
}
