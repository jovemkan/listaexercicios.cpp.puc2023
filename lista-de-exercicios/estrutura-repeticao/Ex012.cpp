#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float i, raio=0, volume, pi = 3.14159;
    
    while (i<=20){
		i=i+1;
		raio = raio + 0.5;
		volume = (4/3)*pi*pow(raio,3);
        cout<<"O volume é de: "<<volume<<endl;
	}
    
    return 0;
}
