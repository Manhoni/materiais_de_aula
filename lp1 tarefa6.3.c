#include <stdio.h>
#include <conio.h>
#include <windows.h>

// tarefa 6.3

main () {
	int numero, fat, i, numfinal;
	printf("Digite um numero inteiro positivo: "); scanf("%d", &numero);
	i = 0;
	fat = numero;
	numfinal = numero;
	 
	if (numero == 0){
		printf("Fatorial de 0 e 1.");
	} else if (numero < 0) {
		printf("Digite um numero inteiro e positivo.");
	} else if (numero > 0) {
	 	for (i=numero; i>1; i--){
	 		fat = fat * (numero - 1);
	 		numero -= 1;
		 }
	}
	if (numero > 0){
		printf("O fatorial de %d e %d.", numfinal, fat);
	}
}

