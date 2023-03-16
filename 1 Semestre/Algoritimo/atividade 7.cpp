#include <iostream>
using namespace std;
main(){
    int v1, v2, v3;
    
    cout<<"O programa ira mostrar o menor valor entre os 3 digitados.";
    cout<<"\nDigite o primeiro valor: "; cin>>v1;
    cout<<"O segundo valor: "; cin>>v2;
    cout<<"O terceiro valor: "; cin>>v3;
    cout<<"\n";
    
    if (v1 < v2 && v1 < v2){
        cout<<v1<<" é o menor valor";
    } else if (v2 < v1 && v2 < v3){
        cout<<v2<<" é o menor valor";
    } else {
        cout<<v3<<" é o menor valor.";
    }
}