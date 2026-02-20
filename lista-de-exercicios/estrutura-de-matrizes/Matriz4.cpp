#include <iostream>

using namespace std;

int main(){

    int mat[3][3];

    cout << "Digite os elementos da matriz!"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j<3; j++){
            cin>>mat[i][j];
        }
    }

    bool id = true;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                if (mat[i][j] != 1) {
                    id = false;
                    break;
                }
            } else {
                if (mat[i][j] != 0) {
                    id = false;
                    break;
                }
            }
        }
        if (!id) {
            break;
        }
    }

    if (id) {
        cout << "É uma matriz identidade." << endl;
    } else {
        cout << "Não é uma matriz identidade." << endl;
    }

    return 0;
}