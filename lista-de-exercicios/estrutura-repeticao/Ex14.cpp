#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	int i, n, aux;
	cout<<"Digite um número:"<<endl;
	cin>>n;
	
	i=1;
	aux=0;
	
	while (aux<n){
		aux = i*(i+1)*(i+2);
		i=i+1;

		if(aux==n){
			cout<<"Número Triangular!"<<endl;
			}
			else{
				cout<<"Não é um número triangular!"<<endl;
				}
		}
	
	return 0;
}
