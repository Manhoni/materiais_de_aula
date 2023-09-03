#include <stdio.h>
#include <conio.h>
#include <windows.h>

// tarefa 5.2

main () {
	int idade;
	
	printf("Idade do atleta: "); scanf("%d", &idade);
	
	if (idade < 5){
		printf("Atleta com idade inferior ao permitido.");
	} else if (idade >= 5 && idade <= 7){
		printf("\nAtleta infantil A.");
	} else if (idade >= 8 && idade <= 10){
		printf("\nAtleta infantil B.");
	} else if (idade >= 11 && idade <= 13){
		printf("\nAtleta juvenil A.");
	} else if (idade >= 14 && idade <= 17){
		printf("\nAtleta juvenil B.");
	} else {
		printf("\nAtleta adulto.");
	}
}

