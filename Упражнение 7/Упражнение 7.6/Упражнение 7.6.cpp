#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, suma = 1.0, chlen = 1.0;
    int n = 1;

    cout << "Vuvedete x: ";
    cin >> x;

    while (true) {
        chlen = chlen * x / n;   
        if (fabs(chlen) < 1e-8) {
            break;
        }

        suma += chlen;
        n++;
    }

    cout << "e^x (red) = " << suma << endl;
    cout << "e^x (exp) = " << exp(x) << endl;

    return 0;
}