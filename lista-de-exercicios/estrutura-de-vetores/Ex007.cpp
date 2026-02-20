#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const int conj = 100;
    int n[conj];
    double soma = 0, media, raiz;

    for (int i = 1; i<=conj; i++){
        cout<<"Digite o número "<<i<<" de 100: ";
        cin>>n[i];
        soma += n[i];
    }

    raiz = sqrt(soma/conj);

    cout<<"A raiz média quadrática desse conjunto é "<<raiz;

    return 0;
}