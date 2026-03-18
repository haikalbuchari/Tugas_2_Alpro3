#include <iostream>
using namespace std;

int main(){

    float ip,gajiortu;

    cout<< "Masukkan IP Mahasiswa : ";
    cin>>ip;

    cout<< "Masukkan Gaji Orang Tua(dalam Juta) : ";
    cin>>gajiortu;

    if (ip >= 3.5){
        cout << "Mendapatkan Beasiswa Kategori 4" << endl;
    } 
    
    else if (ip < 3.5 && gajiortu < 1){
        cout << "Mendapatkan Beasiswa kategori 1" << endl;
    }

    else if (gajiortu >= 1 && gajiortu <= 5 && ip >= 2.0){
        cout << "Mendapatkan Beasiswa Kategori 3" << endl;
    }

    else if(gajiortu >= 1 && gajiortu <=5 && ip <2.0){
        cout << "Mendapatkan beasiswa kategori 2" << endl;
    }

    else {
        cout << "Tidak Mendapatkan Beasiswa" << endl;
    }

    return 0;
}
        /*
Penjelasan logika program:
Program ini digunakan untuk menentukan kategori beasiswa berdasarkan dua hal:
IP mahasiswa dan gaji orang tua.

Pertama, program meminta pengguna memasukkan IP dan gaji orang tua.

Setelah itu, program mengecek kondisi satu per satu dengan urutan prioritas:

1. Dicek dulu IP tertinggi:
   Jika IP ≥ 3.5, maka langsung masuk kategori 4.
   (Artinya, mahasiswa dengan IP tinggi otomatis dapat beasiswa terbaik tanpa melihat gaji.)

2. Jika IP kurang dari 3.5:
   - Jika gaji orang tua < 1 juta → masuk kategori 1
     (karena kondisi ekonomi rendah)

3. Jika IP < 3.5 dan gaji antara 1 sampai 5 juta:
   - Jika IP ≥ 2.0 → kategori 3
   - Jika IP < 2.0 → kategori 2
   (jadi di sini IP menentukan apakah dapat 2 atau 3)

4. Jika tidak memenuhi semua kondisi di atas:
   berarti tidak dapat beasiswa.

Terakhir, program menampilkan hasil kategori atau pesan tidak berhak.
*/
