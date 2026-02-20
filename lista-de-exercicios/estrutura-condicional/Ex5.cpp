#include <iostream>
#include<math.h>
#include<string.h>

using namespace std;

int main(){

int numero, n1, n2, n3, n4, aux, primeira, segunda, soma, calculo;

cout<< ("%d",&numero);

n1 = numero / 1000;
aux = numero % 1000;
n2 = aux / 100;
aux = aux % 100;
n3 = aux / 10;
n4 = aux % 10;

primeira = (n1 * 10 ) + n2;
segunda = (n3 * 10 ) + n4;
soma = primeira + segunda;
calculo = pow(soma,2);

if (calculo == numero){
cout<<("O NUMERO POSSUI TAL CARACTERISTICA\n");
}

else {
cout<<("O NUMERO NAO POSSUI TAL CARACTERISTICA\n");
}

return 0;
}
