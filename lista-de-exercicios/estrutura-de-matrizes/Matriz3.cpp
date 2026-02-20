#include <iostream>

using namespace std;

int main(){

    int mat1[3][3];
    int mat2[3][3];
    int soma[3][3];
    
    cout << "Digite os elementos da matriz 1!" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Digite os elementos da matriz 2!" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout<<endl;
    cout<<"A soma das matrizes acima é:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << soma[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}