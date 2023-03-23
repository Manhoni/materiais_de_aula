#include <iostream>
using namespace std;

main(){
    
    int categoria;
    char opc, nome[20];
    
    categoria = 1;
    
    do {
        
        cout<<"Qual o nome do funcionario: ";cin>>nome;
        cout<<"Qual a categoria do funcionario? (1 - [A, C, F e H] 2 - [B, D, E, I, J e T] 3 - [K e R]): ";
        cin>>categoria;
        
        switch (categoria) {
            case 1: cout<<"O aumento será de 10% para o funcionario "<<nome; break;
            case 2: cout<<"O aumento sera de 15% para o funcionario "<<nome; break;
            case 3: cout<<"O aumento sera de 25% para o funcionario "<<nome; break;
            default: cout<<"Categoria invalida.";
        }
        cout<<"\nDeseja selecionar outro funcionario [S/N]: ";cin>>opc;
    } while (opc == 'S' || opc == 's');
}