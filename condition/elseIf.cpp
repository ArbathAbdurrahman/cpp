#include <iostream>
using namespace std;

// else if statement digunakan untuk menjalankan blok kode jika kondisi pertama false
// contoh

int main()
{
    int time = 19;

    if (time < 10) // false
    {
        cout << "good morning" << endl;
    }
    else if (time < 20) // true
    {
        // kode ini akan dijalankan
        cout << "good day" << endl;
    }
    else
    {
        cout << "good evening";
    }

    // outputs "good day"
}
