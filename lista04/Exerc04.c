#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//função utilizando switch case para retornar 0 casa seja vogal e 1 para o default
char car(c){
int ret;
switch (c) {
case 'a':
    return 0;
case 'A':
    return 0;
case 'e':
    return 0;
case 'E':
    return 0;
case 'i':
    return 0;
case 'I':
    return 0;
case 'o':
    return 0;
case 'O':
    return 0;
case 'u':
    return 0;
case 'U':
    return 0;
default:
    return 1;
}
return ret;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

/* 4. Criar uma função que receba um caractere como parâmetro e retorne 1, caso seja uma vogal,
minúscula ou maiúscula, e 0 em caso contrário.*/
char c;
int r;

//entrada de dados
printf("Entre com um Caractere: \n");
scanf("%c", &c);

//chamando função
r = car(c);
//impressão do retorno
printf("\n%d\n", r);

   system("pause");

    return 0;
}
