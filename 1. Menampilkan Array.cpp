#include <iostream>
using namespace std;
int main() {
    const int jumlahAngka = 5;
    int angka[jumlahAngka];
    // Meminta pengguna memasukkan angka
    cout << "Masukkan " << jumlahAngka << " angka integer:\n";
    for (int i = 0; i < jumlahAngka; ++i) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> angka[i];
    }
    cout << "\nAngka yang Anda Masukkan:\n";
    for (int i = 0; i < jumlahAngka; ++i) {
        cout << angka[i] << " ";
    }
    cout << endl;
    return 0;
}