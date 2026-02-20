#include <iostream>
#include <string.h>
using namespace std;

int main(){
	float x, a, m, d, dhj, dhm, dha, i, y;
	
	cout<<"Dia do seu nascimento";
	cin>>d;
	cout<<"Mes do seu nascimento";
	cin>>m;
	cout<<"Ano do seu nascimento";
	cin>>a;
	cout<<" Dia de Hoje";
	cin>>dhj;
	cout<<"Data de hoje, Mes";
	cin>>dhm;
	cout<<"Qual o ano ?";
	cin>>dha;
	
	x = (a*365)+(m*30)+d;
	y = (dha*365)+(dhm*30)+dhj;
	i = y-x;
	cout<<endl<<"Dias de vida"<< i;
	return 0;
	
}
