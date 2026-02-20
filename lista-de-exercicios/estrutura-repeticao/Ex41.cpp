#include <iostream>

using namespace std;

int main() {
    double x, y;

    while (true) {
        cout << "Digite as coordenadas do ponto (ou um flag para finalizar): ";
        cin >> x >> y;

        if (x == -1 && y == -1) {
            break;
        }

        if (x >= 0 && x <= 10 && y >= 0 && y <= 5) {
            cout << "INTERIOR" << endl;
        } else {
            cout << "EXTERIOR" << endl;
        }
    }
    return 0;
}
