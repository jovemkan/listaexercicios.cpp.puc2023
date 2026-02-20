#include <iostream>

using namespace std;

int main()
{
    int idade;
    
    cout << "Digite a idade da pessoa: ";
    cin >> idade;
    
    if (idade < 16)
    {
        cout << "Não-eleitor\n";
    }
    else if (idade >= 18 && idade <= 65)
    {
        cout << "Eleitor Obrigatório\n";
    }
    else
    {
        cout << "Eleitor facultativo\n";
    }
    
    return 0;
}

