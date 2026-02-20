#include <iostream>
using namespace std;

int main() {
  int publico_total;
  double renda_popular, renda_geral, renda_arquibancada, renda_cadeiras, renda_total;

  
  cout << "Informe o público total do jogo: ";
  cin >> publico_total;

  renda_popular = 0.1 * publico_total * 1.0;
  renda_geral = 0.5 * publico_total * 5.0;
  renda_arquibancada = 0.3 * publico_total * 10.0;
  renda_cadeiras = 0.1 * publico_total * 20.0;

  
  renda_total = renda_popular + renda_geral + renda_arquibancada + renda_cadeiras;

  cout << "Renda total do jogo: R$ " << renda_total << endl;

  return 0;
}

