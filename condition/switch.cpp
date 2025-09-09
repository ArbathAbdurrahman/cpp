#include <iostream>
using namespace std;

// switch statement digunakan untuk memilih satu dari banyak blok kode untuk dieksekusi

// contoh
int main()
{
    int day = 4;
    switch (day) // day merupakan expression yang dievaluasi
    {
    case 1: // jika day == 1
        cout << "Monday";
        break;
    case 2: // jika day == 2
        cout << "Tuesday";
        break;
    case 3: // jika day == 3
        cout << "Wednesday";
        break;
    // jika ada value yang sesuai, blok kode akan dijalankan
    // pada case 4 karena day = 4 maka block ini akan dijalankan
    case 4: // jika day == 4
        cout << "Thursday";
        break; // ketika run mencapai break, run akan keluar dari block switch
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default: // default berjalan ketika tidak ada kondisi yang sesuai
        cout << "tidak ada hari";
    }
    // Outputs "Thursday" (day 4)
}