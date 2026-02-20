#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num1, num2, i=1, r=0;
    cout<<"Digite dois números para serem multiplicados:";
    cin>>num1;
    cin>>num2;
    
    while (i<=num1){
		i=i+1;
		r += num2;
		}
		
		cout<<num1<<" x "<<num2<<" = "<<r;
    
    return 0;
}

