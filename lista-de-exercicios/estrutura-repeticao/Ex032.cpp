#include <iostream>

using namespace std;

int calcularPontos(float tempoPadrao, float tempoEquipe) {
    float diferencaTempo = tempoEquipe - tempoPadrao;
    int pontos = 0;

    if (diferencaTempo < 3)
        pontos = 100;
    else if (diferencaTempo >= 3 && diferencaTempo <= 5)
        pontos = 80;

    return pontos;
}

int main() {
    float tempoPadrao1, tempoPadrao2, tempoPadrao3;
cin >> tempoPadrao1 >> tempoPadrao2 >> tempoPadrao3;

    int numeroInscricao, pontosEtapa1, pontosEtapa2, pontosEtapa3, totalPontos;

    while (cin >> numeroInscricao) {
        if (numeroInscricao == 9999) {
            break;
        }

        float tempoEquipe1, tempoEquipe2, tempoEquipe3;
        cin >> tempoEquipe1 >> tempoEquipe2 >> tempoEquipe3;

        pontosEtapa1 = calcularPontos(tempoPadrao1, tempoEquipe1);
        pontosEtapa2 = calcularPontos(tempoPadrao2, tempoEquipe2);
        pontosEtapa3 = calcularPontos(tempoPadrao3, tempoEquipe3);

        totalPontos = pontosEtapa1 + pontosEtapa2 + pontosEtapa3;

        cout << "Número de inscrição: " << numeroInscricao << endl;
        cout << "Pontos etapa 1: " << pontosEtapa1 << endl;
        cout << "Pontos etapa 2: " << pontosEtapa2 << endl;
        cout << "Pontos etapa 3: " << pontosEtapa3 << endl;
        cout << "Total de pontos: " << totalPontos << endl;
    }

    return 0;
}
