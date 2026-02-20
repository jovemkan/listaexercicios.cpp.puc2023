#include <iostream>
#include <cmath>

using namespace std;

int main() {
    while (true) {
        double x1, y1, x2, y2;

        cout << "Digite as coordenadas do ponto P (x1 y1): ";
        cin >> x1 >> y1;

        cout << "Digite as coordenadas do ponto Q (x2 y2): ";
        cin >> x2 >> y2;

        double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        cout << "Distância entre os pontos P e Q: " << distance << endl;
        cout << endl;
    }

    return 0;
}
