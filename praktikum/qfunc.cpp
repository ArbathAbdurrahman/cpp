#include <iostream>
using namespace std;

//deklarasi fungsi dan variable di luar main
void helloWorld(){
    cout << "Hello World!" <<endl;
}

int main(){
   //tulis kode di yang dijalankan di bawah
   int n;
   cin >> n; // meminta input

   for(int i =0; i<n; i++){ // loop sebanyak n
    helloWorld(); // panggil fungsi
   }

    return 0;
}