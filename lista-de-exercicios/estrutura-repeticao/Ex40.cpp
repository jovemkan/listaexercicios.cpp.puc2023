#include <iostream>
#include <cmath>

using namespace std;

int main() {
    while (true) {
        double a, b;

        cout << "Digite os parâmetros A e B da reta (ou 0 para finalizar): ";
        cin >> a >> b;

        if (a == 0 && b == 0) {
            break;
        }

        double area = 0.0;

        if (a != 0 && b != 0) {
            double base = fabs(-b / a);
            double height = fabs(b);
            area = 0.5 * base * height;
        }

        cout << "Parâmetros: A = " << a << ", B = " << b << endl;
        cout << "Área do triângulo formado: " << area << endl;
        cout << endl;
    }

    return 0;
}
