#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

    /* 07) Entrar com nome, sexo e idade de uma pessoa. Se a pessoa for do sexo feminino e tiver
menos de 25 anos, imprimir nome e a mensagem: ACEITA. Caso contrário, imprimir nome
e a mensagem: NÃO ACEITA.*/

//Declaração das variáveis
    char nome[20], sexo;
    int idade;
//Entrada dos dados
    printf("Digite o nome: ");
    fflush(stdin);
    gets(nome);
    printf("\nDigite o Sexo M ou F: ");
    scanf("%c", &sexo);
    printf("\nDigite a idade: ");
    scanf ("%d", &idade);

//Condição para se sexo = a F e idade < 25 imprimir nome e aceita
    if (sexo=='F'&&idade<25) {
        printf("\n%s ACEITA\n\a", nome);
//Condição para se sexo = a f e idade < 25 imprimir nome e aceita        
    } else if (sexo=='f'&&idade<25) {
        printf("\n%s ACEITA\n\a", nome);
//Condição para se sexo != a F e/ou idade >= 25 imprimir nome e não aceita        
    } else {
    printf("\n%s NÃO ACEITA\n\a", nome);
    }
    system("pause");

    return 0;
}
