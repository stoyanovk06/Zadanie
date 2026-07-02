#include <iostream>
using namespace std;

int main() {
    double matrica[4][3];
    double transponirana[3][4];

    cout << "Vuvedete elementite na matricata 4x3:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrica[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            transponirana[j][i] = matrica[i][j];
        }
    }

    cout << "Transponirana matrica (3x4):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << transponirana[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}