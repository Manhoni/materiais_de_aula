#include <iostream>
using namespace std;
#define qtd_notas 2
main(){
	float N1, N2, media; //declaração de variaveis
	cout<<"Digite a nota do 1º bimestre: ";
	cin>>N1;
	cout<<"Digite a nota do 2º bimestre: ";
	cin>>N2;
	if ((N1<0.0 || N1>10.0) || (N2<0.0 || N2>10.0)){
		cout<<"Digite um numero valido, entre 0 e 10.";
	} 
	else{
		media = (N1 + N2) / qtd_notas;
		cout<<"A media do aluno sera: "<<media;
		if (media >= 6.0 && media <= 10.0){
			cout<<"\n\nAprovado!";
		} else {
			cout<<"\n\nSubstitutiva - P3";
		}
	}
}
