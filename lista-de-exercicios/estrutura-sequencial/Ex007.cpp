#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int ano, mes, dia, dias;
     
    cout<<"Escreva a idade em anos:"<<endl;
    cin>>ano;
    
    cout<<"Escreva a idade em meses:"<<endl;
    cin>>mes;
    
    cout<<"Escreva a idade em dias:"<<endl;
    cin>>dia;
    
    dias = (ano*365)+(mes*12)+(dia*30)
    
    cout<<"A idade apenas em dias é de: "<<dias<<endl;
    
    return 0;
}
