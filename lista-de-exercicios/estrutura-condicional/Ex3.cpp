#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, delta,
          r1, r2;

    cout << "Coeficiente a: ";
    cin >> a;

    cout << "Coeficiente b: ";
    cin >> b;

    cout << "Coeficiente c: ";
    cin >> c;

    if(a != 0){
        delta = (b*b) - (4*a*c);

        if(delta<0){
            cout <<"Não tem raízes reais\n";
        }
        else if (delta==0){
            r1=(-b)/(2*a);
            cout << "Possui apenas uma raiz real: "<<r1<<endl;
        }else{
            r1=(-b - sqrt(delta))/(2*a);
            r2=(-b + sqrt(delta))/(2*a);
            cout << "Raiz 1: "<<r1<<endl;
            cout << "Raiz 2: "<<r2<<endl;
        }
    }else{
        cout <<"a=0, não é uma equação do segundo grau\n";
    }

}

