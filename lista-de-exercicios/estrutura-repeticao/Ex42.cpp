#include <iostream>

using namespace std;

int main() {
    int B, A;
    int sum = 0;

    cout << "Digite os valores de B e A (B > A): ";
    cin >> B >> A;

    for (int i = A + 1; i < B; i++) {
        if (i % 2 == 0) {
            sum += i * i * i;
        }
    }
    cout << "A soma dos cubos dos números pares entre " << B << " e " << A << " é: " << sum << endl;

    return 0;
}
