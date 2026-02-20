#include <iostream>

using namespace std;

int main() {
    int anoNasc;
    char sexo;
    int registro;
    int totalMot = 0;
    int menor25 = 0;
    int mulheres = 0;
    int registroForaSP = 0;

    while (true) {
        cout << "Digite o ano de nascimento do motorista (0 para encerrar): ";
        cin >> anoNasc;

        if (anoNasc == 0) {
            break;
        }

        cout << "Digite o sexo do motorista (M/F): ";
        cin >> sexo;

        cout << "Digite o código de registro (1 para São Paulo, 0 para outros): ";
        cin >> registro;

        totalMot++;

        if (anoNasc > 0 && anoNasc >= 2004) {
            menor25++;
        }

        if (sexo == 'F' || sexo == 'f') {
            mulheres++;
        }

        if (registro == 0) {
            registroForaSP++;
        }
    }

    float percentMotoristasMenor25Anos = (float(menor25) / totalMot) * 100.0;
    float percentMulheres = (float(mulheres) / totalMot) * 100.0;
    float percentRegistroForaSP = (float(registroForaSP) / totalMot) * 100.0;

    cout << "Percentagem de motoristas com menos de 25 anos: " << percentMotoristasMenor25Anos << "%" << endl;
    cout << "Percentagem de mulheres: " << percentMulheres << "%" << endl;
    cout << "Percentagem de motoristas com registro fora de São Paulo: " << percentRegistroForaSP << "%" << endl;

    return 0;
}
