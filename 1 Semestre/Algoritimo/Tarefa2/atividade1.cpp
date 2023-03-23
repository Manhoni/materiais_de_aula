#include <iostream>
#include <locale.h>
using namespace std;

main(){

    setlocale(LC_ALL, "Portuguese");
    int var1, var2, troca;

    cout<<"Digite a primeira variavel: "; cin>>var1;
    cout<<"Digite a segunda variavel: "; cin>>var2;

    cout<<"\nAs variáveis 1 e 2 são, respectivamente "<<var1<<" e "<<var2;

    troca = var1;
    var1 = var2;
    var2 = troca;

    cout<<"\n\nAgora trocadas elas são, var 1: "<<var1;
    cout<<", var2: "<<var2;
}