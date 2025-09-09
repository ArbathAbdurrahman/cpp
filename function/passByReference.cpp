#include <iostream>
using namespace std;

/*
di contoh yang sebelumnya, kita menggunakan normal variable ketika kita melempar paramter ke fungsi

kamu juga bisa melempar sebuah reference ke fungsi.
reference adalah alias untuk variable yang sudah ada

contoh referance:
string food = "Pizza"; //food variable
string &meal = food; //reference to food

jadi food dan meal bernilai sama karena meal adalah alias dari food

jadi cara ini akan berguna jika kamu butuh untuk mengubah value dari argument
*/

// contoh
void changeValue(int &num) //&num adalah sebuah alias
{
    num = 50; // sehingga jika num diubah maka argumen yang akan berubah
}

int main()
{
    // jadi awalnya kita deklarasi value bernilai 10
    int value = 10;

    // ketika menjalankan fungsi, jika kita memberika argumen value maka value akan berubah ke 50
    changeValue(value);
    // jadi instead mengembalikan nilai, changeValue akan mengubah variable value yang digunakan menjadi argument

    cout << value << endl;

    return 0;
}
