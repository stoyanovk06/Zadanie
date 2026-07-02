#include <iostream>
using namespace std;

int main() {
    int chisla[10];

    cout << "Vuvedete 10 tseli chisla:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> chisla[i];
    }

    cout << "Prav red:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << chisla[i] << " ";
    }

    cout << endl;

    cout << "Obraten red:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << chisla[i] << " ";
    }

    cout << endl;

    return 0;
}