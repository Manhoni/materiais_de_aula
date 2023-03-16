#include <iostream>
using namespace std;
main(){
	int numero;
	cout<<"Digite um numero inteiro: "; cin>>numero;
	if (numero % 2 == 0){
		cout<<"O numero digitado e par";
	} else {
		cout<<"O numero digitado e impar";
	}
	if (numero < 0){
		cout<<", e negativo";
	} else {
		cout<<", e positivo";
	}
}
