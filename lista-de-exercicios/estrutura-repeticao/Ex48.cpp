#include <iostream>

using namespace std;

int main() {
    for (int x = 1; x <= 100; x = x + 3) {
        for (int y = 0; y <= 5; y++) {
            int resultado=x*x+3*x+y*y+x*y-5*y-3*x+15;
            cout << "f(" << x << ", " << y << ") = " << resultado << endl;
        }
    }

    return 0;
}
