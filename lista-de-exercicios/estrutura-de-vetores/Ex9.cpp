#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int conj = 30;
    int conjA[conj];
    int conjB[conj];
    int result[conj * 2];

    cout << "Digite os elementos do conjunto A em ordem crescente:" << endl;
    for (int i = 0; i < conj; i++) {
        cout << "Digite o elemento #" << (i + 1) << ": ";
        cin >> conjA[i];
    }

    cout << "Digite os elementos do conjunto B em ordem crescente:" << endl;
    for (int i = 0; i < conj; i++) {
        cout << "Digite o elemento #" << (i + 1) << ": ";
        cin >> conjB[i];
    }

    int conj1 = 0;
    int conj2 = 0;
    int resultado = 0;

    while (conj1 < conj && conj2 < conj) {
        if (conjA[conj1] <= conjB[conj2]) {
            result[resultado++] = conjA[conj1++];
        } else {
            result[resultado++] = conjB[conj2++];
        }
    }

    while (conj1 < conj) {
        result[resultado++] = conjA[conj1++];
    }

    while (conj2 < conj) {
        result[resultado++] = conjB[conj2++];
    }

    cout << "O conjunto C é:" << endl;
    for (int i = 0; i < conj * 2; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
