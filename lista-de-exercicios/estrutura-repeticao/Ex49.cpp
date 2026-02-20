#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 25; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int menor = min(a, min(b, c));
        int mdc = 1;

        for (int j = 2; j <= menor; j++) {
            if (a % j == 0 && b % j == 0 && c % j == 0) {
                mdc = j;
            }
        }

        cout << "Números lidos: " << a << ", " << b << ", " << c << endl;
        cout << "MDC: " << mdc << endl;
    }

    return 0;
}
