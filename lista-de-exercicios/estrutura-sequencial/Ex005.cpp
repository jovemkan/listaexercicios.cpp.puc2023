#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	float b, h, V;
	
	cout<<"Digite a base de uma pirâmide:"<<endl;
	cin>>b;
	cout<<"Digite a altura dessa pirâmide:"<<endl;
	cin>>h;
	
	V = ((b*h)/3);
	
	cout<<"O volume da pirâmide é de "<<V<<endl;
	
	return 0;
}
