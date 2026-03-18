#include <iostream>
using namespace std;

int main(){
    int tujuan, ekspedisi, biaya;
    float berat;
    string namaekspedisi;

    cout << "Masukkan berat barang : ";
    cin >> berat;

    cout << "1 bila pengiriman dalam kota, 2 bila pengiriman luar kota\n";
    cout << "Masukkan pilihan : ";
    cin >> tujuan;

    cout << "Mau ngirim pake apa nih?\n";
    cout << "1. JNE\n";
    cout << "2. SiCepat\n";
    cout << "3. Gojek\n";
    cout << "Masukkan pilihan (angka) : ";
    cin >> ekspedisi;

    if (ekspedisi == 1){
        namaekspedisi = "JNE";

        if (tujuan == 1)
            biaya = berat * 10000;
        else
            biaya = berat * 20000;

        if (berat > 10) {
            biaya = biaya / 2;
            cout << "\nEkspedisi yang dipilih: " << namaekspedisi << endl;
            cout << "Total biaya: Rp" << biaya << endl;
            cout << "(Diskon 50% karena berat > 10 kg)" << endl;
        } 
        else {
            cout << "\nEkspedisi yang dipilih: " << namaekspedisi << endl;
            cout << "Total biaya: Rp" << biaya << endl;
        }
    }

    else if (ekspedisi == 2){
        namaekspedisi = "SiCepat";

        if (tujuan == 1)
            biaya = berat * 8000;
        else
            biaya = berat * 18000;

        if (berat > 15) {
            biaya = 0;
            cout << "\nEkspedisi yang dipilih: " << namaekspedisi << endl;
            cout << "Total biaya: Rp" << biaya << endl;
            cout << "(Gratis ongkir karena barang lebih dari 15 kg)" << endl;
        } 
        else {
            cout << "\nEkspedisi yang dipilih: " << namaekspedisi << endl;
            cout << "Total biaya: Rp" << biaya << endl;
        }
    }

    else if (ekspedisi == 3) {
        namaekspedisi = "Gojek";

        if (tujuan == 2) {
            cout << "Gojek hanya bisa dalam kota!" << endl;
            return 0;
        }

        biaya = 12000 * berat;

        if (berat > 5) {
            biaya -= 10000;
            cout << "\nEkspedisi yang dipilih: " << namaekspedisi << endl;
            cout << "Total biaya: Rp" << biaya << endl;
            cout << "(Diskon Rp10.000 karena berat > 5 kg)" << endl;
        } 
        else {
            cout << "\nEkspedisi yang dipilih: " << namaekspedisi << endl;
            cout << "Total biaya: Rp" << biaya << endl;
        }
    }

    else {
        cout << "Pilihan ekspedisi tidak valid." << endl;
    }

    return 0;
}

/*
Penjelasan logika program:
Program ini bertujuan untuk menghitung biaya pengiriman barang berdasarkan beberapa input dari pengguna.

Pertama-tama, program meminta pengguna memasukkan berat barang, tujuan pengiriman 
(dalam kota atau luar kota), serta memilih ekspedisi yang ingin digunakan (JNE, SiCepat, atau Gojek).

Setelah itu, program menggunakan percabangan if-else untuk menentukan ekspedisi yang dipilih.
Setiap ekspedisi memiliki aturan biaya yang berbeda tergantung tujuan pengiriman.

Jika pengguna memilih JNE, maka biaya dihitung berdasarkan berat barang:
- Dalam kota: berat dikali 10.000
- Luar kota: berat dikali 20.000
Jika berat barang lebih dari 10 kg, maka pengguna mendapatkan diskon 50%.

Jika pengguna memilih SiCepat, maka:
- Dalam kota: berat dikali 8.000
- Luar kota: berat dikali 18.000
Jika berat lebih dari 15 kg, maka pengguna mendapatkan gratis ongkir.

Jika pengguna memilih Gojek, maka hanya bisa digunakan untuk dalam kota.
Jika pengguna memilih luar kota, program akan menampilkan pesan bahwa Gojek tidak bisa digunakan.
Untuk dalam kota, biaya dihitung dengan berat dikali 12.000.
Jika berat lebih dari 5 kg, maka akan mendapatkan potongan sebesar 10.000.

Terakhir, program akan menampilkan nama ekspedisi yang dipilih, total biaya, 
dan informasi diskon jika ada.
Jika pilihan ekspedisi tidak valid, maka program akan menampilkan pesan kesalahan.
*/
