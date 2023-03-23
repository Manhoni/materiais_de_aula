#include <iostream>
#include <math.h>
using namespace std;

main(){

    float peso, altura, imc;

    cout<<"Digite o peso (kg): "; cin>>peso;
    cout<<"Altura (m): "; cin>>altura;

    imc = peso/(altura * altura);
    cout<<"IMC "<<imc;

    cout<<"\nSITUACAO: ";
    
    if (imc < 20){
        cout<<"Abaixo do peso";
    } else if (imc >= 20 && imc < 25){
        cout<<"Peso normal";
    } else if (imc >= 25 && imc < 30){
        cout<<"Sobrepeso";
    } else if (imc >= 30 && imc < 40){
        cout<<"Obeso";
    } else
        cout<<"Obeso Morbido";
}