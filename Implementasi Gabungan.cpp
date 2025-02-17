#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

struct Buku {
    string ISBN;
    string judul;
    string pengarang;
    int tahunTerbit;
};

void push(stack<Buku> &s, Buku buku) {
    s.push(buku);
}

void enqueue(queue<Buku> &q, Buku buku) {
    q.push(buku);
}

int main() {
    stack<Buku> riwayatPeminjaman;
    queue<Buku> antrianPeminjaman;

    Buku buku1 = {"123", "Pemrograman C++", "Budi", 2020};
    push(riwayatPeminjaman, buku1);
    enqueue(antrianPeminjaman, buku1);

    cout << "Buku dalam riwayat peminjaman: " << riwayatPeminjaman.top().judul << endl;
    cout << "Buku dalam antrian peminjaman: " << antrianPeminjaman.front().judul << endl;

    return 0;
}