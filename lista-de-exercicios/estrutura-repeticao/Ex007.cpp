#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

	float s=0, num=100, den=0;
	int i, fatorial;
	while (den<=19){
		i=1; fatorial=1;
		while (i<=den){
		fatorial = fatorial * i;
		i++;
	}
	s = s + (num/fatorial);
	num = num - 1;
	den = den + 1;
		
	}
	
	return 0;
}

