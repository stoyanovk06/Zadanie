#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

double liceKrug(double radius) {
    return PI * radius * radius;
}

double licePravoagulnik(double duljina, double shirochina) {
    return duljina * shirochina;
}

bool validenTriugulnik(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}

double liceTriugulnik(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    int izbor;

    cout << "Izberete figura:" << endl;
    cout << "1 - Krug" << endl;
    cout << "2 - Pravoagulnik" << endl;
    cout << "3 - Triugulnik" << endl;
    cin >> izbor;

    switch (izbor) {
    case 1: {
        double radius;
        cout << "Vuvedete radius: ";
        cin >> radius;
        cout << "Lice = " << liceKrug(radius) << endl;
        break;
    }
    case 2: {
        double duljina, shirochina;
        cout << "Vuvedete duljina i shirochina: ";
        cin >> duljina >> shirochina;
        cout << "Lice = " << licePravoagulnik(duljina, shirochina) << endl;
        break;
    }
    case 3: {
        double a, b, c;
        cout << "Vuvedete stranite a, b i c: ";
        cin >> a >> b >> c;

        if (validenTriugulnik(a, b, c))
            cout << "Lice = " << liceTriugulnik(a, b, c) << endl;
        else
            cout << "Nevaliden triugulnik!" << endl;

        break;
    }
    default:
        cout << "Greshen izbor!" << endl;
    }

    return 0;
}