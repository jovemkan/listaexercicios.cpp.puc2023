#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string nome;
    int tipo_pulverizacao;
    float area, valor_pulverizacao, valor_desconto, valor_final;

    cout << "Digite o nome do fazendeiro: ";
    getline(cin, nome);

    cout << "Digite o tipo de pulverizacao (1 a 4): ";
    cin >> tipo_pulverizacao;

    cout << "Digite a area a ser pulverizada (em acres): ";
    cin >> area;

    switch(tipo_pulverizacao)
    {
        case 1:
            valor_pulverizacao = area * 5;
            break;
        case 2:
            valor_pulverizacao = area * 10;
            break;
        case 3:
            valor_pulverizacao = area * 15;
            break;
        case 4:
            valor_pulverizacao = area * 25;
            break;
        default:
            cout << "Tipo de pulverizacao invalido!" << endl;
            return 0;
    }

    if(area > 300)
    {
        valor_desconto = valor_pulverizacao * 0.05;
        valor_pulverizacao -= valor_desconto;
    }

    if(valor_pulverizacao > 1750)
    {
        valor_desconto = (valor_pulverizacao - 1750) * 0.1;
        valor_pulverizacao -= valor_desconto;
    }

    cout << fixed << setprecision(2);
    cout << "Fazendeiro: " << nome << endl;
    cout << "Valor a ser pago: R$ " << valor_pulverizacao << endl;

    return 0;
}

