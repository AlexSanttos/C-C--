#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //
#include <locale.h> // Para acentuação
#include <ctype.h> // Para verificar, converter, comparar.

int main (){
setlocale (LC_ALL, "Portuguese");


char c;


printf("Digite uma Letra: \n ");

c= toupper (getche());
getchar();
printf("Letra = %c \n", c);


switch(c) {

    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Voce digitou a vogal %c \n", c);
    break;
    default:
            printf("Voce digitou a consoante %c \n ", c);
}

printf("===================================================\n\n\n");

system("pause");
return 0;
}