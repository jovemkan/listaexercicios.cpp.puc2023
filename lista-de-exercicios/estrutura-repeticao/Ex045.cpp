#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 112; i++) {
        double conteudoCarbono, durezaRockwell, resistenciaTracao;
        int grau;

        cout << "Amostra " << i << ":" << endl;
        cout << "Digite o conteúdo de carbono (%): ";
        cin >> conteudoCarbono;
        cout << "Digite a dureza de Rockwell: ";
        cin >> durezaRockwell;
        cout << "Digite a resistência à tração (psi): ";
        cin >> resistenciaTracao;

        if (conteudoCarbono < 7 && durezaRockwell > 50 && resistenciaTracao > 80000)
            grau = 10;
        else if (conteudoCarbono < 7 && durezaRockwell > 50)
            grau = 9;
        else if (conteudoCarbono < 7)
            grau = 8;
        else
            grau = 7;

        cout << "Grau obtido para a amostra " << i << ": " << grau << endl;
    }

    return 0;
}
