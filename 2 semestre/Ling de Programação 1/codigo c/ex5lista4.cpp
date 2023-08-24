#include <iostream>

using namespace std;

int main()
{
    float numeros[5][5], A;
    int linha, coluna, contador;
    
    cout<<"Digite um numero para A: ";cin>>A;
    
    for (linha=0; linha<5; linha++){
        cout<<"Agora digite valores para a matriz!\n";
        for (coluna=0; coluna<5; coluna++){
            cout<<"Valor para linha "<<linha+1<<" e coluna "<<coluna+1<<": ";
            cin>>numeros[linha][coluna];
            if (numeros[linha][coluna]==A){
                contador++;
            }
        }
    }
    
    cout<<"\nO numero "<<A<<" aparece "<<contador<<" vezes na matriz.";
}

