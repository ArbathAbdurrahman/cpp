#include <iostream>
using namespace std;

/*
conditional adalah statement yang yang digunakan untuk melakukan tindakan yang berbeda berdasarkan kondisi yang diberikan

kondisi yang digunakan adalah kondisi perbandingan
- kurang dari: a < b
- kurang dari sama dengan: a <= b
- lebih dari: a > b
- lebih dari sama dengan: a >= b
- sama dengan: a == b
- tidak sama dengan: a != b

kondisi perbandingan ini digunakan untuk melakukan aksi yang berbeda
*/

// if statement digunakan tuntuk menjalankan blok kode jika kondisi true
// contoh

int main()
{
    if (20 > 18) // jika 20 lebih besar dari 18 maka:
    {
        // jalankan kode di dalam kurung
        cout << "20 lebih besar dari 18" << endl;
    }

    // kita juga bisa menggunakan variable untuk perbandingan
    int x = 20;
    int y = 18;
    if (x > y)
    {
        cout << "x lebih besar dari y" << endl;
    }
}
