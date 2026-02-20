#include <iostream>

using namespace std;

int main() {
    const int motosTk = 55000;
    const int motosAp = 1500;
    const float taxaTk = 0.005;
    const float taxaAp = 0.0089;

    int anos = 0;
    int motosApAtual = motosAp;
    int motosTkAtual = motosTk;

    while (motosApAtual <= motosTkAtual) {
        anos++;
        motosApAtual += motosApAtual * taxaAp;
        motosTkAtual += motosTkAtual * taxaTk;
    }

    cout << "Em " << anos << " anos, Aparecida de Goiânia superará Tóquio no número de motos." << endl;

    return 0;
}
