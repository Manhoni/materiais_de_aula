#include <stdio.h>
#include <conio.h>
#include <windows.h>

// exercicio 1.1

main () {
	int numero, ant, suc;
	
	printf("Digite um numero inteiro: "); scanf("%d", &numero);
	
	ant = numero - 1;
	suc = numero + 1;
	
	printf("O antecessor do %d e %d e seu sucessor e %d.", numero, ant, suc);
}

