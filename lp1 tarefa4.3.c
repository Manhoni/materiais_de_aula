#include <stdio.h>
#include <conio.h>
#include <windows.h>

// tarefa 4.3

main () {
	int codigo, i, id;
	float valor, media, maior, total;
	
	for (i=1; i<=15; i++){
		printf("Digite o codigo do produto: "); scanf("%d", &codigo);
		printf("Digite o valor do produto. R$ "); scanf("%f", &valor);
		
		if (maior < valor){
			maior = valor;
			id = codigo;
		}
		
		total += valor;
	}
	
	media = total / 2;
	
	printf("\nO maior valor digitado foi %.2f, com o codigo %d.\nE a media dos valores e %.2f", maior, id, media);
}

