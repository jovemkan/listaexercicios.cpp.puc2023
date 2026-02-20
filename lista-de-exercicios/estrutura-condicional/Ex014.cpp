#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num_aluno;
    double nota1, nota2, nota3, media_exercicios, media_aproveitamento;
    char conceito;

    cout << "Digite o número do aluno: ";
    cin >> num_aluno;

    cout << "Digite a nota da primeira verificação: ";
    cin >> nota1;

    cout << "Digite a nota da segunda verificação: ";
    cin >> nota2;

    cout << "Digite a nota da terceira verificação: ";
    cin >> nota3;

    cout << "Digite a média dos exercícios: ";
    cin >> media_exercicios;

    media_aproveitamento = (nota1 + nota2*2 + nota3*3 + media_exercicios*7) / 13;

    if (media_aproveitamento >= 9.1) {
        conceito = 'A';
    } else if (media_aproveitamento >= 7.6) {
        conceito = 'B';
    } else if (media_aproveitamento >= 6.1) {
        conceito = 'C';
    } else if (media_aproveitamento >= 4.1) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    cout << fixed << setprecision(1);
    cout << "Número do aluno: " << num_aluno << endl;
    cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << endl;
    cout << "Média dos exercícios: " << media_exercicios << endl;
    cout << "Média de aproveitamento: " << media_aproveitamento << endl;
    cout << "Conceito: " << conceito << endl;

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        cout << "APROVADO" << endl;
    } else {
        cout << "REPROVADO" << endl;
    }

    return 0;
}

