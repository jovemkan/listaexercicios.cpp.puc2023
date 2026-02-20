#include <iostream>
using namespace std;

int main()
{
    int aux, num, div=0;
    cout<<"Digite um número"<<endl;
    cin>>num;

    for(aux=1 ; aux<=num ; aux++)
        if(num%aux==0)
            div++;

    if(div==2)
        cout<<"É um número primo"<<endl;
    else
        cout<<"Não é um número primo"<<endl;
    return 0;
}
