#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int a, b, c;

    cout<<("Digite tres valores: ");
    cin>>a>>b>>c;

    if(a + b > c && a + c > b && b + c > a){
        cout<<("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            cout<<("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                cout<<("Isosceles\n");
            else
                cout<<("Escaleno\n");
    }
    else
        cout<<("Os 3 lados NAO formam um trinagulo!\n");
}

