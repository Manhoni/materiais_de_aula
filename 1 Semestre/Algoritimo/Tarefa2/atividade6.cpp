#include <iostream>
using namespace std;

main(){
    
    float nota1, nota2, lista1, lista2, media;
    int aluno;
    
    cout<<"Digite a nota da P1: ";cin>>nota1;
    cout<<"Digite a nota da P2: ";cin>>nota2;
    cout<<"Digite o regime que o aluno esta (Regular = 1, Especial = 2): ";cin>>aluno;
    
    switch (aluno){
        case 1: 
        cout<<"\nAluno regular, digite a nota da lista 1: ";cin>>lista1;
        cout<<"\nLista 2: ";cin>>lista2;
        media = (((nota1+nota2)/2)*0.7) + (((lista1+lista2)/2)*0.3);
        if (media >= 6){
            cout<<"\nAprovado! Com media "<<media;
        } else {
            cout<<"\nReprovado, com media "<<media;
        } break;
        
        case 2: 
        cout<<"\nAluno regime especial.";
        media = (nota1+nota2)/2;
        if (media >= 6){
            cout<<"\nAprovado com media "<<media;
        } else {
            cout<<"\nReprovado, com media "<<media;
        } break;
        
    }
}