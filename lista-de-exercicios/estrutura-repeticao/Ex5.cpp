#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	float s = 0, n = 1, d = 1;
	int sinal = 1;
	for (int i = 1; i<=50; i=i+1){
		s = s + sinal * ( n / (pow d, 3) ) ;
		n = 1;
		d = d + 3;
		sinal = sinal * (-1);
	}
	cout<<s;
	
	return 0;
}

