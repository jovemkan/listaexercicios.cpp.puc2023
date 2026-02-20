#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int num = 1; num < 10000; num++) {
        int reversedNum = 0;
        int temp = num;
        int squareRoot = sqrt(num);

        while (temp > 0) {
            reversedNum = reversedNum * 10 + (temp % 10);
            temp /= 10;
        }

        if (squareRoot * squareRoot == num && num == reversedNum) {
            cout << num << " é um quadrado perfeito e capicua ao mesmo tempo." << endl;
        }
    }

    return 0;
}
