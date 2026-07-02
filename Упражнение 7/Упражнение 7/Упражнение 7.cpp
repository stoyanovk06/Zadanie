#include <iostream>
using namespace std;

int main() {
    double chislo, suma = 0;

    cout << "Vuvedete polojitelni chisla (0 za krai):" << endl;

    while (true) {
        cin >> chislo;

        if (chislo == 0) {
            break;
        }

        if (chislo > 0) {
            suma += chislo;
        }
        else {
            cout << "Molya, vuvedete polojitelno chislo!" << endl;
        }
    }

    cout << "Sumata na vuvedenite chisla e: " << suma << endl;

    return 0;
}