#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const int conj = 100;
    int n[conj];
    double soma, media;

    for (int i = 1; i<=conj; i++){
        cout<<"Digite o número "<<i<<" de 100: ";
        cin>>n[i];
        soma += n[i];
    }

    media = soma / conj;

    cout<<"A média aritimética desse conjunto é "<<media; 

    return 0;
}