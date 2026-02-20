#include <iostream>
using namespace std;

int main() {
  float nota1, nota2, nota3, media;

  cout << "Digite a primeira nota: ";
  cin >> nota1;

  cout << "Digite a segunda nota: ";
  cin >> nota2;

  cout << "Digite a terceira nota: ";
  cin >> nota3;

  media = (2*nota1 + 3*nota2 + 5*nota3) / 10;

  cout << "A media final do aluno e: " << media << endl;

  return 0;
}

