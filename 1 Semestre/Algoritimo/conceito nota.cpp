#include <iostream>
using namespace std;
main(){
	float media;
	cout<<"Digite a media do aluno: "; cin>>media;
	if (media >= 0 && media <= 2.9 ){
		cout<<"E";
	} else if (media >= 3.0 && media <= 4.9){
		cout<<"D";
	} else if (media >= 5.0 && media <= 6.9){
		cout<<"C";
	} else if (media >= 7.0 && media <= 8.9){
		cout<<"B";
	} else if (media >= 9.0 && media <= 10.0){
		cout<<"A";
	}
}
