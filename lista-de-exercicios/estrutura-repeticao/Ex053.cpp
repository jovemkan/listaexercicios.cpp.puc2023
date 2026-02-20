#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Digite os números na base 3 (digite 0 para encerrar):" << endl;

    int numeroBase3;
    cin >> numeroBase3;

    while (numeroBase3 != 0) {
        int numeroBase10 = 0;
        int potencia = 0;

        int digito;
        while (numeroBase3 > 0) {
            digito = numeroBase3 % 10;
            numeroBase10 += digito * pow(3, potencia);
            numeroBase3 /= 10;
            potencia++;
        }

        cout << "Número na base 3: " << digito << endl;
        cout << "Número na base 10: " << numeroBase10 << endl;

        cin >> numeroBase3;
    }

    return 0;
}
