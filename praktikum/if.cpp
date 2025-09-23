#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Negatif";
    } else if (n == 0) {
        cout << "Nol";
    } else if (n > 0 && n < 10) {
        cout << "Satuan";
    } else if (n >= 10 && n < 100) {
        cout << "Puluhan";
    } else {
        cout << "Ratusan atau lebih";
    }

    return 0;
}