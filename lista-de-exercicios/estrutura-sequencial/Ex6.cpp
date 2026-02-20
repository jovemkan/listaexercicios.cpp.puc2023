#include <iostream>
using namespace std;

int main() {
   float horasuso, valortotal;
   int horasadicionais;

   cout << "Informe a quantidade de horas que a charrete foi usada: ";
   cin >> horasuso;

   if (horasuso >= 3) {
      horasadicionais = horasuso - 3;
      valortotal = 8.50 + horasadicionais * 3.50;
   }
   else {
      valortotal = horasuso * 3.50;
   }

   cout << "O valor total a ser pago e R$ " << valortotal << endl;

   return 0;
}

