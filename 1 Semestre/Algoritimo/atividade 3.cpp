#include <iostream>
using namespace std;
main(){
	int valorA, valorB, valorC;
	
	cout<<"Digite um valor para A: "; cin>>valorA;
	cout<<"Digite um valor para B: "; cin>>valorB;
	
	if (valorA==valorB){
		valorC = valorA + valorB;
	} else {
		valorC = valorA * valorB;
	}
	cout<<"\nO resultado da operacao e "<<valorC;
}
