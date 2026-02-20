#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int grao=1, i=1;
    
    while (i<=63){
		i=i+1;
		grao=grao + (grao*2);
	}
	cout<<grao<<endl;
    
    return 0;
}
