#include <iostream>

using namespace std;

int main(){
	
	const int conj = 50;
	int elem[conj], aux = conj;
	
	for(int i = 0; i<conj; i++){
		cout<<"Digite o número["<<i<<"]:";
		cin>>elem[i];
}
	for (int i=0; i<conj; i++){
		aux--;
		cout<<"Número["<<aux<<"]:"<<elem[aux]<<endl;
}
	
	return 0;
}
