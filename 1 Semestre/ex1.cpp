#include <iostream>

using namespace std;

int main()
{
    int soma, A[] = {1, 0, 5, -2, -5, 7};
    cout<<"a) A[1, 0, 5, -2, -5, 7]";
    soma = A[0] + A[1] + A[5];
    cout<<"\nb) a soma das posições 0, 1 e 5 é "<<soma;
    A[4] = 100;
    cout<<"\nc) a posição 4 agora é "<<A[4];
    cout<<"\nd)\n"<<A[0]<<"\n"<<A[1]<<"\n"<<A[2]<<"\n"<<A[3]<<"\n"<<A[4]<<"\n"<<A[5];
}

