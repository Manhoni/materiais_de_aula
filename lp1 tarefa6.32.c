#include <stdio.h>
#include <conio.h>
#include <windows.h>

// tarefa 6.3

main () {
	int numero, fat, i;
	printf("Digite um numero inteiro positivo: "); scanf("%d", &numero);
	i = 0;
	fat = numero;
	 
	if (numero == 0){
		printf("Fatorial de 0 é 1.");
	} else if (numero < 0) {
		printf("Digite um numero inteiro e positivo");
	} else {
	 	for (i=numero; i<=1; i--){
	 		fat = fat * (numero - 1);
	 		numero -= 1;
		 }
	}
	printf("O fatorial de %d é %d.", numero, fat);
}

