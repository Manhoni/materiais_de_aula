#include <iostream>

using namespace std;

#define maxlinhas 10
#define maxcolunas 10 

int main()
{
    int amostra[maxlinhas][maxcolunas];
    int i, j, maior, linha_maior, coluna_maior;
    
    for (i=0; i<maxlinhas; i++){
        cout<<"Linha "<< i+1<< "\n";
        for(j=0; j<maxcolunas; j++){
            cin>>amostra[i][j];
        }
    }
    maior = amostra[0][0];
    linha_maior = 0;
    coluna_maior = 0;
    
    for (i=0; i<maxlinhas; i++){
        for (j=0; j<maxcolunas; j++){
            if (amostra[i][j]> maior){
                maior = amostra[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }
    cout<<"O maior valor é "<<maior<<"na posição [" << linha_maior << "][" << coluna_maior << "]";
}