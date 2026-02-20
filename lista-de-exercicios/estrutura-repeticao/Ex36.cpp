#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << "x\t y\t z\t F(x, y, z)" << endl;

    for (int x = 1; x <= 100; x += 3) {
        for (int y = 6; y <= 30; y += 3) {
            for (int z = 3; z <= 15; z += 2) {
                double resultado = pow(x, 2) + pow(y, 2) + pow(z, 2);
                resultado /= pow(x, 4) * pow(y, 4) * pow(z, 4);
                cout << x << "\t " << y << "\t " << z << "\t " << fixed << setprecision(4) << resultado << endl;
            }
        }
    }
    return 0;
}
