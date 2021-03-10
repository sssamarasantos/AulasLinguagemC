#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Tabuada
	int t = 2, i;
	printf("Tabuada do %i: \n\n", t);
	for(i = 0; i <= 10; i++){
		printf("%i X %i = %i \n", t, i, t*i);
	}
	
	//Exemplos
	/*int i, j = 1, k = 1;
	//laco de repeticao for
	printf("Laco de repeticao for: \n");
	for(i = 1; i <= 10; i++){
		printf("%i \n", i);
	}
	//laco de repeticao while
	printf("Laco de repeticao while: \n");
	while(j <= 10){
		printf("%i \n", j);
		j++;
	}
	//laco de repeticao do while
	printf("Laco de repeticao do while: \n");
	do{
		printf("%i \n", k);
		k++;
	}while(k <= 10);*/
}
