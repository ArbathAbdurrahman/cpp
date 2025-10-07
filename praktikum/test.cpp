#include <iostream>
using namespace std;

int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    for(int putaran =0; putaran < (n-1); putaran++){

        for(int tukaran =0; tukaran < (n- putaran -1); tukaran++){

            if (arr[tukaran] > arr[tukaran+1]){

                int temp = arr[tukaran];
                arr[tukaran] = arr[tukaran+1];
                arr[tukaran+1] = temp;
            }
        }
    }

    for(int i = 0; i<n;i++){
        cout << arr[i];
    }
}