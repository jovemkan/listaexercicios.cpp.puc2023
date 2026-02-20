#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	float s = 0, n = 1000, d = 1;
	int sinal = 1;
	for (int i = 1; i<=50; i=i+1){
		s = s + sinal*(n/d);
		n = n - 3;
		d = d + 1;
		sinal = sinal * (-1);
	}
	cout<<s;
	
	return 0;
}

