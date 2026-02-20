#include <iostream>

using namespace std;

int main(){
	
	const int conj=3;
	int n[conj], x;
	
	for (int i = 1; i<=conj; i++){
		cout<<"Digite o número ("<<i<<" de 100):";
		cin>>n[i];
		}
		cout<<"Digite a variável x:";
		cin>>x;
		for (int i = 1; i<=conj; i++){
			if (x == n[i]){
				cout<<"A variável x aparece no conjunto!";
				}
		}
	
	return 0;
}
