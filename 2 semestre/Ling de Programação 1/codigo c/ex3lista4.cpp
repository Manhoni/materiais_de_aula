#include <iostream>

using namespace std;

int main()
{
    int A[10], B[10], i, c;
    
    for (i=0;i<10;i++){
        cout<<"Digite o valor para a posição "<<i<<" de A: ";cin>>A[i];
        cout<<"Digite o valor para a posição "<<i<<" de B: ";cin>>B[i];
    }
    
    for (i=0;i<10;i++){    
        c = A[i];
        A[i] = B[9-i];
        B[9-i] = c;
    }
    
    cout<<"\nA[";
    for (i=0; i<10; i++){
        cout<<A[i]<<", ";
    }
    cout<<"]";
    
    cout<<"\nB[";
    for (i=0; i<10; i++){
        cout<<B[i]<<", ";
    }
    cout<<"]";
}


