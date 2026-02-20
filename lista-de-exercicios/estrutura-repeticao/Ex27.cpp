#include <iostream>

using namespace std;

int main() {
    int totalOp = 40;
    int OpMaxPadrao = 24;
    int OpMaxLuxo = 32;

    float lucropadrao, lucroluxo;
    cout << "Digite o lucro por rádio padrão (x): ";
    cin >> lucropadrao;

    cout << "Digite o lucro por rádio luxo (y): ";
    cin >> lucroluxo;

    int OpPadrao = OpMaxPadrao;
    int OpLuxo = totalOp - OpPadrao;

    int radiosPadrao = OpPadrao;
    int radiosLuxo = OpLuxo / 2;

    float lucroTotal = (radiosPadrao * lucropadrao) + (radiosLuxo * lucroluxo);

    cout << "Esquema de Produção para Lucro Máximo:" << endl;
    cout << "Operários na linha padrão: " << OpPadrao << endl;
    cout << "Operários na linha luxo: " << OpLuxo << endl;
    cout << "Número de rádios padrão produzidos: " << radiosPadrao << endl;
    cout << "Número de rádios luxo produzidos: " << radiosLuxo << endl;
    cout << "Lucro diário: " << lucroTotal << " Reais" << endl;

    return 0;
}
