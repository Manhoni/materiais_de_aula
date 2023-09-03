#include <stdio.h>
#include <conio.h>
#include <windows.h>

// exercicio 1.2

main (){
	float medida, centimetro;
	
	printf("Digite uma medida em polegadas: "); scanf("%f", &medida);
	
	centimetro = 2.54 * medida;
	
	printf("A medida de %.2f polegadas em centimetros e %.2f", medida, centimetro);
}

