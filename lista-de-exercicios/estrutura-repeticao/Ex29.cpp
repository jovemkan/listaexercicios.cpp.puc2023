#include <iostream>

using namespace std;

int main() {
    int nascidas;
    cout << "Digite o número de crianças nascidas no período: ";
    cin >> nascidas;

    char sexo;
    int mesesVida;
    int mortes = 0;
    int mortesmasc = 0;
    int 24mesesoumenos = 0;

    while (true) {
        cout << "Digite o sexo da criança morta (M para masculino, F para feminino): ";
        cin >> sexo;

        if (sexo == 'V' || sexo == 'v') {
            break;
        }

        cout << "Digite o número de meses de vida da criança: ";
        cin >> mesesVida;

        mortes++;

        if (sexo == 'M' || sexo == 'm') {
            mortesmasc++;
        }

        if (mesesVida <= 24) {
            24mesesoumenos++;
        }
    }

    float p100mortas = (mortes * 100.0) / nascidas;
    float p100mortosmasc = (mortesmasc * 100.0) / nascidas;
    float p100crianca24mes = (24mesesoumenos * 100.0) / nascidas;

    cout << "Porcentagem de crianças mortas no período: " << p100mortas << "%" << endl;
    cout << "Porcentagem de crianças do sexo masculino mortas no período: " << p100mortosmasc << "%" << endl;
    cout << "Porcentagem de crianças que viveram 24 meses ou menos no período: " << p100crianca24mes << "%" << endl;

    return 0;
}
