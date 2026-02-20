#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << "Ângulo (radianos)\tSeno" << endl;

    const double PI = 3.14159265359;
    const double incremento = 0.1;

    for (double angulo = 0.0; angulo <= 6.3; angulo += incremento) {
        double seno = angulo; // Primeiro termo da série de Mac-Laurin

        double termo = angulo;
        double fatorial = 1.0;
        int sinal = -1;

        for (int i = 1; i <= 10; i++) {
            termo *= (angulo * angulo) / ((2 * i) * (2 * i + 1));
            fatorial *= (2 * i) * (2 * i + 1);
            seno += sinal * termo;
            sinal *= -1;
        }

        cout << fixed << setprecision(4) << angulo << "\t\t" << seno << endl;
    }

    return 0;
}
