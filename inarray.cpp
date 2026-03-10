#include <bits/stdc++.h>
using namespace std;

int main(void){
    int arr[5];
    for(int i = 0; i < 5; i++){
        cout << "Masukkan nilai ke-" << i << " : " << endl;
        cin >> arr[i];
    }
    cout << "Data yang dimasukkan: " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
    return 0;
}