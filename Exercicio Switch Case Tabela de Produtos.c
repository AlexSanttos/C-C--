#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //
#include <locale.h> // Para acentuação
#include <ctype.h> // Para verificar, converter, comparar.


int main (){
setlocale (LC_ALL, "Brazilian - Portuguese");


int opcao;

printf("=====================================\n\n\n");
printf("Tabela de produtos\n\n");
printf("=====================================\n\n\n");

printf("1 -      Alimento nao perecivel\n");
printf("2,3,4 -  Alimento perecivel \n");
printf("5,6 -    Vestuario\n");
printf("7 -      Higiene Pessoal\n");
printf("8 ate 15 -Limpeza e utens. domestico \n");
printf("Digite uma opcao: ");
scanf("%i", &opcao);

switch(opcao){

case 1:
    printf("Alimento nao perecivel \n");
    break;
case 2 ... 4:
    printf("Alimento perecivel \n");
    break;
case 5 ... 6:
    printf("vestuario \n");
    break;
case 7:
    printf("Higiene pessoal \n");
    break;
case 8 ... 15:
    printf("Limpeza e utens. domestico");
    break;
    default: 
        printf("Opcao inserida é inválida");


}



system("pause");
return 0;
}