#include <stdio.h>
#include <conio.h>
#include <windows.h>

// exercicio 2.2

main () {
	int maca;
	float valor;
	
	printf("Quantidade de maças: "); scanf("%d", maca);
	
	if (maca < 12){
		valor = maca * 1.3;
	} else {
		valor = maca * 1;
	}
	
	printf("O valor final da compra sera: R$ %.2f", valor);
}

