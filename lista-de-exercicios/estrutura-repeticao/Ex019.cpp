#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
    int dec, bin=0, pos=1, resto;
    
    cout<<"Digite um número na base 10: ";
    cin>>dec;
    
    if (dec < 0) {
        cout << "O número digitado não é válido."<<endl;
    }
    while (dec > 0) {
        resto = dec % 2;
        bin += resto * pos;
        dec /= 2;
        pos *= 10;
    }
    
    cout << "O número na base 2 é: " <<bin<<endl;
    
    return 0;
}
