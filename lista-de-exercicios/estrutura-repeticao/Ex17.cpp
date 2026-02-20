#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

	int n1, n2, i=0, r;
	cout<<"Escreva dois numeros para dividir: "<<endl;
	cin>>n1;
	cin>>n2;
	r=n1;
	
	while(r>0){
	r = r - n2;
	i=i+1;
	}
	cout<<"O quociente é "<<i<<endl;
	cout<<"O resto é "<<r<<endl;

	
	
	return 0;
}
