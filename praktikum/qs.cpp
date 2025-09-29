#include <iostream>
using namespace std;

int main() {
    int a, b, pilihan;

    // Masukkan dua bilangan
    cin >> a >> b;

    // Masukkan pilihan operasi
    cin >> pilihan;

    // TODO: Lengkapi switch case di sini
    switch(pilihan) {
        //kasus pertama jika pilihan == 1, maka
        case 1:
        //print hasil dari a + b
        cout << a + b << endl; //endl digunakan untuk enter
        break; //break digunakan untuk menghentikan kode di dalam blok kode switch case
        //jika case pilihan == 1 salah, maka lihat case apakah pilihan == 2?
        case 2:
        //jika ya maka jalankan kode di bawah
        cout << a - b << endl;
        break;

        case 3:
        cout << a * b << endl;

        case 4:
        // periksa untuk pembagian kenapa tidak bisa dibagi 0
        if (b==0){
            cout << "Tidak bisa dibagi 0" << endl;
        } else{
            cout << a/b << endl;
        }
        // kalau pakai ternary 
        // b == 0? : cout << a/b <<endl;
        break;

        default :
        cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}