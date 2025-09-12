#include <iostream>
using namespace std;

// Global variable - dapat diakses dari mana saja
int globalVar = 100;

// Function prototype
void demonstrasiLocalScope();
void demonstrasiGlobalScope();
void demonstrasiParameterScope(int param);
void demonstrasiBlockScope();

int main()
{
    cout << "=== MATERI: SCOPE PADA FUNCTION ===" << endl;
    cout << "Scope adalah ruang lingkup di mana variabel dapat diakses" << endl
         << endl;

    // 1. Local Scope
    cout << "1. LOCAL SCOPE:" << endl;
    demonstrasiLocalScope();
    cout << endl;

    // 2. Global Scope
    cout << "2. GLOBAL SCOPE:" << endl;
    demonstrasiGlobalScope();
    cout << endl;

    // 3. Parameter Scope
    cout << "3. PARAMETER SCOPE:" << endl;
    demonstrasiParameterScope(50);
    cout << endl;

    // 4. Block Scope
    cout << "4. BLOCK SCOPE:" << endl;
    demonstrasiBlockScope();
    cout << endl;

    return 0;
}

// 1. Demonstrasi Local Scope
void demonstrasiLocalScope()
{
    int localVar = 10; // Variabel lokal - hanya bisa diakses dalam function ini

    cout << "   - Variabel lokal di dalam function: " << localVar << endl;
    cout << "   - Variabel global dari dalam function: " << globalVar << endl;

    // localVar tidak dapat diakses dari luar function ini
}

// 2. Demonstrasi Global Scope
void demonstrasiGlobalScope()
{
    cout << "   - Mengakses variabel global: " << globalVar << endl;

    // Mengubah nilai variabel global
    globalVar = 200;
    cout << "   - Setelah diubah: " << globalVar << endl;
}

// 3. Demonstrasi Parameter Scope
void demonstrasiParameterScope(int param)
{
    cout << "   - Parameter yang diterima: " << param << endl;

    // Parameter 'param' hanya bisa diakses dalam function ini
    param = 99; // Mengubah nilai parameter (tidak mempengaruhi variabel asli)
    cout << "   - Parameter setelah diubah: " << param << endl;
}

// 4. Demonstrasi Block Scope
void demonstrasiBlockScope()
{
    int outerVar = 1;
    cout << "   - Variabel luar block: " << outerVar << endl;

    // Block scope dengan kurung kurawal
    {
        int innerVar = 2; // Hanya bisa diakses dalam block ini
        cout << "   - Variabel dalam block: " << innerVar << endl;
        cout << "   - Variabel luar masih bisa diakses: " << outerVar << endl;

        // Nested block
        {
            int deepVar = 3;
            cout << "   - Variabel dalam nested block: " << deepVar << endl;
            cout << "   - Semua variabel luar masih bisa diakses: "
                 << outerVar << ", " << innerVar << endl;
        }
        // deepVar tidak bisa diakses di sini
    }
    // innerVar tidak bisa diakses di sini

    // Contoh dengan if statement
    if (true)
    {
        int ifVar = 4;
        cout << "   - Variabel dalam if block: " << ifVar << endl;
    }
    // ifVar tidak bisa diakses di sini
}

/*
PENJELASAN SCOPE:

1. LOCAL SCOPE:
   - Variabel dideklarasikan di dalam function
   - Hanya bisa diakses dalam function tersebut
   - Dihapus dari memori setelah function selesai

2. GLOBAL SCOPE:
   - Variabel dideklarasikan di luar semua function
   - Bisa diakses dari mana saja dalam program
   - Tetap ada selama program berjalan

3. PARAMETER SCOPE:
   - Parameter function memiliki scope lokal
   - Hanya bisa diakses dalam function tersebut
   - Mengubah parameter tidak mempengaruhi variabel asli (pass by value)

4. BLOCK SCOPE:
   - Variabel dalam kurung kurawal {} memiliki scope terbatas
   - Hanya bisa diakses dalam block tersebut
   - Berlaku untuk if, for, while, atau block manual

ATURAN PENTING:
- Variabel inner scope dapat "menutupi" variabel outer scope dengan nama sama
- Variabel harus dideklarasikan sebelum digunakan
- Gunakan scope sekecil mungkin untuk menghindari konflik nama
- Global variable sebaiknya dihindari kecuali benar-benar diperlukan
*/
