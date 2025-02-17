#include <iostream>
#include <queue>
using namespace std;

struct Pelanggan {
    int nomorAntrian;
    int waktuLayanan;
};

int main() {
    queue<Pelanggan> q;

    Pelanggan p1 = {1, 10};
    Pelanggan p2 = {2, 15};
    q.push(p1);
    q.push(p2);

    while (!q.empty()) {
        Pelanggan p = q.front();
        q.pop();
        cout << "Nomor Antrian: " << p.nomorAntrian << ", Waktu Layanan: " << p.waktuLayanan << endl;
    }

    return 0;
}