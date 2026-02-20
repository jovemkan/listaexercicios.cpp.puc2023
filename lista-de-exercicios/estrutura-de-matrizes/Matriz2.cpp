#include <iostream>

using namespace std;

int main(){

    int matA[3][2];
    int matAt[2][3];

    cout << "Digite os elementos da matriz A!" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>matA[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matAt[i][j] = matA[j][i];
        }
    }
    cout << "A matriz transposta de A é:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matAt[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}