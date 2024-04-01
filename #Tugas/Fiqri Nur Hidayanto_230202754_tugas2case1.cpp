#include <iostream>
#include <conio.h> // Untuk fungsi getch()
#include <cstdlib> // Untuk fungsi system("cls")

using namespace std;

double hitungRataRata(double tugas1, double tugas2, double tugas3) {
    return (tugas1 + tugas2 + tugas3) / 3;
}

int main() {
    // Variabel untuk menyimpan data siswa
    string NIM, NAMA;
    double nilaiTugas1, nilaiTugas2, nilaiTugas3;

    // Layar Masukkan
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nim Siswa : ";
    cin >> NIM;
    cout << "Nama Siswa : ";
    cin.ignore(); // Membersihkan buffer
    getline(cin, NAMA);
    cout << "Nilai Tugas I : ";
    cin >> nilaiTugas1;
    cout << "Nilai Tugas II : ";
    cin >> nilaiTugas2;
    cout << "Nilai Tugas III : ";
    cin >> nilaiTugas3;

    // Menghitung rata-rata
    double rataRata = hitungRataRata(nilaiTugas1, nilaiTugas2, nilaiTugas3);

    // Layar Keluaran menggunakan clrscr
    system("cls");

    // Menampilkan hasil
    cout << "Nim " << NIM << " Siswa yang bernama " << NAMA << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata << " dari hasil tugas yang diikutinya." << endl;

    // Menahan tampilan
   // cout << "Tekan tombol apa saja untuk keluar...";
    getch(); // Menunggu tombol ditekan

    return 0;
}
