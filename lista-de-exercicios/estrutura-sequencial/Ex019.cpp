#include <iostream>

using namespace std;

int main() {
    int qtdLCD, qtdLED, qtdPlasma;
    double salarioFixo, comissaoLCD, comissaoLED, comissaoPlasma, salarioTotal;

    cout << "Digite a quantidade de TVs LCD vendidas: ";
    cin >> qtdLCD;

    cout << "Digite a quantidade de TVs LED vendidas: ";
    cin >> qtdLED;

    cout << "Digite a quantidade de TVs Plasma vendidas: ";
    cin >> qtdPlasma;

    cout << "Digite o salário fixo do empregado: R$";
    cin >> salarioFixo;

 
    comissaoLCD = qtdLCD * 50.0;
    comissaoLED = qtdLED * 60.0;
    comissaoPlasma = qtdPlasma * 55.0;

    salarioTotal = salarioFixo + comissaoLCD + comissaoLED + comissaoPlasma;

 
    cout << "O salário total do empregado é de R$" << salarioTotal << endl;

    return 0;
}

