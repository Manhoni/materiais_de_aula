#include <iostream>
using namespace std;

main(){
    
    float media, freq;
    
    cout<<"Digite a frequencia do aluno (%): ";cin>>freq;
    cout<<"Digite a media do aluno: ";cin>>media;
    
    if (freq < 75){
        cout<<"Aluno reprovado.";
    } else if (freq >= 75 && media < 3){
        cout<<"Aluno reprovado.";
    } else if (freq >= 75 && media >=3 && media < 7){
        cout<<"Aluno de recuperacao.";
    } else if (freq >= 75 && media >=7){
        cout<<"Aluno aprovado!";
    }
}