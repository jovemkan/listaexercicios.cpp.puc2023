#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	float s = 0, n = 1, d = 225, sub = 29;
	int sinal = 1;
	
	for (int i = 1; i<=29; i=i+1){
		s = s + sinal * (n/(d-sub));
		n = n * 2;
		d = d + 3;
		sub = sub - 2;
		sinal = sinal * (-1);
	}
	cout<<s;
	
	return 0;
}
