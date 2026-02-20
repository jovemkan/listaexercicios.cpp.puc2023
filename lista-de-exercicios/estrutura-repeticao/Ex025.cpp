#include <iostream>

using namespace std;

int main() {
    const float precoInicial = 6.0;
    const float decpreco = 0.60;
    const int incIng = 30;
    const int ingTotal = 130;
    const float despesas = 300.0;

    float preco = precoInicial;
    int ingVendidos = ingTotal;
    float lucroMax = 0.0;
    float precoLucroMaximo = 0.0;
    int ingressosLucroMaximo = 0;

    cout << "Tabela de Lucro Esperado:" << endl;
    cout << "Preço do Ingresso | Ingressos Vendidos | Lucro Esperado" << endl;

    while (preco >= 1.0) {
        float lucro = (preco * ingVendidos) - despesas;
        cout << "R$ " << preco << "           | " << ingVendidos << "                 | R$ " << lucro << endl;

        if (lucro > lucroMax) {
            lucroMax = lucro;
            precoLucroMaximo = preco;
            ingressosLucroMaximo = ingVendidos;
        }

        preco -= decpreco;
        ingVendidos += incIng;
    }

    cout << endl;
    cout << "Lucro Máximo Esperado:" << endl;
    cout << "Preço do Ingresso: R$ " << precoLucroMaximo << endl;
    cout << "Ingressos Vendidos: " << ingressosLucroMaximo << endl;
    cout << "Lucro Esperado: R$ " << lucroMax << endl;

    return 0;
}
