#include <bits/stdc++.h>
using namespace std;

int main(void){
    int nilai[5];
    int total = 0;
    float mean;
    for (int i = 0; i < 5; i++){
        cout << "Masukkan nilai ke-" << i+1 << " : " << endl;
        cin >> nilai[i];
        total += nilai[i];
    }
    cout << "Total Nilai: " << total << endl;
    cout << "Rata-Rata Nilai: " << total / 5.0 << endl;
    return 0;
}