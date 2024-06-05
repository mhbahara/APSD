#include <iostream>
#include <string>

using namespace std;

int main(){
    //deklarasi
    string Nama;
    int NilaiI, NilaiII, NilaiIII, Juara;
    float NilaiRata_rata;

    //input data
        cout << "---- PROGRAM HITUNG NILAI RATA-RATA ----" << endl;
        cout << "Nama Siswa : ";
        cin >> Nama;

    //imput nilai
        cout << "Nilai Pertandingan I : ";
        cin >> NilaiI;
        cout << "Nilai Pertandingan II : ";
        cin >> NilaiII;
        cout << "Nilai Pertandingan III : ";
        cin >> NilaiIII;

    //proses
        NilaiRata_rata = (NilaiI + NilaiII + NilaiIII) / 3;
        cout << "Nilai Rata-rata : " << NilaiRata_rata <<endl;

    //if
    if (NilaiRata_rata > 80) {Juara = 1;}

    if (NilaiRata_rata > 75, NilaiRata_rata <= 80) {Juara = 2;}

    if (NilaiRata_rata > 65, NilaiRata_rata <= 75) {Juara = 3;}

    //else
    else {Juara = 0;}

    //output
    cout << "Siswa yang bernama " << Nama <<endl;
    cout << "Memperoleh nilai rata-rata " << NilaiRata_rata;
    cout << " dan menjadi juara ke-" << Juara;
    cout << " dari hasil perlombaan yang diikutinya." <<endl;

return 0;
}

