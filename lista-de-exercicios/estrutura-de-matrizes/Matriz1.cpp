#include <iostream>

using namespace std;

int main(){

    int mat[3][3];
    int principal = 0, secundaria = 0;

    cout << "Digite os elementos da matriz!" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            cin>>mat[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        principal += mat[i][i];
    }
    for (int i = 0; i < 3; i++)
    {
        secundaria += mat[i][2-i];
    }
    
    if (principal == secundaria){
        cout<<"A soma das diagonais é igual!"<<endl;
    }
    else{
        cout<<"A soma das diagonais não é igual!"<<endl;
    }
    

    return 0;
}