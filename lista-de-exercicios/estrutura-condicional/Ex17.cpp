#include <iostream>
using namespace std;

int main() {
  double altura, pesoIdeal;
  char sexo;

  cout << "Digite sua altura em metros: ";
  cin >> altura;
  cout << "Digite seu sexo (M/F): ";
  cin >> sexo;

  if (sexo == 'M') {
    pesoIdeal = 72.7 * altura - 58;
  } else if (sexo == 'F') {
    pesoIdeal = 62.1 * altura - 44.7;
  } else {
    cout << "Sexo inválido!\n";
    return 0;
  }

  cout << "Seu peso ideal é: " << pesoIdeal << " kg\n";

  return 0;
}

