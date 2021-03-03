#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Primeiro
	/*int i = 10, j = 5;
	printf("Resultado: %i \n%i", i, j);*/
	
	//Segundo
	/*int x = 0;
	printf("Digite um valor: ");//escreve
	scanf("%i", &x);//capta escrita do teclado; & = gerar um lugar na memoria
	printf("Resultado: %i", x);*/
	//system("pause");
	
	//Terceiro
	int num1, num2;
	printf("Vamos fazer uma soma! \n");
	printf("Digite um valor: ");//escreve
	scanf("%i", &num1);
	printf("Digite um valor: ");//escreve
	scanf("%i", &num2);
	printf("\nResultado: %i", num1+num2);
}
