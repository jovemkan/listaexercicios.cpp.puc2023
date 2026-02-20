#include <iostream>

using namespace std;

int main() {
    int ano;

    cout << "Digite o ano: ";
    cin >> ano;

    if (ano < 1752) {
        cout << "O algoritmo só funciona para anos a partir de 1752!" << endl;
    } else if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        cout << ano << " é um ano bissexto!" << endl;
    } else {
        cout << ano << " não é um ano bissexto." << endl;
    }

    return 0;
}

