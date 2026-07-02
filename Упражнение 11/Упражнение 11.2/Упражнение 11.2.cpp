#include <iostream>
#include <cmath>
using namespace std;

double razstoqnie(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    int n;
    double x[100], y[100];
    double duljina = 0;

    cout << "Vuvedete broi tochki: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Tochka " << i + 1 << " (x y): ";
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n - 1; i++) {
        duljina += razstoqnie(x[i], y[i], x[i + 1], y[i + 1]);
    }

    cout << "Obshta duljina na nachupenata liniq = " << duljina << endl;

    return 0;
}