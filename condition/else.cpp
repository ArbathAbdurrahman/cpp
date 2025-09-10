#include <iostream>
using namespace std;

// else statement digunakan untuk menjalankan blok kode jika kondisi false
// contoh

int main()
{
    int time = 20;
    if (time < 18) // karena pernyataan ini salah, maka perbandingan akan menghasilkan false
    {
        // kode ini tidak dijalankan karena hasil perbandingan adalah false
        cout << "good day";
    }
    else
    {
        // karena perbandingan menghasilkan false maka yang dijalankan adalah blok kode else ini
        cout << "good evening";
    }
}