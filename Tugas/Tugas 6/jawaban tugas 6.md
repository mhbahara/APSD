# Tugas 6
## soal no 1
```cpp
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Struct untuk menyimpan data mahasiswa
struct Mahasiswa {
    int no;
    string nama;
    float nilaiUTS;
    float nilaiUAS;
    float nilaiAkhir;
    char nilaiHuruf;
};

int main() {
    int banyakData;

    // Input banyak data
    cout << "Masukkan banyak data mahasiswa: ";
    cin >> banyakData;

    // Vektor untuk menyimpan data mahasiswa
    vector<Mahasiswa> dataMahasiswa(banyakData);

    // Input data mahasiswa
    for (int i = 0; i < banyakData; ++i) {
        cout << "Data mahasiswa ke-" << i + 1 << ":\n";
        dataMahasiswa[i].no = i + 1;
        cout << "Nama Mahasiswa: ";
        cin.ignore(); // Mengabaikan newline character dari input sebelumnya
        getline(cin, dataMahasiswa[i].nama);
        cout << "Nilai UTS: ";
        cin >> dataMahasiswa[i].nilaiUTS;
        cout << "Nilai UAS: ";
        cin >> dataMahasiswa[i].nilaiUAS;
        // Perhitungan nilai akhir dan nilai huruf
        dataMahasiswa[i].nilaiAkhir = (dataMahasiswa[i].nilaiUAS * 0.4) + (dataMahasiswa[i].nilaiUTS * 0.6);
        if (dataMahasiswa[i].nilaiAkhir >= 80) {
            dataMahasiswa[i].nilaiHuruf = 'A';
        } else if (dataMahasiswa[i].nilaiAkhir >= 70) {
            dataMahasiswa[i].nilaiHuruf = 'B';
        } else if (dataMahasiswa[i].nilaiAkhir >= 56) {
            dataMahasiswa[i].nilaiHuruf = 'C';
        } else if (dataMahasiswa[i].nilaiAkhir >= 47) {
            dataMahasiswa[i].nilaiHuruf = 'D';
        } else {
            dataMahasiswa[i].nilaiHuruf = 'E';
        }
    }

    // Tampilkan tabel data mahasiswa
    cout << "\nTabel Nilai Mahasiswa:\n";
    cout << setw(4) << "No" << setw(20) << "Nama Mahasiswa" << setw(10) << "Nilai UTS" << setw(10) << "Nilai UAS"
         << setw(12) << "Nilai Akhir" << setw(12) << "Nilai Huruf" << endl;
    cout << setfill('-') << setw(68) << "-" << setfill(' ') << endl;
    for (int i = 0; i < banyakData; ++i) {
        cout << setw(4) << dataMahasiswa[i].no << setw(20) << dataMahasiswa[i].nama << setw(10)
             << dataMahasiswa[i].nilaiUTS << setw(10) << dataMahasiswa[i].nilaiUAS << setw(12) << fixed
             << setprecision(1) << dataMahasiswa[i].nilaiAkhir << setw(12) << dataMahasiswa[i].nilaiHuruf << endl;
    }

    return 0;
}

```

## Soal No 2

```cpp
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Struct untuk menyimpan data pegawai
struct Pegawai {
    int no;
    string nama;
    int jamKerja;
    int honorLembur;
    int totalHonor;
};

int main() {
    int banyakData;

    // Input banyak data
    cout << "Masukkan banyak data pegawai: ";
    cin >> banyakData;

    // Vektor untuk menyimpan data pegawai
    vector<Pegawai> dataPegawai(banyakData);

    // Input data pegawai
    for (int i = 0; i < banyakData; ++i) {
        cout << "Data pegawai ke-" << i + 1 << ":\n";
        dataPegawai[i].no = i + 1;
        cout << "Nama Pegawai: ";
        cin.ignore(); // Mengabaikan newline character dari input sebelumnya
        getline(cin, dataPegawai[i].nama);
        cout << "Jam Kerja: ";
        cin >> dataPegawai[i].jamKerja;
        // Hitung honor lembur dan total honor
        if (dataPegawai[i].jamKerja > 8) {
            dataPegawai[i].honorLembur = (dataPegawai[i].jamKerja - 8) * 5000;
            dataPegawai[i].totalHonor = 15000 + dataPegawai[i].honorLembur;
        } else {
            dataPegawai[i].honorLembur = 0;
            dataPegawai[i].totalHonor = 15000;
        }
    }

    // Tampilkan tabel data pegawai
    cout << "\nTabel Honor Pegawai:\n";
    cout << setw(4) << "No" << setw(15) << "Nama Pegawai" << setw(10) << "Jam Kerja" << setw(15) << "Honor Lembur"
         << setw(12) << "Total Honor" << endl;
    cout << setfill('-') << setw(56) << "-" << setfill(' ') << endl;
    for (int i = 0; i < banyakData; ++i) {
        cout << setw(4) << dataPegawai[i].no << setw(15) << dataPegawai[i].nama << setw(10) << dataPegawai[i].jamKerja
             << setw(15) << dataPegawai[i].honorLembur << setw(12) << dataPegawai[i].totalHonor << endl;
    }

    return 0;
}

```