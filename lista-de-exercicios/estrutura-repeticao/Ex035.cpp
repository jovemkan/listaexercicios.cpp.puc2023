#include <iostream>

using namespace std;

int main(){
    cout << "Números perfeitos entre 1 e 1000:" << endl;

    for (int num = 1; num <= 1000; num++) {
        int sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            cout<<num<<endl;
        }
    }
    return 0;
}
