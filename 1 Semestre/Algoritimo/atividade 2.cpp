/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include <math.h>
int main(){
    float numero, raiz;
    cout<<"Digite o numero que deseja saber a raiz quadrada: ";
    cin>>numero;
    raiz = sqrt (numero);
    cout<<"A raiz do numero "<<numero<<" é "<<raiz;
}