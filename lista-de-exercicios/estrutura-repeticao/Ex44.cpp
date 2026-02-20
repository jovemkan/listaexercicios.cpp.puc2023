#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Número de Lados | Semiperímetro" << endl;

    for (int N = 5; N <= 100; N += 5) {
        double semiperimetro = N * sin(M_PI / N);
        cout << "       " << N << "       |   " << semiperimetro << endl;
    }

    return 0;
}
