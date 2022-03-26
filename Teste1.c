#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




int main() {
	setlocale (LC_ALL, "brazilian - portuguese");
	
	int numero;
	float salario;
	char letra;
	char nome [30];
	char nome_completo [50];
	
	
	system("Color F");
	printf ("Digite um número inteiro: ");
	scanf ("%i", &numero);
	
	printf ("Digite o valor do seu salário R$: ");
	scanf ("%f", &salario);
	
	
	printf ("Digite uma letra aqui --> ");
	scanf ("%C", &letra);
	
	int fflush();
	printf ("Digite o seu primeiro nome: ");
	scanf ("%s", &nome);
	
	int fflush();
	printf ("Digite o seu nome completo: ");
	gets(nome_completo);
	
	
	
	printf ("\n==========================================\n");
	printf ("Printando as informações\n", numero);
	printf ("\n==========================================\n");
	
	
	printf("Você digitou o número %i\n", numero);
	printf("Você digitou o salário R$: %.2f\n", salario);
	
	
	printf("Você digitou a letra %c --> \n", letra);
	printf ("Você digitou o nome %s\n", nome);
	printf("Nome completo: %s\n", nome_completo);
	
	
	
	
	return 0;
	
}