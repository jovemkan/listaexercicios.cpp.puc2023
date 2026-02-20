#include <iostream>

using namespace std;

int main() {
    char candidato;
    int idade;
    char sexo;
    int votosA=0, votosB=0, votosC=0;
    int totalEleitores=0;
    int idadeTotalVotosA=0, idadeTotalVotosB=0, idadeTotalVotosC=0;
    int eleitoresHomensA=0, eleitoresHomensB=0, eleitoresHomensC=0;

    while (true) {
        cout << "Digite o candidato escolhido (A, B ou C) ou 'F' para finalizar: ";
        cin >> candidato;

        if (candidato == 'F' || candidato == 'f') {
            break;
        }

        cout << "Digite a idade do eleitor(a): ";
        cin >> idade;

        cout << "Digite o sexo do eleitor(a) (M/F): ";
        cin >> sexo;

        totalEleitores++;

        if (candidato == 'A' || candidato == 'a') {
            votosA++;
            idadeTotalVotosA += idade;

            if (sexo == 'M' || sexo == 'm') {
                eleitoresHomensA++;
            }
        } else if (candidato == 'B' || candidato == 'b') {
            votosB++;
            idadeTotalVotosB += idade;

            if (sexo == 'M' || sexo == 'm') {
                eleitoresHomensB++;
            }
        } else if (candidato == 'C' || candidato == 'c') {
            votosC++;
            idadeTotalVotosC += idade;

            if (sexo == 'M' || sexo == 'm') {
                eleitoresHomensC++;
            }
        }
    }

    char candidatoMaisVotado;
    int votosMaisVotado = votosA;
    int idadeMediaMaisVotado = 0;
    int eleitoresHomensMaisVotado = eleitoresHomensA;

    if (votosB > votosMaisVotado) {
        votosMaisVotado = votosB;
        candidatoMaisVotado = 'B';
        idadeMediaMaisVotado = idadeTotalVotosB / votosB;
        eleitoresHomensMaisVotado = eleitoresHomensB;
    }

    if (votosC > votosMaisVotado) {
        votosMaisVotado = votosC;
        candidatoMaisVotado = 'C';
        idadeMediaMaisVotado = idadeTotalVotosC / votosC;
        eleitoresHomensMaisVotado = eleitoresHomensC;
    }

    float percentHomensMaisVotado = (float(eleitoresHomensMaisVotado) / votosMaisVotado) * 100.0;

    cout << "Candidato mais votado: " << candidatoMaisVotado << endl;
    cout << "Média de idade entre os eleitores do candidato mais votado: " << idadeMediaMaisVotado << endl;
    cout << "Candidato preferido dos homens: " << candidatoMaisVotado << endl;

    return 0;
}
