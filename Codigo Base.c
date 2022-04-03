#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "Portuguese");

int a = 5;
int b = 2;
float result;
result = (float) a/b;

printf("\n");
printf("Resultado da divisao: %.1f\n\n", result);





system("pause");
return 0;
}