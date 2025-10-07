#include <iostream>
using namespace std;

int main(){
    int angka[5] = {1,2,33,4,50}; // inisiasi array
    int length_in_byte = sizeof(angka); // ukuran dalam byte bukan ukuran panjang array
    cout <<"ukuran array ="<< length_in_byte << endl;
    int length = sizeof(angka)/sizeof(angka[0]); // ukuran array 
    cout <<"panjang array ="<< length << endl;

    // mengakses array menurut indexnya
    cout << "indeks ke-1 = " << angka[1] << endl;
    cout << "indeks ke-5 = " << angka[5] << endl;
    cout << "indeks ke-0 = " << angka[0] << endl;

    // mengeluarkan array menggunakan loop
    for(int i = 0; i < 5; i++){
        cout <<"indeks ke-"<< i <<"= "<< angka[i]<< endl;
    }

    return 0;
}