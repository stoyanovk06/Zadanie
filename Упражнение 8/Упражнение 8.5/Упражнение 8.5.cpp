#include <iostream>
using namespace std;

int main() {
    int masiv[3][4];
    int suma;

    cout << "Vuvedete elementite na masiva (3x4):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> masiv[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        suma = 0;
        for (int j = 0; j < 4; j++) {
            suma += masiv[i][j];
        }
        cout << "Suma na red " << i + 1 << " = " << suma << endl;
    }

    return 0;
}