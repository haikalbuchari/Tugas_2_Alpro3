#include <iostream>
using namespace std;

int main() {
    int bil;
    cout << "Masukkan bilangan 4 digit: ";
    cin >> bil;
    
    if (bil < 1000 || bil > 9999) {
        cout << "Input salah" << endl;
        return 0;}

    
    int d1 = bil / 1000;
    int d2 = (bil / 100) % 10;
    int d3 = (bil / 10) % 10;
    int d4 = bil % 10;


    bool naik = (d1 < d2 && d2 < d3 && d3 < d4);
    bool turun = (d1 > d2 && d2 > d3 && d3 > d4);
    bool alfa = naik || turun;

    
    int depan = d1 * 10 + d2;
    int belakang = d3 * 10 + d4;
    int selisih = abs(depan - belakang);
    bool beta = selisih >= 30;

    
    if (alfa && beta) {
        cout << "Bilangan gamma" << endl;
    } else if (alfa) {
        cout << "Bilangan alfa" << endl;
    } else if (beta) {
        cout << "Bilangan beta" << endl;
    } else {
        cout << "Bilangan delta" << endl;
    }

    return 0;
}

/*
Penjelasan logika program:
Pertama, program meminta pengguna memasukkan sebuah bilangan. 
Kemudian program mengecek apakah bilangan tersebut benar-benar terdiri dari 4 digit (antara 1000 sampai 9999). 
Jika tidak, program akan menampilkan pesan error dan berhenti.

Jika input valid, program akan memisahkan setiap digit:
- digit pertama (ribuan)
- digit kedua (ratusan)
- digit ketiga (puluhan)
- digit keempat (satuan)

Selanjutnya program mengecek apakah bilangan termasuk tipe alfa:
yaitu jika digitnya tersusun secara berurutan naik (misalnya 1234) 
atau berurutan turun (misalnya 4321).

Lalu program mengecek tipe beta:
dengan cara mengambil dua digit pertama dan dua digit terakhir,
kemudian menghitung selisihnya. Jika selisihnya minimal 30, maka termasuk beta.

Setelah itu dilakukan klasifikasi:
- Jika memenuhi alfa dan beta sekaligus → gamma
- Jika hanya memenuhi alfa → alfa
- Jika hanya memenuhi beta → beta
- Jika tidak memenuhi keduanya → delta

Terakhir, program menampilkan hasil klasifikasi ke layar.
*/
