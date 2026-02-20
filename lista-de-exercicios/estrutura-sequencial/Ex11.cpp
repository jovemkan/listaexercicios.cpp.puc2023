#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	float diaria, prom, mediasprom, mediacprom, lucropreju;
	
	cout<<"Digite o valor da diária normal do hotel:"<<endl;
	cin>>diaria;
	
	prom = (diaria * 0.22);
	mediasprom = (diaria * 30);
	mediacprom = ((prom * 30)*1.7);
	lucropreju = (mediacprom - mediasprom);
	
	cout<<fixed<<setprecision(2);
	cout<<"O valor da diária em mês de promoção é de: R$ "<<prom<<endl;
	
	cout<<"O valor médio do hotel em mês sem promoção é de R$ "<<mediasprom<<endl;
	cout<<"O valor médio do hotel em mês com promoção é de R$ "<<mediacprom<<endl;
	
		if (lucropreju > 0){
		cout<<fixed<<setprecision(2);
		cout<<"O lucro foi de R$ "<<lucropreju<<endl;
	}
		else{
			 cout<<fixed<<setprecision(2);
			 cout<<"O prejuízo foi de R$ "<<lucropreju<<endl;
		 }
	
	return 0;
}
