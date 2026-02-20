#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int consumo;
    string tipo;
    double conta;

    cout << "Informe o tipo de cliente (residencial, comercial ou industrial): ";
    cin >> tipo;
    cout << "Informe o consumo de água em metros cúbicos: ";
    cin >> consumo;

    if (tipo == "residencial") {
        conta = 5.0 + consumo * 0.05;
    } else if (tipo == "comercial") {
        if (consumo <= 80) {
            conta = 500.0;
        } else {
            conta = 500.0 + (consumo - 80) * 0.25;
        }
    } else if (tipo == "industrial") {
        if (consumo <= 100) {
            conta = 800.0;
        } else {
            conta = 800.0 + (consumo - 100) * 0.04;
        }
    } else {
        cout << "Tipo de cliente inválido!\n";
        return 0;
    }

    cout << fixed << setprecision(2);
    cout << "Conta do cliente: R$ " << conta << endl;

    return 0;
}

