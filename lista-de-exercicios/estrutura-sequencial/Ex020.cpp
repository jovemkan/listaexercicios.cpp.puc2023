#include <iostream>
using namespace std;

int main() {
    float tempo_viagem, velocidade_media, distancia, quantidade_litros, valor_gasolina, valor_total;

    
    cout << "Digite o tempo de viagem (em horas): ";
    cin >> tempo_viagem;
    cout << "Digite a velocidade media (em km/h): ";
    cin >> velocidade_media;
    cout << "Digite o valor do litro de gasolina: ";
    cin >> valor_gasolina;


    distancia = tempo_viagem * velocidade_media;
    quantidade_litros = distancia / 12;

    valor_total = quantidade_litros * valor_gasolina;

  
    cout << "A quantidade de dinheiro a ser gasto na viagem sera de R$ " << valor_total << endl;

    return 0;
}

