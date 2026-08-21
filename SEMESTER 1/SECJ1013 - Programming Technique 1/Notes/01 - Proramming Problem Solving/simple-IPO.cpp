/*
BAB 1: ASAS PENYELESAIAN MASALAH
Sub-bab: Input, Process, Output (IPO)
Tajuk: Kira Luas Segi Empat Tepat

===========================================================
NOTA KAKI (BAHASA MELAYU):
===========================================================
1. Program ini adalah contoh pertama yang menggabungkan 
   ketiga-tiga komponen utama: Input, Process, dan Output.

2. Walaupun kita belum belajar sintaks C++ secara mendalam 
   (akan datang dalam Chapter 2), lihat bagaimana logik dari 
   pseudo kod (Bab 1.1) diterjemahkan ke dalam kod sebenar.

3. "cin" (dibaca: see-in) adalah untuk INPUT.
   "cout" (dibaca: see-out) adalah untuk OUTPUT.
   Pengiraan "luas = panjang * lebar" adalah PROSES.

4. Konsep ini akan digunakan berulang kali dalam semua 
   program yang akan kita tulis nanti.
===========================================================
*/

#include <iostream>
using namespace std;

int main() {
    // 1. DEKLARASI VARIABEL (Tempat simpan data sementara)
    // 'double' digunakan untuk nombor perpuluhan
    double panjang, lebar, luas;

    // 2. INPUT (Minta pengguna masukkan data)
    cout << "Masukkan panjang segi empat tepat: ";
    cin >> panjang;  // Simpan input ke dalam variable 'panjang'

    cout << "Masukkan lebar segi empat tepat: ";
    cin >> lebar;    // Simpan input ke dalam variable 'lebar'

    // 3. PROSES (Kira luas menggunakan formula)
    luas = panjang * lebar;

    // 4. OUTPUT (Papar hasil pengiraan ke skrin)
    cout << "Luas segi empat tepat ialah: " << luas << endl;
    // 'endl' bermaksud end line (tukar baris baru)

    return 0; // Menandakan program tamat dengan jayanya
}

/*
SAMPLE OUTPUT (Contoh Paparan):
================================
Masukkan panjang segi empat tepat: 5
Masukkan lebar segi empat tepat: 3
Luas segi empat tepat ialah: 15
================================
*/
