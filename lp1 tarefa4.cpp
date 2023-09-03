#include <stdio.h>
#include <conio.h>
#include <windows.h>

// exercicio 2.1

main () {
	int numeroa, numerob;
	
	printf("Digite dois numeros: "); scanf("%d%d", &numeroa, &numerob);
	
	if (numeroa == numerob) {
		printf("Sao Iguais.");
	} else {
		printf("Sao diferentes");
	}
}

