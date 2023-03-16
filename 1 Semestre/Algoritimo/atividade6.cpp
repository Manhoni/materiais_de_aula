#include <iostream>
using namespace std;
main(){
    float v1, v2, v3;
    
    cout<<"Digite o primeiro valor: "; cin>>v1;
    cout<<"Digite o segundo valor: "; cin>>v2;
    cout<<"Digite o terceiro valor: "; cin>>v3;
    cout<<"os valores digitados foram "<<v1<<", "<<v2<<", "<<v3<<".""\n";
    
    if (v1 > v2 && v1 > v3){
        cout<<v1<<" é o maior valor.";
    } else if (v2 > v1 && v2 > v3){
        cout<<v2<<" é o maior valor.";
    } else 
        cout<<v3<<" é o maior valor.";
}