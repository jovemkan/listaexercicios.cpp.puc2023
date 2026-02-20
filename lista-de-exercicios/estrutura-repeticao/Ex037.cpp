#include <iostream>

using namespace std;

int main() {
    while (true) {
        int num1, num2, num3;

        cout << "Digite três números (ou 0 para finalizar): ";
        cin >> num1 >> num2 >> num3;

        if (num1 == 0 || num2 == 0 || num3 == 0) {
            break;
        }

        int a = num1;
        int b = num2;
        int c = num3;

        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        int mdc = a;

        while (c != 0) {
            int temp = c;
            c = mdc % c;
            mdc = temp;
        }

        cout << "Máximo Divisor Comum (MDC): " << mdc << endl;
        cout << endl;
    }

    return 0;
}
