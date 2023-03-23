#include <iostream>
using namespace std;

main(){
    
    float maior, menor, cont, num;

    for(cont = 1; cont<=4; cont++){
        cout<<"Digite o valor "<<cont<<": "; cin>>num;
        if (cont == 1){
            maior = num;
            menor = num;
        } else
            if (num > maior){
                maior = num;
            } if (num < menor){
                menor = num;
            }
    }
    cout<<"O maior numero e : "<<maior;
    cout<<"\nO menor numero e : "<<menor;

}



