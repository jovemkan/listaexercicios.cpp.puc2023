#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num;
    cout << "Digite o número de polígonos: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        int N;
        double R;
        cout << "Digite o número de lados (N) e o raio (R) do polígono: ";
        cin >> N >> R;
        double area = (N * R * R * sin((2 * M_PI) / N)) / 2;
        cout << "A área do polígono regular de " << N << " lados inscrito em uma circunferência de raio " << R << " é: " << area << endl;
    }
    return 0;
}