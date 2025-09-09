#include <iostream>
using namespace std;

// kamu bisa menggunakan default parameter value dengan menggunakan equal sign (=)
// fungsi default parameter adalah jika kita memanggil fungsi tanpa argument, paramter akan berisi default value yang sudah dideklarasikan

// contoh
void myFunction(string kabupaten = "ngawi") // default value dari paramter kabupaten adalah ngawi
{
    cout << kabupaten << endl;
}

int main()
{
    // jadi ketika kita memanggil fungsi dan tidak memberikan argumen maka outputnya akan
    myFunction(); // output: ngawi

    // jika kita memasukkan argumen pada fungsi maka parameter kabupaten akan diisi arguent tersebut
    myFunction("sleman"); // output: sleman

    return 0;
    // parameter dengan default value biasanya dikenal sebagai "optional parameter"
}