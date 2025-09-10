#include <iostream>
using namespace std;

// FUNGSI

/*
- karena fungsi tidak mengembalikan value,
maka diawali dengan void

- "myFunction" adalah nama dari fungsi
*/
void myFunction() // deklarasi
{
    // di dalam semicolon {} adalah body dari fungsi
    // tambahkan kode untuk mendefinisikan apa yang fungsi ini harus lakukan
    cout << "asep bensin";
}

// kita juga bisa memisahkan deklarasi fungsi di atas main baru memberikan definisi fungsi di bawah main;
// contoh:
void deklarasiFungsi();

// fungsi utama untuk menjalankan program
int main()
{

    // panggil fungsi di main untuk menjalankan fungsi
    myFunction();

    deklarasiFungsi();

    return 0;
}

// definisi fungsi
void deklarasiFungsi()
{
    cout << "aku dijalankan mas azril";
}
