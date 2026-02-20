#include <iostream>
using namespace std;

int main() {
    double precoNormal, precoFinal;
    string categoria;
    int dia;

    cout << "Digite o preco normal da fita: ";
    cin >> precoNormal;

    cout << "Digite a categoria da fita (comum ou lancamento): ";
    cin >> categoria;

    cout << "Digite o dia da semana (1 a 7, onde 1 = domingo, 2 = segunda, ...): ";
    cin >> dia;


    if (dia == 2 || dia == 3 || dia == 5) {
        precoFinal = precoNormal * 0.6; 
    } else {
        precoFinal = precoNormal;
    }

    
    if (categoria == "lancamento") {
        precoFinal *= 1.15; 
    }

    cout << "O preco final da fita eh: " << precoFinal << endl;

    return 0;
}

