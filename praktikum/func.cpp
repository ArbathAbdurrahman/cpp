#include <iostream>
using namespace std;

void say_hello(string namaku[]){ // nama fungsi dengan parameter nama
    // kode disini akan dieksekusi
    cout << "Hello " << namaku[0] << namaku[1] << namaku[2] << endl;
}

int main(){
    string mahasiswa[3] = {"Joko ", "Mudi ", "Susilo"};
    string mahasiswa2[3] = {"Asep ", "Kurniawan ", "Khanedy"};

    for(int i = 0; i <10; i++){
        say_hello(mahasiswa); // panggil fungsi
    }
    say_hello(mahasiswa2);

    return 0;
}