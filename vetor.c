#include <stdio.h>
#include <windows.h>
#include <conio.h>

struct pessoa{
  	char nome [50];
  	int idade;
  	char rg[15];
};
	
main () {
  	struct pessoa p;

  	printf("Nome: ");
  	fgets(p.nome, 50, stdin);

  	printf("\nIdade: ");
  	scanf("%d", &p.idade);

  	fflush(stdin);
  	printf("\nRG: ");
  	fgets(p.rg,15,stdin);

  	system("cls");

  	printf("None: %s", p.nome);
  	printf("Idade: %d", p.idade);
  	printf("\nRG: %s", p.rg);
}
