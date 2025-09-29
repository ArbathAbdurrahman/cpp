#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka (0 untuk berhenti): ";
    cin >> angka;

    while (angka != 0) {
        cout << "Anda memasukkan: " << angka << endl;
        cout << "Masukkan angka lagi (0 untuk berhenti): ";
        cin >> angka;
    }

    cout << "Program selesai." << endl;
    return 0;
}