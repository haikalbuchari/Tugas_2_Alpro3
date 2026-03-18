#include <iostream>
using namespace std;

int main() {
    int berangkat, pulang;
    string pergi, kembali;
    int biayaPergi = 0, biayaPulang = 0, total;

    
    cout << "Masukkan jam berangkat (1-24): ";
    cin >> berangkat;
    cout << "Masukkan jam pulang (1-24): ";
    cin >> pulang;

    
    if ((berangkat >= 6 && berangkat <= 8) || (berangkat >= 15 && berangkat <= 17)) {
        pergi = "Bus Linus";
        biayaPergi = 0;
    } 
    else if (berangkat >= 7 && berangkat <= 18) {
        pergi = "Bus Hijau";
        biayaPergi = 5000;
    } 
    else {
        pergi = "Angkot";
        biayaPergi = 10000;
    }

    
    if ((pulang >= 6 && pulang <= 8) || (pulang >= 15 && pulang <= 17)) {
        kembali = "Bus Linus";
        biayaPulang = 0;
    } 
    else if (pulang >= 7 && pulang <= 18) {
        kembali = "Bus Hijau";
        biayaPulang = 5000;
    } 
    else {
        kembali = "Angkot";
        biayaPulang = 10000;
    }

    
    total = biayaPergi + biayaPulang;

    
    cout << "\nTransportasi saat berangkat: " << pergi << endl;
    cout << "Biaya berangkat: Rp" << biayaPergi << endl;

    cout << "\nTransportasi saat pulang: " << kembali << endl;
    cout << "Biaya pulang: Rp" << biayaPulang << endl;

    cout << "\nTotal biaya: Rp" << total << endl;

    return 0;
}

/*
Penjelasan logika program:
Pertama, program meminta input jam keberangkatan dan jam kepulangan (1–24).
Kemudian, untuk masing-masing perjalanan (berangkat dan pulang), program akan mengecek
transportasi apa saja yang tersedia pada jam tersebut.

Aturannya:
- Bus Linus diprioritaskan karena gratis, tetapi hanya tersedia pada jam 6–8 dan 15–17.
- Jika Bus Linus tidak tersedia, maka dicek Bus Hijau (jam 7–18) dengan biaya Rp5.000.
- Jika kedua bus tidak tersedia, maka menggunakan Angkot dengan biaya Rp10.000.

Program melakukan pengecekan ini dua kali:
1. Untuk jam berangkat
2. Untuk jam pulang

Setelah menentukan moda transportasi untuk masing-masing perjalanan, program menjumlahkan
total biaya yang harus dikeluarkan.

Terakhir, program menampilkan:
- Transportasi yang dipilih saat berangkat
- Transportasi yang dipilih saat pulang
- Total biaya keseluruhan
*/
