#include <stdio.h>
#include <conio.h>
#include <windows.h>

// tarefa 4.2

main () {
	float nota1, nota2, media;
	
	printf("Nota 1 bimestre: "); scanf("%f", &nota1);
	printf("Nota 2 bimestre: "); scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	
	if (media >= 6){
		printf("Aluno APROVADO! Media : %.2f", media);
		
	} else {
		printf("Aluno REPROVADO. Media : %.2f", media);
		
	}
}

