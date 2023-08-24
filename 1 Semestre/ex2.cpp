#include <iostream>

using namespace std;

int main()
{
    int A[10], B[10], i;
    
    for (i=0; i<10; i++) {
        cout<<"Digite o elemento "<<i<<" do vetor A: ";cin>>A[i];
        
        if (A[i] % 2 == 0){
            B[i] = A[i] * 5;
        } else {
            B[i] = A[i] + 5;
        }
    }
    
    cout<<"\nB[";
    for (i=0; i<10; i++){
        cout<<B[i]<<", ";
    }
    cout<<"]";
    
}
