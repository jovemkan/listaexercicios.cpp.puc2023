#include <iostream>

using namespace std;

int main() {
    for (int num = 300; num <= 400; num++) {
        int numDivisores = 0;

        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                numDivisores++;
            }
        }

        cout << "Número: " << num << endl;
        cout << "Número de divisores: " << numDivisores << endl;
    }

    return 0;
}
