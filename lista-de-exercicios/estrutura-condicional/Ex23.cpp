#include <iostream>
using namespace std;

int main() {
    int placa;
    cout << "Digite o número final da placa do veículo: ";
    cin >> placa;
    switch(placa) {
        case 1:
            cout << "O emplacamento deve ser renovado em janeiro." << endl;
            break;
        case 2:
            cout << "O emplacamento deve ser renovado em fevereiro." << endl;
            break;
        case 3:
            cout << "O emplacamento deve ser renovado em março." << endl;
            break;
        case 4:
            cout << "O emplacamento deve ser renovado em abril." << endl;
            break;
        case 5:
            cout << "O emplacamento deve ser renovado em maio." << endl;
            break;
        case 6:
            cout << "O emplacamento deve ser renovado em junho." << endl;
            break;
        case 7:
            cout << "O emplacamento deve ser renovado em julho." << endl;
            break;
        case 8:
            cout << "O emplacamento deve ser renovado em agosto." << endl;
            break;
        case 9:
            cout << "O emplacamento deve ser renovado em setembro." << endl;
            break;
        case 0:
            cout << "O emplacamento deve ser renovado em outubro." << endl;
            break;
        default:
            cout << "Número de placa inválido." << endl;
    }
    return 0;
}

