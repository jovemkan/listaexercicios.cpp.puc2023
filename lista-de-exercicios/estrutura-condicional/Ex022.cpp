#include <iostream>
using namespace std;

int main() {
    int idade, peso, dosagem;
    double ml, gotas;

    cout << "Digite a idade do paciente: ";
    cin >> idade;

    cout << "Digite o peso do paciente em quilos: ";
    cin >> peso;

    if (idade >= 12) {
        if (peso >= 60) {
            dosagem = 1000;
        } else {
            dosagem = 875;
        }
    } else {
        if (peso <= 9) {
            dosagem = 125;
        } else if (peso <= 16) {
            dosagem = 250;
        } else if (peso <= 24) {
            dosagem = 375;
        } else if (peso <= 30) {
            dosagem = 500;
        } else {
            dosagem = 750;
        }
    }

    ml = dosagem / 500.0;
    gotas = ml * 20;

    cout << "O paciente deve tomar " << gotas << " gotas por dose.\n";

    return 0;
}

