#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
	system ("color E");
	
	setlocale (LC_ALL, "Portuguese");
	
	float n1,n2, media;
	
	
	printf("==================================\n");
	printf("Resultado do semestre \n");
	printf("==================================\n");
	
	printf("Digite a 1ª nota: \n");
	scanf ("%f", &n1);
	
	printf("Digite a 2ª nota: \n");
	scanf ("%f", &n2);
	
	media = (n1 + n2)/2;
	
	printf ("Media = %.2f \n", media);
	
	
	
system("pause");
	return 0;
}