#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const int conj = 100;
    int n[conj];
    double soma, media, desvio = 0;

    for (int i = 1; i<=conj; i++){
        cout<<"Digite o número "<<i<<" de 100: ";
        cin>>n[i];
        soma += n[i];
    }

    media = soma / conj;

    for (int i = 1; i<=conj; i++){
          desvio += (n[i] > media) ? (n[i] - media) : (media - n[i]);
    }

    desvio /= conj;

    cout<<"O desvio médio desse conjunto é de "<<desvio;

    return 0;
}