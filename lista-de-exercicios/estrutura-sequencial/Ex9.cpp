#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main(){
	string cod1, cod2;
	double valor1, valor2, valorT, ipi;
	int quant1, quant2;
	
	cout<<"Digite a porcentagem do IPI"<<endl;
	cin>>ipi;
	
	cout<<"Digite o código da peça:"<<endl;
	cin>>cod1;
	
	cout<<"Digite o valor da peça:"<<endl;
	cin>>valor1;
	
	cout<<"Digite a quantidade de peças:"<<endl;
	cin>>quant1;
	
	cout<<"Digite o código da peça:"<<endl;
	cin>>cod2;
	
	cout<<"Digite o valor da peça:"<<endl;
	cin>>valor2;
	
	cout<<"Digite a quantidade de peças:"<<endl;
	cin>>quant2;
	
	valorT = (valor1*quant1 + valor2*quant2)*((ipi/100)+1);
	
	cout<<fixed<<setprecision(2);
	cout<<"O valor total a ser pago é de: R$"<<valorT<<endl;
	
    return 0;
}
