#include <iostream>

using namespace std;

int main() {
    const int jumlahAngka = 7;
    int angka[jumlahAngka];
    int max;

    // Meminta pengguna memasukkan angka
    cout << "Masukkan 7 angka integer:\n";
    for (int i = 0; i < jumlahAngka; ++i) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> angka[i];
    }

    // Inisialisasi nilai maksimum dengan elemen pertama
    max = angka[0];

    // Mencari nilai maksimum
    for (int i = 1; i < jumlahAngka; ++i) {
        if (angka[i] > max) {
            max = angka[i];
        }
    }

    // Menampilkan hasil
    cout << "\nNilai maksimum adalah: " << max << endl;

    return 0;
}