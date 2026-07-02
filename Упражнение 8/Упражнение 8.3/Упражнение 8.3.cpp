#include <iostream>
using namespace std;

int main() {
    int masiv[10];
    int maxElement, poziciq;

    cout << "Vuvedete 10 celi chisla:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> masiv[i];
    }

    maxElement = masiv[0];
    poziciq = 0;

    for (int i = 1; i < 10; i++) {
        if (masiv[i] > maxElement) {
            maxElement = masiv[i];
            poziciq = i;
        }
    }

    cout << "Maksimalen element = " << maxElement << endl;
    cout << "Poziciq = " << poziciq + 1 << endl;

    return 0;