#include <stdio.h>
/* #include <windows.h> */

/* Exemplo de Entrada e saida em C */

int main()
{
    char nome[60];
    
    /*system("chcp 1252 > nul");   precisa do include windows.h */
    
    printf("Digite o seu none: "); 
    scanf("%s",&nome);
    //gets(nome); assim ele pega o nome todo até com espaços
    // ou fgets(nome,60,stdin);
    
    printf("\n\nBoa noite, %s", nome);
}
