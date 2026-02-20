#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int i, n, fatorial, sinal=1, pot=2, soma=1, valor;
    float den=2, num;

    cout<<"Digite um número:"<<endl;
    cin>>n;

    while (den<=20){
        i = 1;
        fatorial = 1;

    while (i<=den){
		fatorial = fatorial * i;
		i++;
	}
    soma = soma + sinal *(num/fatorial);
    den = den + 2;
    num = pow (num, (pot+2));

    }
    
    valor = soma - cos(soma);
    cout<<"O valor calculado nos itens A e B da questão 8 é de: "<<valor<<endl;
    
    return 0;
}