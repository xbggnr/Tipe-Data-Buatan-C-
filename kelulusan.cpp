#include <bits/stdc++.h>
using namespace std;

int main(void){
    int nilaiAkhirStrukturData[51], banyak_mhs;
    cout << "Mau hitung berapa nilai? " << endl;
    cin >> banyak_mhs;
    cout << "Masukkan nilainya: ";
    for (int i = 0; i < banyak_mhs; i++){
        cin >> nilaiAkhirStrukturData[i];
    }
    int lulus = 0, mengulang = 0;
    for (int i = 0; i < banyak_mhs; i++){
        if (nilaiAkhirStrukturData[i] >= 60) lulus++;
        else mengulang++;
    }
    cout << lulus << " dari " << banyak_mhs << " tidak perlu mengulang." << endl;
    cout << mengulang << " dari " << banyak_mhs << " harus mengulang tahun depan." << endl;
    return 0;
}