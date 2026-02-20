#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const int conj = 30;
    int n[conj];
    double somaA = 0, somaB = 0;
    int conj1 = 0, conj2 = 0;
    int conjA = 0, conjB = 0;
    int resultado[conj*2], conjResult = 0;

    for (int i = 1; i<=conj; i++){
        cout<<"Digite o número "<<i<<" de 30 para o conjunto A: ";
        cin>>n[i];
        somaA += n[i];
    }
    for (int i = 1; i<=conj; i++){
        cout<<"Digite o número "<<i<<" de 30 para o conjunto B: ";
        cin>>n[i];
        somaB += n[i];
    }

    while (conjA < conj && conjB < conj) {
        resultado[conjResult++] = conj1[conjA++];
        resultado[conjResult++] = conj2[conjB++];
    }

    while (conjA < conj) {
        resultado[conjResult++] = conj1[conjA++];
    }

    while (conjB < conj) {
        resultado[conjResult++] = conj2[conjB++];
    }

    cout<<"O conjunto C é: { ";
    for (int i = 1; i <= conj * 2; i++) {
        cout<<resultado[i]<<", ";
    }
    cout<<" }"<<endl;

    return 0;
}