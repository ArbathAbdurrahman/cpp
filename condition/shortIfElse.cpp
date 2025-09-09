#include <iostream>
using namespace std;

// ada if else yang lebih singkat yang dinamakan ternary operator, dinamakan ternary operator karena ini mengandung tiga operand
// ini bisa digunakan untuk menggantikan multiple line code dengan single line dan biasanya digunakan untuk replace simple if else statement

// contoh
int main()
{
    int time = 20;

    // jika true maka result = "good day", else maka "good evening"
    string result = (time < 18) ? "good day" : "good evening";
    cout << result << endl;
}