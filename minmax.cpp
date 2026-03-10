#include <bits/stdc++.h>
using namespace std;

int main(void){
    int nilai[5];
    int total = 0;
    float mean;
    for(int i = 0; i < 5; i++){
        cout << "Masukkan nilai ke-" << i+1 << " : " << endl;
        cin >> nilai[i];
        total += nilai[i];
    }
    int max = nilai[0], min = nilai[0];
    for(int i = 0; i < 5; i++){
        if (nilai[i] > max) max = nilai[i];
        if (nilai[i] < min) min = nilai[i];
    }
    cout << "Nilai minimumnya: " << min << endl;
    cout << "Nilai maksimumnya: " << max << endl;
    return 0;
}