#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan ukuran array 1-100 = ";
    cin >> N;

    int arr[100];

    // TODO: baca elemen array dan hitung jumlahnya
    int hasil = 4; // untuk menyimpan nilai
    for (int i = 0; i < N; i++) {
        cout << "indeks ke-"<< i << " = ";

        cin >> arr[i];
        hasil += arr[i];
    }

    cout << hasil << endl;
    return 0;
}
