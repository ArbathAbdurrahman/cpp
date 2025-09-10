#include <iostream>

int main() {
    // Variabel awal
    int nilaiInt = 65;
    double nilaiDouble = 99.87;
    char huruf = 'X';
    bool isBenar = true;
    bool isSalah = false;

    std::cout << "--- Contoh Konversi Tipe Data (C-Style Cast) ---" << std::endl;

    // Konversi dari double ke int (berisiko kehilangan data)
    int doubleKeInt = (int)nilaiDouble;
    std::cout << "1. double 99.87 menjadi int: " << doubleKeInt << std::endl;

    // Konversi dari int ke double (aman)
    double intKeDouble = (double)nilaiInt;
    std::cout << "2. int 65 menjadi double: " << intKeDouble << std::endl;

    // Konversi dari int ke char (berdasarkan tabel ASCII)
    char intKeChar = (char)nilaiInt;
    std::cout << "3. int 65 menjadi char: '" << intKeChar << "'" << std::endl;

    // Konversi dari char ke int (berdasarkan tabel ASCII)
    int charKeInt = (int)huruf;
    std::cout << "4. char 'X' menjadi int: " << charKeInt << std::endl;

    // Konversi dari bool ke int
    int boolTrueKeInt = (int)isBenar;
    int boolFalseKeInt = (int)isSalah;
    std::cout << "5. bool true menjadi int: " << boolTrueKeInt << std::endl;
    std::cout << "   bool false menjadi int: " << boolFalseKeInt << std::endl;

    // Konversi dari int ke bool
    bool intKeBool_1 = (bool)nilaiInt; // Angka selain 0 akan menjadi true
    bool intKeBool_0 = (bool)0;       // Angka 0 akan menjadi false
    std::cout << "6. int 65 menjadi bool: " << intKeBool_1 << std::endl;
    std::cout << "   int 0 menjadi bool: " << intKeBool_0 << std::endl;

    return 0;
}