#include <iostream>

using namespace std;

int main () {
    // Deklarasi variabel
    string Nama;
    int NIM, Nilai_I, Nilai_II, Nilai_III, Nilai_Rata2;

    //Input Data Siswa
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;

    cout << "Nim Siswa : ";
    cin >> NIM;
    
    cout << "Nama Siswa : ";
    cin >> Nama;

    //Input Nilai Tugas
    cout << "Nilai Tugas I : ";
    cin >> Nilai_I;

    cout << "Nilai Tugas II : ";
    cin >> Nilai_II;

    cout << "Nilai Tugas III : ";
    cin >> Nilai_III;

    //Penghitungan nilaiRata_rata
    Nilai_Rata2 = (Nilai_I + Nilai_II + Nilai_III) / 3;

    //Output
    cout << "NIM " << NIM;
    cout << ". Siswa yang bernama " << Nama << endl;
    cout << "Memperoleh nilai rata-rata " << Nilai_Rata2; 
    cout << " dari hasil tugas yang diikutinya." << endl;

    return 0;
}
