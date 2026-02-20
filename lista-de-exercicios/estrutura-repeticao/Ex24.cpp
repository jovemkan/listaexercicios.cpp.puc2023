#include <iostream>

using namespace std;

int main() {
    int total;
    
    cout << "Digite o número total de bois: ";
    cin >> total;
    
    int num, peso;
    int boigordo, boimagro;
    int pesogordo = 0, pesomagro = 0;
    
    for (int i = 1; i <= total; i++) {
        cout << "Digite o número de identificação do boi " << i << ": ";
        cin >> num;
        
        cout << "Digite o peso do boi " << i << ": ";
        cin >> peso;
        
        if (i == 1) {
            boigordo = num;
            boimagro = num;
            pesogordo = peso;
            pesomagro = peso;
        } else {
            if (peso > pesogordo) {
                boigordo = num;
                pesogordo = peso;
            }
            
            if (peso < pesomagro) {
                boimagro = num;
                pesomagro = peso;
            }
        }
    }
    
    cout << "Boi mais gordo: " << boigordo << ", Peso: " << pesogordo << endl;
    cout << "Boi mais magro: " << boimagro << ", Peso: " << pesomagro << endl;

    return 0;
}
