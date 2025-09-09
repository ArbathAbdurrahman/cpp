#include <iostream>
using namespace std;

int main() {

    // Diisi dengan Desimal (basis 10)
    int n = 25;
    cout << "Desimal: " << n << endl;
	cout << "Ukuran n: " << sizeof(n) << " bytes" << endl;
  
    // Diisi dengan Biner (basis 2)
    // Awalan 0b menandakan angka biner
    n = 0b11001;
    cout << "Biner (0b11001) menjadi: " << n << endl;
    
    // Diisi dengan Oktal (basis 8)
    // Awalan 0 menandakan angka oktal
    n = 031;
    cout << "Oktal (031) menjadi: " << n << endl;

    // Diisi dengan Hexadesimal (basis 16)
    // Awalan 0x menandakan angka heksadesimal
    n = 0x19;
    cout << "Hexadesimal (0x19) menjadi: " << n << endl;

    return 0;
}

/*
Output:

Desimal: 25
Ukuran n: 4 bytes
Biner (0b11001) menjadi: 25
Oktal (031) menjadi: 25
Hexadesimal (0x19) menjadi: 25
*/