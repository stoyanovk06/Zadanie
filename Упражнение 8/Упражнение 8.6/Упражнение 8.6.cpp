#include <iostream>
using namespace std;

int main() {
    int masiv[5][5];


    cout << "Vuvedete elementite na masiva 5x5:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> masiv[i][j];
        }
    }


    for (int i = 0; i < 5; i++) {
        masiv[i][i] = 0;         
        masiv[i][4 - i] = 0;     
    }


    cout << "Masiv sled nulirane na diagonalite:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << masiv[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}