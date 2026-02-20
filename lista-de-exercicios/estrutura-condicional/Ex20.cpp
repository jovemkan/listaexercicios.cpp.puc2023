#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valor;
    char opcao;
    double cotacao;

    cout << "Digite o valor em reais: R$ ";
    cin >> valor;

    cout << "Escolha a moeda para conversão: " << endl;
    cout << "E - Euro" << endl;
    cout << "L - Libra Esterlina" << endl;
    cout << "D - Dólar" << endl;
    cout << "I - Iene" << endl;
    cout << "Opção: ";
    cin >> opcao;

    switch (opcao) {
        case 'E':
            cotacao = 2.617;
            cout << "Valor convertido em Euros: € " << fixed << setprecision(2) << valor/cotacao << endl;
            break;
        case 'L':
            cotacao = 3.816;
            cout << "Valor convertido em Libras Esterlinas: £ " << fixed << setprecision(2) << valor/cotacao << endl;
            break;
        case 'D':
            cotacao = 2.071;
            cout << "Valor convertido em Dólares: $ " << fixed << setprecision(2) << valor/cotacao << endl;
            break;
        case 'I':
            cotacao = 1.018;
            cout << "Valor convertido em Ienes: ¥ " << fixed << setprecision(2) << valor/cotacao << endl;
            break;
        default:
            cout << "Opção inválida." << endl;
    }

    return 0;
}

