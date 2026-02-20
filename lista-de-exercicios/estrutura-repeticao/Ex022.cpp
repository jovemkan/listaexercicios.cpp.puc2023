#include <iostream>

using namespace std;

int main() {
    int cpf[11];

    cout << "Digite o CPF (somente números): ";
    for (int i = 0; i < 11; i++) {
        cin >> cpf[i];
    }

    int soma = 0;

    int DigIgual = 1;
    for (int i = 1; i < 11; i++) {
        if (cpf[i] != cpf[0]) {
            DigIgual = 0;
            break;
        }
    }

    if (DigIgual) {
        cout << "CPF inválido!" << endl;
        return 0;
    }

    for (int i = 0; i < 9; i++)
        soma += cpf[i] * (10 - i);

    int Verificador1 = 11 - (soma % 11);
    if (Verificador1 >= 10)
        Verificador1 = 0;

    soma = 0;
    for (int i = 0; i < 10; i++)
        soma += cpf[i] * (11 - i);

    int Verificador2 = 11 - (soma % 11);
    if (Verificador2 >= 10)
        Verificador2 = 0;

    int cpfValido = (cpf[9] == Verificador1) && (cpf[10] == Verificador2);

    if (cpfValido) {
        cout << "CPF válido!" << endl;
    } else {
        cout << "CPF inválido!" << endl;
    }

    return 0;
}
