#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	float F, C;
	float P, mm;
	
	cout<<"Digite a temperatura em Fahrenheit: "<<endl;
	cin>>F;
	cout<<"Digite a quantidade de chuva em polegadas: "<<endl;
	cin>>P;
	
	C = (F-32)*5/9;
	mm = (P * 25.4);

	
	cout<<"A temperatura é de "<<C<<"ºC"<<endl;
	cout<<"A quantidade de chuva em milimetros é de "<<mm<<endl;

	return 0;
}
