#include <bits/stdc++.h>
using namespace std;

typedef struct mahasiswa{
    string nim, nama, prodi;
    float ipk;
} mhs;

typedef struct buku{
    string judul, penulis;
    int jumlahHal;
    float harga;
} bk;

int main (void){
    //Deklarasi record
    mhs m1, m2;
    bk b1, b2;

    //Contoh mengakses elemen record
    m1.nim = "11223344";
    cin >> m1.nama;

    m2.nim = "11335577";
    cin >> m2.ipk;

    cout << "NIM Mahasiwa1: " << m1.nim << endl;
    cout << "IPK Mahasiwa2: " << m2.ipk << endl;
}