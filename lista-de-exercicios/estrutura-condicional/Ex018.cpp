#include <iostream>
using namespace std;

int main() {
    float precoInicial, precoFinal;
    char arCondicionado, pinturaMetalica, vidroEletrico, direcaoHidraulica;

    
    cout << "Informe o preço inicial de fábrica: ";
    cin >> precoInicial;

   
    cout << "O carro possui ar condicionado? (S/N) ";
    cin >> arCondicionado;
    cout << "O carro possui pintura metálica? (S/N) ";
    cin >> pinturaMetalica;
    cout << "O carro possui vidro elétrico? (S/N) ";
    cin >> vidroEletrico;
    cout << "O carro possui direção hidráulica? (S/N) ";
    cin >> direcaoHidraulica;


    precoFinal = precoInicial;
    if (arCondicionado == 'S') {
        precoFinal += 1750;
    }
    if (pinturaMetalica == 'S') {
        precoFinal += 800;
    }
    if (vidroEletrico == 'S') {
        precoFinal += 1200;
    }
    if (direcaoHidraulica == 'S') {
        precoFinal += 2000;
    }

    cout << "O preço final do carro é: R$ " << precoFinal << endl;

    return 0;
}

