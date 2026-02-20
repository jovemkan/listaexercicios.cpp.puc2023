#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d;
    
    cout << "Digite as quatro notas separadas por espaço: ";
    cin >> a >> b >> c >> d;
    
   
    double media_aritmetica = (a + b + c + d) / 4.0;
    
  
    double media_harmonica = 4.0 / (1.0/a + 1.0/b + 1.0/c + 1.0/d);
    

    double media_geometrica = pow(a * b * c * d, 1.0/4.0);
    

    double media_quadratica = sqrt((a*a + b*b + c*c + d*d) / 4.0);
    
   
    cout << "Média aritmética: " << media_aritmetica << endl;
    cout << "Média harmônica: " << media_harmonica << endl;
    cout << "Média geométrica: " << media_geometrica << endl;
    cout << "Média quadrática: " << media_quadratica << endl;
    
    return 0;
}

