#include <stdio.h>
#include <conio.h>
#include <windows.h>

// tarefa 3.3

main () {
	int valor1, valor2, soma, i;
	
	printf("Digite um valor inteiro: "); scanf("%d" ,&valor1);
	printf("Digite outro valor inteiro: "); scanf("%d" ,&valor2);
	
	if (valor1 > valor2){
		printf("Digite um numero maior para o segundo valor.");
	} else {
		for(i=valor1; i<=valor2;i++){
			soma += i;
			printf("\n%d", i);
			printf("\nA soma entre %d e %d e %d.", valor1, valor2, soma);
		}
	}
}

