#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	float custoAluminio = 100.00, pi = 3.1415;
	float raio, altura, arealata, areabase;
	float arealateral, custolata;
	
	cout<<"Digite o raio da lata em metros: "<<endl;
	cin>>raio;
	cout<<"Digite a altura da lata em metros: "<<endl;
	cin>>altura;
	
	areabase = pi * (raio*raio) * 2;
	arealateral = 2 * pi*raio*altura;
	arealata = areabase + arealateral;
	custolata = arealata * custoAluminio;
	
	cout<<"O custo de fabricação da lata é R$ "<<custolata<<endl;
	
	return 0;
}

