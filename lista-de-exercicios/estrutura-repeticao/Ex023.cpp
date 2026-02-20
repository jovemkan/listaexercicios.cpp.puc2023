#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    int quantidade;

    cout << "Digite o primeiro termo: ";
    cin >> num1;

    cout << "Digite o segundo termo: ";
    cin >> num2;

    cout << "Digite quantos termos serão gerados: ";
    cin >> quantidade;

    cout << "Série de Fetuccine:" << endl;
    cout << num1 << " " << num2 << " ";

    for (int i = 3; i <= quantidade; i++) {
        int termo;
        
        if (i % 2 == 1) {
            termo = num1 + num2;
        } else {
            termo = num1 - num2;
        }
        
        cout << termo << " ";

        num1 = num2;
        num2 = termo;
    }

    cout << endl;

    return 0;
}
