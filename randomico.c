#include <stdio.h>
#include <conio.h>
#include <windows.h>

// aula randomicos

main () {
	int numero, cont;
	
	srand(time(NULL));
	
	for(cont=0; cont<15; cont++) {
	
		numero = rand()%10+1;
	
		printf("%d \t", numero);
	}
}

