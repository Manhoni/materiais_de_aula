#include <iostream>
using namespace std;
#define qtd_notas 2
main(){
	float N1, N2, media;
	char opcao;
	do{
		do{
			cout<<"Digite a nota do 1 bimestre (0-10): "; cin>>N1;
			if (N1 < 0 || N1 > 10){ cout <<"\nErro! Informe valores de 0-10!";}
		} while (N1 < 0 || N1 > 10);
		do {
			cout<<"Digite a nota do 2 bimestre (0-10): "; cin>>N2;
			if (N2 < 0 || N2 > 10){cout <<"\nErro! Digite valores entre 0-10!";}
		} while (N2 < 0 || N2 > 10);
		media = (N1 + N2) / qtd_notas;
		cout<<"A media do aluno sera: "<<media;
		if (media >= 6 && media <= 10){cout<<"\n\nAprovado!";
		} else { cout<<"\n\nSubstitutiva - P3";
		}
		do {
			
			cout<<"\n\nDeseja continuar? [S/N]: "; cin>>opcao;
		} while (opcao !='s' && opcao != 'S' && opcao !='N' && opcao!='n');
	} while (opcao == 's' || opcao == 'S');
}
