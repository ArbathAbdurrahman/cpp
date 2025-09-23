#include <iostream>
using namespace std;

int main(){
    int n = 5;

    switch(n) {
        case 5 :
        cout << "Negatif" << endl;
        break;

        case 1:
        cout << n << endl;
        break;

        default:
        cout << "Tidak ada pilihan." << endl;
    }
}