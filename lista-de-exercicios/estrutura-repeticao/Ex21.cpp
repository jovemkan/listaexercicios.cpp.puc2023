#include <iostream>

using namespace std;

int main() {
    int Base8;
    int Base10 = 0;
    int power = 1;
    
    cout << "Digite um número na base 8: ";
    cin >> Base8;
    
    while (Base8 != 0) {
        int digit = Base8 % 10;
        Base10 += digit * power;
        power *= 8;
        Base8 /= 10;
    }
    
    cout << "O número equivalente na base 10 é: " << Base10 << endl;
    
    return 0;
}
