#include <iostream>
using namespace std;

/*
void keyword yang digunakan di contoh sebelumnya mengindikasikan kalau
fungsi tersebut harus tidak mengembalikan sebuah value.
jika ingin sebuah fungsi mengembalikan sebuah value, kamu harus menambahkan data type bukan void,
dan gunakan return keyword di dalam fugsi
*/

// contoh
string myFunction(string bapak, string anak) // string merupakan jenis data yang dikeluarkan myFunction
{
    // argumen diproses di fungsi sebagai berikut:
    string kalimat = anak + " anaknya " + bapak; // hasil dari operator disimpan di varable kalimat

    // fungsi akan mengembalikan string kalimat
    return kalimat;
}

// fungsi untuk menjumlahkan a dan b
int penjumlahan(int a, int b)
{
    int hasil = a + b;
    return hasil;
}

int main()
{
    // hasil dari fungsi disimpan di variable hasilFungsi
    string hasilFungsi = myFunction("mulyono", "fufufafa");

    // lalu ditampilkan
    cout << hasilFungsi << endl;

    // fungsi juga bisa langsung ditulis di cout, jadi yang keluar adalah hasil dari penjumlahan
    cout << penjumlahan(17, 8) << endl;

    return 0;
}