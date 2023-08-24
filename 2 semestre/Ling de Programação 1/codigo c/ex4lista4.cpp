#include <iostream>

using namespace std;

int main()
{
    int vet[10], i, temp;
    
    for (i=0;i<10;i++){
        cout<<"Digite um valor para a posição "<<i<<" do vetor: ";cin>>vet[i];
    }
    for (i=0;i<10;i++){
        
        temp = vet[i];
        vet[i] = vet[9-i];
        vet[9-i] = temp;
    }
    
    cout<<"\nvetor[";
    for (i=0; i<10; i++){
        cout<<vet[i]<<", ";
    }
    cout<<"]";
    
}

