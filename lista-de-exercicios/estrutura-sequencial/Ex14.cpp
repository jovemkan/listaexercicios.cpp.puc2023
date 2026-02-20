#include <iostream>
using namespace std;

int main() {
  double potencia, tempo, valor_kwh, energia_total, valor_pago;

  cout << "Informe a taxa de potência do refrigerador (em watts): ";
  cin >> potencia;

  
  cout << "Informe o tempo que o refrigerador permaneceu ligado (em horas): ";
  cin >> tempo;

 
  cout << "Informe o valor do quilowatt hora: ";
  cin >> valor_kwh;

 
  energia_total = potencia * tempo;

  
  valor_pago = energia_total * valor_kwh;

  cout << "Energia total gasta pelo refrigerador: " << energia_total << " watt-hora" << endl;
  cout << "Valor a ser pago à companhia de Energia Elétrica: R$ " << valor_pago << endl;

  return 0;
}

