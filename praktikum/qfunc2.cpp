#include <iostream>
using namespace std;

void jokoMakan(string makanan[], int jumlah){
    for(int i=0; i<jumlah; i++){
        cout << "joko sedang makan " << makanan[i] << endl;
    }
}

int main(){
    const int jumlah_makanan =3;
    string makanan[jumlah_makanan];

    // nmeminta makanan
    for(int i =0; i < jumlah_makanan; i++){
        cin >> makanan[i];
    }

    jokoMakan(makanan, jumlah_makanan);

    return 0;
}