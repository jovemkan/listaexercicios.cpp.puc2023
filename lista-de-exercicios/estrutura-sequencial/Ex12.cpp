#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	int imp;
	float farKg, farVal, h2oL, h2oV, kwtH, kwtV, custototal, valorfinal;
	
	cout<<"Digite a quantidade de farinha em quilos:"<<endl;
	cin>>farKg;
	
	cout<<"Digite o valor do quilo da farinha:"<<endl;
	cin>>farVal;
	
	cout<<"Digite a quantidade de água em litro:"<<endl;
	cin>>h2oL;
	
	cout<<"Digite o valor do litro da água:"<<endl;
	cin>>h2oV;
	
	cout<<"Digite a quantidade de quilowatts usados por hora:"<<endl;
	cin>>kwtH;
	
	cout<<"Digite o valor do quilowatt por hora:"<<endl;
	cin>>kwtV;
	
	cout<<"Digite o percentual de imposto"<<endl;
	cin>>imp;
	
	custototal = ((farKg*farVal)+(h2oL*h2oV)+(kwtH*kwtV)*((imp/100)+1));
	valorfinal = (custototal * 1.3);
	
	cout<<fixed<<setprecision(2);
	cout<<"O valor de custo é de R$ "<<custototal<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"O valor a ser cobrado é de R$ "<<valorfinal<<endl;
	
	return 0;
}
