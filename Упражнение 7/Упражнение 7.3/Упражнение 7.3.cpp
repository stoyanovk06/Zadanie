#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Vuvedete stoinostta na n: ";
    cin >> n;

    cout << "Prav red:" << endl;

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    cout << endl;

    cout << "Obraten red:" << endl;

    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}