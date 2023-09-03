#include <stdio.h>
#include <conio.h>
#include <windows.h>

// tarefa 6.2

main () {
	int combustivel, litros;
	float valor;
	
	printf("Quantidade de litros: "); scanf("%d", &litros);
	printf("Tipo do combustivel \n1 - alcool\n2 - gasolina\n: "); scanf("%d", &combustivel);
	
	if (combustivel == 1){
		if (litros <= 20 ){
			valor = litros*2.90*(1 - 0.03);
		} else {
			valor = litros*2.90*(1 - 0.05);
		}
	} else if (combustivel == 2){
		if (litros <= 20){
			valor = litros*3.30*(1 - 0.04);
		} else {
			valor = litros*3.30*(1 - 0.06);
		}
	}
	
	printf("\nO valor a ser pago : R$%.2f", valor);
}

