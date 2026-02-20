#include <iostream>
#include <string>

using namespace std;

int main() {
    const float limiteCompras = 500.0;
    const float bonusMenor500 = 0.1;
    const float bonusMaior500 = 0.15;
    const int numClientes = 150;

    string nome, endereco;
    float valorCompras, bonus;

    for (int i = 1; i <= numClientes; ++i) {
        cout << "Cliente " << i << endl;
        cout << "Nome: ";
        getline(cin, nome);

        cout << "Endereço: ";
        getline(cin, endereco);

        cout << "Valor das compras: R$ ";
        cin >> valorCompras;

        if (valorCompras < limiteCompras) {
            bonus = valorCompras * bonusMenor500;
        } else {
            bonus = valorCompras * bonusMaior500;
        }

        cin.ignore();

        cout << endl;
        cout << "Dados do cliente:" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Endereço: " << endereco << endl;
        cout << "Valor das compras: R$ " << valorCompras << endl;
        cout << "Bônus: R$ " << bonus << endl;
    }

    return 0;
}
