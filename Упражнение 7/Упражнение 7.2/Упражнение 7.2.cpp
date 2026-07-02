#include <iostream>
using namespace std;

int main() {
    double chislo, proizvedenie = 1;

    cout << "Vuvedete polojitelni chisla (0 za krai):" << endl;

    while (true) {
        cin >> chislo;

        if (chislo == 0) {
            break;
        }

        if (chislo > 0) {
            proizvedenie *= chislo;
        }
        else {
            cout << "Molya, vuvedete polojitelno chislo!" << endl;
        }
    }

    cout << "Proizvedenieto na vuvedenite chisla e: " << proizvedenie << endl;

    return 0;
}