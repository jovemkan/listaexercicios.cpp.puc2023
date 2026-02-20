#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	float s = 0, n = 37, d = 1;
	for (int i = 1; i<=37; i=i+1){
		s = s + (n*(n+1))/d;
		n = n - 1;
		d = d + 1;
	}
	cout<<s;
	
	return 0;
}

