# Tugas 6

## perhatikan kode berikut:
```cpp
#include <iostream>
using namespace std;

struct Mahasiswa {
    char nim[5];
    char nama[15];
    float nilai;
};

int main() {
    Mahasiswa mahasiswa;

    cout << "Masukkan NIM: ";
    cin >> mahasiswa.nim;
    cout << "Masukkan Nama: ";
    cin >> mahasiswa.nama;
    cout << "Masukkan Nilai Akhir: ";
    cin >> mahasiswa.nilai;

    cout << "\nData yang diinputkan adalah:\n";
    cout << "NIM = " << mahasiswa.nim << endl;
    cout << "Nama = " << mahasiswa.nama << endl;
    cout << "Nilai Akhir = " << mahasiswa.nilai << endl;

    return 0;
}
```
dengan mengembangkan kode di atas kerjakan soal berikut:

### Tugas 1: Program Perhitungan Nilai Mahasiswa

1. Buatlah program untuk menghitung nilai hasil dari nilai UTS dan UAS serta menampilkan nilai huruf yang akan didapat.

#### Ketentuan:
- Masukan banyak data yang diinginkan untuk menentukan banyak data yang akan diproses.
- Buatlah perhitungan untuk menghitung nilai hasil.
  - Nilai Hasil = (Nilai UAS * 40%) + (Nilai UTS * 60%)
  - Jika Nilai Huruf = A, maka Nilai Hasil >= 80
  - Jika Nilai Huruf = B, maka Nilai Hasil >= 70
  - Jika Nilai Huruf = C, maka Nilai Hasil >= 56
  - Jika Nilai Huruf = D, maka Nilai Hasil >= 47
  - Jika Nilai Huruf = E, maka Nilai Hasil < 47
- Tampilan akhir adalah sebuah tabel.

#### Contoh Tabel:
```
| No | Nama Mahasiswa | Nilai UTS | Nilai UAS | Nilai Akhir | Nilai Huruf |
|----|----------------|-----------|-----------|-------------|-------------|
| 1  | John Doe       | 75        | 85        | 80.0        | B           |
| 2  | Jane Smith     | 65        | 70        | 67.0        | C           |
```

### Tugas 2: Program Perhitungan Honor Pegawai Honorer

2. Buatlah program untuk menghitung honor pegawai honorer dari suatu perusahaan dengan menghitung kelebihan jumlah jam kerja pegawai tersebut. 

#### Ketentuan:
- Masukan banyak data yang diinginkan untuk menentukan banyak data yang akan diproses.
- Hitung honor lembur dengan ketentuan lembur dihitung dari kelebihan jam kerja pegawai tersebut.
  - Jam kerja normal pegawai sebanyak 8 jam.
  - Jika jumlah jam kerja lebih dari 8 jam, maka kelebihan jam kerja dikalikan dengan Rp. 5000 dan ditambah dengan honor harian.
  - Jika jumlah jam kerja hanya 8 jam, pegawai hanya mendapat honor harian saja.

#### Contoh Tabel:
```
| No | Nama Pegawai | Jam Kerja | Honor Lembur | Total Honor |
|----|--------------|-----------|--------------|-------------|
| 1  | John Doe     | 9         | 16500        | 31500       |
| 2  | Jane Smith   | 8         | 15000        | 15000       |
```

