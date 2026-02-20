#include <iostream>

using namespace std;

int main() {
    while (true) {
        double a, b, c, d, u, v;

        cout << "Digite os parâmetros a, b, c, d, u, v do sistema (ou digite 0 para encerrar): ";
        cin>>a>>b>>c>>d>>u>>v;

        if (a == 0 && b == 0 && c == 0 && d == 0) {
            break;
        }

        double x = (d*a*d-b*c*u-b*a*d-b*c*v) / (a*d-b*c);
        double y = (-c*a*d-b*c*u+a*a*d-b*c*v) / (a*d-b*c);

        cout<<"Parâmetros: a = "<<a<<", b = "<<b<<", c = "<<c<<", d = "<<d<<", u = "<<u<<", v = "<<v<<endl;
        cout<<"Solução: x = "<<x<<", y = "<<y<<endl;
        cout<<endl;
    }

    return 0;
}
