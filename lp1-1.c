#include <stdio.h>
#include <conio.h>
#include <windows.h>

/* Exemplo de Entrada e saida em C */

main()
{
    char nome[60];
    
    system("chcp 1252 > nul");  /* precisa do include windows.h */
    
    printf("Digite o seu none: "); 
    scanf("%s",&nome);
    
    printf("\n\nBoa noite, %s", nome);
}

