#include <iostream>
using namespace std;

int main() {
   int n, soma = 0;
   
   cout<<"Digite um numero:";
   cin>>n;
   
   for (int i = 1; i <= n; i++) {
      soma += i;
   }
   
   cout << "O somatorio de 1 a " << n << " e de: " << soma << endl;
   
   return 0;
}