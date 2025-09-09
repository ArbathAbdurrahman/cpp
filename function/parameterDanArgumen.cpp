#include <iostream>
using namespace std;

/*
data dapat diteruskan ke fungsi menggunakan parameter.
parameter ini bertingak sebagai variable di dalam fungsi

- parameter di tulis setelah nama fungsi, di dalam kurung ().
- tidak ada limitasi dari banyaknya paramter,
- pisahkan parameter dengan koma ","
*/

// contoh penggunaan paramter
void namaFungsi(string nama)
{
    // contoh kode
    cout << "aku suka " << nama << endl;
}

int main()
{
    // ketika fungsi dipanggil, kita teruskan data ke fungsi
    // disini dicontohkan nama = "imphenen"

    // ketika paramter diteruskan ke fungsi, itu dinamakan sebuah argumen
    // jadi dari contoh yang diberikan: nama adalah paramter dan imphenen, fesnuk, dan doom scrolling adalah argument
    namaFungsi("imphenen");
    namaFungsi("fesnuk");
    namaFungsi("doom scrolling");

    return 0;
}
