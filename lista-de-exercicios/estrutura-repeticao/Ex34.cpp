#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int num;
    double valor;
    double salario;

    while (true) {
        cout << "Digite o nome do vendedor (ou 'x' para finalizar): ";
        cin >> nome;

        if (nome == "x") {
            break;
        }

        cout << "Digite o número de carros vendidos: ";
        cin >> num;

        cout << "Digite o valor de cada carro: ";
        cin >> valor;

        double comissaoCarros = 0;
        if (num <= 10) {
            comissaoCarros = num * 100.00;
        } else {
            comissaoCarros = num * 200.00;
        }

        double comissaototal = 0;
        if (valor > 50000.00) {
            comissaototal = valor * 0.01;
        }

        salario = 1500.00 + comissaoCarros + comissaototal;

        cout << "Salário do vendedor " << nome << ": R$" << salario << endl;

        while (cin.get() != '\n') {
            continue;
        }

        cout << endl;
    }

    return 0;
}
