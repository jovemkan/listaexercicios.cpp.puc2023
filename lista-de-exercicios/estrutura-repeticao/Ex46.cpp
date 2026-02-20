#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double Y;

    cout << "Digite um número positivo: ";
    cin >> Y;

    if (Y < 0) {
        cout << "O número deve ser positivo." << endl;
        return 0;
    }

    double X = Y / 2.0;

    for (int i = 0; i < 20; i++) {
        X = (X * X + Y) / (2 * X);
    }

    cout << "A raiz quadrada de " << Y << " é: " << X << endl;

    return 0;
}
