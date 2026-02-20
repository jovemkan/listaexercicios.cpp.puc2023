#include <iostream>
#include <string>

using namespace std;

int main() {
    int countRio = 0, countBeloHorizonte = 0, countSaoPaulo = 0;
    string cidade;

    while (true) {
        cout << "Digite a sigla da cidade (ou 'fim' pra encerrar): ";
        cin >> cidade;

        if (cidade == "fim") {
            break;
        } else if (cidade == "RJ") {
            countRio++;
        } else if (cidade == "BH") {
            countBeloHorizonte++;
        } else if (cidade == "SP") {
            countSaoPaulo++;
        }
    }

    cout << "Cidades do Rio de Janeiro: " << countRio << endl;
    cout << "Cidades de Belo Horizonte: " << countBeloHorizonte << endl;
    cout << "Cidades de São Paulo: " << countSaoPaulo << endl;

    return 0;
}
