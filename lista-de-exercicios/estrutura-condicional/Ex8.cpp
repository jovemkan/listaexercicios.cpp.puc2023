#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "Digite um numero inteiro positivo: ";
    cin >> n;

    int raiz = sqrt(n); 

    if(raiz * raiz == n) 
    {
        cout << n << " e um quadrado perfeito." << endl;
    }
    else
    {
        cout << n << " nao e um quadrado perfeito." << endl;
    }

    return 0;
}

