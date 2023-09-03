#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define imp 0.45 
#define dist 0.28

// exercicio 1.3

main () {
	
	float custofabrica, custofinal, custos;
	custos = imp + dist;
	
	printf("Digite o valor de fabrica do veiculo: R$ "); scanf("%f", &custofabrica);
	custofinal = custofabrica * (1+ custos);
	
	printf("O valor do veiculo ao consumidor sera : R$ %.2f", custofinal);
}

