#include <iostream>
using namespace std;

// di dalam fungsi, kamu bisa menambahkan banyak parameter

// contoh
// terdapat parameter string janji dan int jumlah dengan default 1
void terbuka(string janji, int jumlah = 1)
{
    cout << "insyaallah terbuka " << jumlah << " juta " << janji << endl;
}

int main()
{
    // perlu diingat jika terdapat beberapa parameter, fungsi yang dipanggil harus memiliki jumlah argument yang sama dengan parameter
    // dan urutan pemberian argumen harus sesuai dengan parameter;
    terbuka("lapangan pekerjaan", 19);

    // contoh penerapan defautl parameter pada multipe parameter
    terbuka("lapangan pekerjaan");

    return 0;
}
