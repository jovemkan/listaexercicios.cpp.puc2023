#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

	float custofinal, custofab, pDist = 0.12, pImp = 0.30;
	
	cout<<"Digite o custo de fábrica do carro:"<<endl;
	cin>>custofab;
	
	custofinal = custofab*(1+pDist)*(1+pImp);
	
	cout<<fixed<<setprecision(2);	
	cout<<"O preço a ser cobrado do consumidor será de R$"<<custofinal<<endl;

	return 0;
}
