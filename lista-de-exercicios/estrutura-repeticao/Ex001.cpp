#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	float s = 0, n = 1, d = 1;
	for (int i = 1; i<=50; i=i+1){
		s = s + n/d;
		n = n + 2;
		d = d + 1;
	}
	cout<<s;
	
	return 0;
}
