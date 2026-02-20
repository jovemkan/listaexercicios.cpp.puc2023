#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const int conj = 100;
    int n[conj], amp;

    for (int i = 1; i<=conj; i++){
        cout<<"Digite o número "<<i<<" de 100:";
        cin>>n[i];
    }

    int MIN = n[0];
    int MAX = n[0];

    for (int i = 1; i < conj; i++) {
        if (n[i] < MIN) {
            MIN = n[i];
        }
        if (n[i] > MAX) {
            MAX = n[i];
        }
    }

    amp = MAX - MIN;

    cout<<endl;
    cout<<"A amplitude desses números é de: "<<amp;

    return 0;
}