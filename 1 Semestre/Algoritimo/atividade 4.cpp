#include <iostream>
using namespace std;
main(){
	float num1;
	
	cout<<"Digite um valor para o numero: "; cin>>num1;
	
	if (num1==0){
		cout<<"Zero não! Escolha outro numero";
	} else if (num1>0){
		num1 = num1 * 2;
		cout<<"O resultado do dobro do numero e "<<num1;
	} else {
		num1 = num1 * 3;
		cout<<"O resultado do triplo do numero e "<<num1;
	}
}
