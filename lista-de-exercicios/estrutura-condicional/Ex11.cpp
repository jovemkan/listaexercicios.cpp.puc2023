#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int opcao;
    float raio, altura, area, volume;

    cout << "Escolha a opcao desejada:\n";
    cout << "1 - Cone\n";
    cout << "2 - Cilindro\n";
    cout << "3 - Esfera\n";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Digite o raio e a altura do cone: ";
            cin >> raio >> altura;
            volume = (M_PI * pow(raio, 2) * altura) / 3;
            area = M_PI * raio * (raio + sqrt(pow(altura, 2) + pow(raio, 2)));
            break;
        case 2:
            cout << "Digite o raio e a altura do cilindro: ";
            cin >> raio >> altura;
            volume = M_PI * pow(raio, 2) * altura;
            area = 2 * M_PI * raio * altura + 2 * M_PI * pow(raio, 2);
            break;
        case 3:
            cout << "Digite o raio da esfera: ";
            cin >> raio;
            volume = (4.0 / 3) * M_PI * pow(raio, 3);
            area = 4 * M_PI * pow(raio, 2);
            break;
        default:
            cout << "Opcao invalida!\n";
            return 1;
    }

    cout << "Volume: " << volume << endl;
    cout << "Area: " << area << endl;

    return 0;
}

