#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string NIM;
    string nama;
    float IPK;
};

void tambahMahasiswa(Mahasiswa *arr[], int &count) {
    Mahasiswa *m = new Mahasiswa;
    cout << "NIM: ";
    cin >> m->NIM;
    cout << "Nama: ";
    cin >> m->nama;
    cout << "IPK: ";
    cin >> m->IPK;
    arr[count++] = m;
}

void hapusMahasiswa(Mahasiswa *arr[], int &count, string nim) {
    for (int i = 0; i < count; i++) {
        if (arr[i]->NIM == nim) {
            delete arr[i];
            for (int j = i; j < count - 1; j++)
                arr[j] = arr[j + 1];
            count--;
            break;
        }
    }
}

void tampilkanMahasiswa(Mahasiswa *arr[], int count) {
    for (int i = 0; i < count; i++)
        cout << "NIM: " << arr[i]->NIM << ", Nama: " << arr[i]->nama << ", IPK: " << arr[i]->IPK << endl;
}

void urutkanMahasiswa(Mahasiswa *arr[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (arr[j]->IPK > arr[j + 1]->IPK) {
                Mahasiswa *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    Mahasiswa *data[10];
    int count = 0;

    tambahMahasiswa(data, count);
    urutkanMahasiswa(data, count);
    tampilkanMahasiswa(data, count);
    
    return 0;
}