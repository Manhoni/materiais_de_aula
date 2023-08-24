#include <iostream>

using namespace std;

#define linhas 3
#define colunas 3

int main()
{
    int matriz[linhas][colunas];
    int vetor[colunas] = {0};
    
    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz[i][j];
        }
    }
    
    for (int j = 0; j < colunas; j++) {
        for (int i = 0; i < linhas; i++) {
            vetor[j] += matriz[i][j];
        }
    }
    
    cout << "Vetor resultante:\n";
    for (int j = 0; j < colunas; j++) {
        cout << vetor[j] << " ";
    }
    cout << endl;
    
}
