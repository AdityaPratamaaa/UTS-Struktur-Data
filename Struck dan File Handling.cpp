#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Peralatan {
    string kode;
    string nama;
    int jumlah;
    string kondisi;
};

void tambahPeralatan(Peralatan &p) {
    cout << "Kode: ";
    cin >> p.kode;
    cout << "Nama: ";
    cin >> p.nama;
    cout << "Jumlah: ";
    cin >> p.jumlah;
    cout << "Kondisi: ";
    cin >> p.kondisi;
}

void simpanPeralatan(Peralatan &p) {
    ofstream file("peralatan.txt", ios::app);
    file << p.kode << " " << p.nama << " " << p.jumlah << " " << p.kondisi << endl;
    file.close();
}

void tampilkanPeralatan() {
    ifstream file("peralatan.txt");
    Peralatan p;
    while (file >> p.kode >> p.nama >> p.jumlah >> p.kondisi)
        cout << "Kode: " << p.kode << ", Nama: " << p.nama << ", Jumlah: " << p.jumlah << ", Kondisi: " << p.kondisi << endl;
    file.close();
}

int main() {
    Peralatan alat;
    tambahPeralatan(alat);
    simpanPeralatan(alat);
    tampilkanPeralatan();
    return 0;
}