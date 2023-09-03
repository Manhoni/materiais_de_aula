#include <stdio.h>
#include <conio.h>
#include <windows.h>

// tarefa 5.3

main () {
	float chico, juca;
	int contador;
	
	contador = 0;
	chico= 150;
	juca= 110;
	
	do {
		
		chico += 2;
	
		juca += 3;
		
		contador += 1;
		
	} while (chico>=juca);
	
	printf("Foram necessarios %d anos para Juca passar Chico.", contador);
}

