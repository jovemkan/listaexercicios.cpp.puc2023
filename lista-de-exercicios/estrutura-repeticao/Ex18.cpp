#include <iostream>

using namespace std;

int main(){
	int a, b, mmc=1, i=2;
	cout<<"Digite dois números para calcular o mmc:";
	cin>>a>>b;
	while(a>1 || b>1){
		if(a%i==0 || b%i==0)
			mmc = mmc*i;
		if(a%i==0){
			a=a/i;}
			if(b%i==0){
			b=b/i;}
			if(a%i!=0 && b%i!=0)
			i++;
		}
		cout<<mmc<<endl;
	
	return 0;
}
