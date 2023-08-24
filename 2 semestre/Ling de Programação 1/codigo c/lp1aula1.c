#include <stdio.h>

int main()
{
    int quantidade;
    float preco, novopreco;
    char tipo;
    
    printf("\nN - Novo | U - Usado: ");
    scanf("%c", &tipo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    printf("\nDigite o valor: ");
    scanf("%f", &preco);
    
    
    if (tipo == 'N' || tipo == 'n'){
        novopreco = ( preco * quantidade );
        novopreco = (novopreco*0.2) + novopreco;
        //novopreco *= 1.20;
        printf("\nO valor total sendo produto novo: R$ %.2f",novopreco);
    } else {
        novopreco = ( preco * quantidade );
        novopreco = (novopreco*0.1) + novopreco;
        //novopreco *= 1.10;
        printf("\nO valor total sendo produto usado: R$ %.2f",novopreco);
    }
}
