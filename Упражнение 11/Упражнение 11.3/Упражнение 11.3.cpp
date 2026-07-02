#include <iostream>
#include <cmath>
using namespace std;

double faktorial(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    double x, suma = 1, chlen;
    int n = 1;

    cout << "Vuvedete x = ";
    cin >> x;

    do {
        chlen = pow(x, n) / faktorial(n);
        suma += chlen;
        n++;
    } while (chlen >= 1e-8);

    cout << "e^x chrez red na Furie = " << suma << endl;
    cout << "e^x chrez funkciq exp() = " << exp(x) << endl;
    cout << "Razlika = " << fabs(suma - exp(x)) << endl;

    return 0;
}