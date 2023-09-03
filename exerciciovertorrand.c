#include <stdio.h>
#include <conio.h>
#include <windows.h>

// criar um vetor com 6 posiçlões de inteiros. Preencher com valores de 3 a 8. Exibir o vetor.

main () {
	int numero, cont;
	
	int vetor[6];
	
	srand(time(NULL));
	
	for(cont=0; cont<7; cont++) {
		numero = rand()%6 + 3;
		vetor[cont] = numero;
		
		if (cont == 0) {
			printf("{");
		}
		printf("%d ", vetor[cont]);
		if(cont<6) {
			printf(",");
		} else if (cont == 6) {
			printf("}");
		}
	}
}

