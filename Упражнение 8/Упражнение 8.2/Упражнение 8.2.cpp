#include <iostream>
using namespace std;

int main() {
    double masiv[10];
    double suma = 0, sredno;

    cout << "Vuvedete 10 realni chisla:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> masiv[i];
        suma += masiv[i];
    }

    sredno = suma / 10;

    cout << "Suma = " << suma << endl;
    cout << "Sredno aritmetichno = " << sredno << endl;

    return 0;
}