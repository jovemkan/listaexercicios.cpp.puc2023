#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

	float s=0, num=1, den=1;
	int i, fatorial, sinal=1;
	while (den<=50){
		i=1; fatorial=1;
		
		while (i<=den){
		fatorial = fatorial * i;
		i++;
	}
	s = s + sinal * (fatorial/den);
	num = num + 1;
	den = den*2+1;
		
	}
	cout<<s<<endl;
	return 0;
}

