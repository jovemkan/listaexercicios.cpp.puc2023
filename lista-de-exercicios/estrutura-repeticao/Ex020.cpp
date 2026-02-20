#include <iostream>

using namespace std;

int main() {
    int numero;
    const int base = 16;

    cout << "Digite um número na base 10: ";
    cin >> numero;

    if (numero == 0) {
        cout << "O número equivalente na base 16 é: 0" << endl;
        return 0;
    }

    int resultado[100];
    int tamanho = 0;

    while (numero > 0) {
        resultado[tamanho] = numero % base;
        numero /= base;
        tamanho++;
    }

    cout << "O número equivalente na base 16 é: ";
    for (int i = tamanho - 1; i >= 0; i--) {
        if (resultado[i] < 10)
            cout << resultado[i];
        else
            cout << static_cast<char>('A' + resultado[i] - 10);
    }
    cout << endl;

    return 0;
}
