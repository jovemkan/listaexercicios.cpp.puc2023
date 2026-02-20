#include <iostream>
#include <string>

using namespace std;

int main() {
  int conta;
  cout << "Digite o número da conta corrente com três dígitos: ";
  cin >> conta;

  int inverso = 0;
  int temp = conta;
  while (temp > 0) {
    inverso = inverso * 10 + temp % 10;
    temp /= 10;
  }

  int soma = conta + inverso;


  int digito_verificador = 0;
  int posicao = 1;
  while (soma > 0) {
    int digito = soma % 10;
    digito_verificador += digito * posicao;
    posicao++;
    soma /= 10;
  }

  digito_verificador %= 10;

  cout << "O dígito verificador da conta " << conta << " é " << digito_verificador << endl;

  return 0;
}

