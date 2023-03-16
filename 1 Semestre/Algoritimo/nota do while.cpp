#include <iostream>
using namespace std;
#define qtd_notas 2
main(){
	float N1, N2, media;
	char opcao;
	do{
		cout<<"Digite a nota do 1 bimestre: "; cin>>N1;
		cout<<"Digite a nota do 2 bimestre: "; cin>>N2;
		if (N1<0 || N1 > 10 || N2<0 || N2>10){
			cout<<"Digite a nota no intervalo de 0 a 10.";
		} else {
			media = (N1 + N2) / qtd_notas; //processamento
			cout<<"A media do aluno sera: "<<media; //saida
			if (media >= 6.0 && media <= 10.0){ cout<<"\n\nAprovado!";
			} else { cout<<"\n\nSubstitutiva - P3";
			}
		}
		cout<<"\n\nDeseja continuar S/N ? :"; cin>>opcao;
	} while (opcao == 's' || opcao == 'S');
}
