#include <stdio.h>
#include <conio.h>
#include <windows.h>

// tarefa 3.2

main () {
	int cliente;
	float valor;
	
	printf("Digite o valor total da compra. R$ "); scanf("%f", &valor);
	printf("Agora insira o código do tipo de cliente, sendo: \n1 - Interno\n2 - Vip\n3 - Comum\n: ");
	scanf("%d", &cliente);
	
	if (cliente == 1){
		valor = valor - valor * 0.10;
	} else if (cliente == 2){
		valor = valor - valor * 0.05;
	}
	
	printf("O valor a ser pago após o calculo do desconto é: R$ %.2f", valor);
}

