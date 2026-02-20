#include <iostream>

using namespace std;

int menu(){

    cout << "1 - Subtração de matrizes" << endl;
    cout << "2 - Multiplicação de matrizes" << endl;
    cout << "3 - Determinar se duas matrizes são simétricas" << endl;
    cout << "4 - Determinar se duas matrizes são iguais" << endl;
    cout << "0 - Sair";
    int escolha;
    cin >> escolha;
    return escolha;
}
int main(){

    int escolha;
    escolha = menu();
    while(escolha != 0){
        switch (escolha){
            case 1:
                int submat1[3][3];
                int submat2[3][3];
                int sub[3][3];
            cout<<"Digite os elementos da matriz 1:"<<endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cin>>submat1[i][j];
                    }
                }
                cout<<"Digite os elementos da matriz 2:"<<endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cin>>submat2[i][j];
                    }
                }
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        sub[i][j] = submat1[i][j] - submat2[i][j];
                    }
                }
                cout<<"A substração das duas matrizes é:"<<endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << sub[i][j] << " ";
                    }
                    cout<<endl;
                }
            break;
            case 2:
                int multmat1[3][3];
                int multmat2[3][3];
                int mult[3][3];
                cout<<"Digite os elementos da matriz 1:"<<endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cin>>multmat1[i][j];
                    }
                }
                cout<<"Digite os elementos da matriz 2:"<<endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cin >> multmat2[i][j];
                    }
                }
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        mult[i][j] = multmat1[i][j] * multmat2[i][j];
                    }
                }
                cout<<"A multiplicação das duas matrizes é:"<<endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << mult[i][j] << " ";
                    }
                    cout<<endl;
                }
            break;
            case 3:
            int matA[3][3];
            int matAt[3][3];
            int aux = 0;

            cout << "Digite os elementos da matriz A!" << endl;
            for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin>>matA[i][j];
                }
            }
            for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                matAt[i][j] = matA[j][i];
                }
            }
            for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                if(matA[i][j] == matAt[i][j]){
                    aux++;
                }
                else{}
                if (aux == 9 ){
                    cout << "Essa matriz é simétrica!" << endl;
                }
                else{
                    cout << "Essa matriz não é simétrica!" << endl;
                }
                }
            }
            break;
            case 4:
                int mat1[3][3];
                int mat2[3][3];
                bool igual = false;
                cout << "Digite os elementos da matriz 1:"<<endl;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cin>>mat1[i][j];
                    }
                }
                cout<<"Digite os elementos da matriz 2:"<<endl;
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
                        if(mat1[i][j] == mat2[i][j]){
                            igual = true;
                        }
                        else{
                            igual = false;
                        }
                        if(igual = true){
                            cout << "As matrizes são iguais!"<<endl;
                        }
                        else{
                            cout<<"As matrizes são diferentes!"<<endl;
                        }
                    }
                }
            break;
        }
    }

    return 0;
}