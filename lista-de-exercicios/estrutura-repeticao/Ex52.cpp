#include <iostream>

using namespace std;

int main() {
    cout << "Números primos entre 5.000 e 7.000:" << endl;

    for (int num = 5000; num <= 7000; num++) {
        int divisors = 0;

        if (num <= 1)
            divisors = 1;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                divisors++;
                break;
            }
        }

        if (divisors == 0) {
            cout << num << endl;
        }
    }

    return 0;
}
