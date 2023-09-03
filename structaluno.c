#include <stdio.h>
#include <conio.h>
#include <windows.h>

/* criar um struct "aluno" com os campos : nome, nota1 e nota2.
 solicitar ao usuario que preencha. Depois exibir o nome e a média*/

struct aluno{
	char nome[50];
	float nota1, nota2, media;
};

main () {
	
	struct aluno a;
	
	printf("Nome: ");
	fgets(a.nome,50,stdin);
	
	printf("\nNota 1: ");
	scanf("%f", &a.nota1);
	
	printf("\nNota 2: ");
	scanf("%f", &a.nota2);
	
	a.media = (a.nota1 + a.nota2) / 2;
	
	system("cls");
	
	printf("\nNome: %s", a.nome);
	printf("\nNota 1: %.1f", a.nota1);
	printf("\nNota 2: %.1f", a.nota2);
	printf("\nMedia: %.1f", a.media);
	
}

