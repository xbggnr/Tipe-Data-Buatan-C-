#include <bits/stdc++.h>
using namespace std;

typedef struct mahasiswa {
    string nrp;
    string nama;
    string departemen;
    float ips;
} mhs;

int main(void){
    mhs m[101];
    int n;
    cout << "Berapa banyak mahasiswa yang ingin kamu temukan top 3 nya? " << endl;
    cin >> n;
    cout << "Sekarang masukkan data setiap mahasiswanya: " << endl;
    for (int i = 0; i < n; i++){
        int u;
        cout << "NRP: ";
        cin >> m[i].nrp;
        cout << "Nama: ";
        cin >> m[i].nama;
        cout << "Departemen: ";
        cin >> m[i].departemen;
        cout << "IPS semester ini: ";
        cin >> m[i].ips;
    }

    sort(m, m+n, [](const mhs& a, const mhs& b){
        return a.ips > b.ips;
    });

    cout << "Top 3 Data Mahasiswa dari IPS Semester Ini:" << endl;
    int limit;
    if (n < 3) limit = n;
    else limit = 3;
    for (int i = 0; i < limit; i++){
        cout << i+1 << ". " << m[i].nama 
        << " NRP: " << m[i].nrp 
        <<" dengan IPS: " << m[i].ips 
        << " dari Departemen " << m[i].departemen << endl;
    }
    return 0;
}