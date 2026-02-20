#include <iostream>

using namespace std;

int main() {
    double X = 1.5;

    for (int i = 0; i < 30; i++) {
        X=X-(X*X*X-3*X*X+1)/(3*X*X-6*X+3);
    }

    cout << "A trigésima aproximação da raiz é: " << X << endl;

    return 0;
}
