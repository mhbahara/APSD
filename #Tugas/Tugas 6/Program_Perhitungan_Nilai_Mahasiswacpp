#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

struct Mahasiswa { // Buat nyimpen data Mahasiswa
    int No;
    string Nama;
    char Nilai_Huruf;
    float Nilai_UTS;
    float Nilai_UAS;
    float Nilai_Akhir;
};

int main () {
    int Jumlah_Data;

    // Input Jumlah Data Mahasiswa
    cout << "Masukkan Banyak Data Mahasiswa : ";
    cin >> Jumlah_Data;

    // Vektor buat nyimpan data Mahasiswa
    vector <Mahasiswa> Data_Mahasiswa (Jumlah_Data);

    // Input data Mahasiswanya
    for (int a = 0; a < Jumlah_Data; ++a) {
        cout << "Data Mahasiswa ke-" << a + 1 << " :\n";
        Data_Mahasiswa[a].No = a + 1;

        cout << "Nama Mahasiswa : ";
        cin.ignore();
        getline(cin, Data_Mahasiswa[a].Nama);

        cout << "Nilai UTS : ";
        cin >> Data_Mahasiswa[a].Nilai_UTS;

        cout << "Nilai UAS : ";
        cin >> Data_Mahasiswa[a].Nilai_UAS;

        // Hitung Nilai Akhir dan Nilai Huruf
        Data_Mahasiswa[a].Nilai_Akhir = (Data_Mahasiswa[a].Nilai_UTS * 0.6 + Data_Mahasiswa[a].Nilai_UAS * 0.4);
        if (Data_Mahasiswa[a].Nilai_Akhir >= 80) {
            Data_Mahasiswa[a].Nilai_Huruf = 'A';
        } else if (Data_Mahasiswa[a].Nilai_Akhir >= 70) {
            Data_Mahasiswa[a].Nilai_Huruf = 'B';            
        } else if (Data_Mahasiswa[a].Nilai_Akhir >= 56) {
            Data_Mahasiswa[a].Nilai_Huruf = 'C';
        } else if (Data_Mahasiswa[a].Nilai_Akhir >= 47) {
            Data_Mahasiswa[a].Nilai_Huruf = 'D';
        } else {
            Data_Mahasiswa[a].Nilai_Huruf = 'E';
        }
    }

    // Output Tabel Data Mahasiswa
    cout << "\nTabel Nilai Mahasiswa\n";
    cout << "|  No  |" << " Nama Mahasiswa |" << " Nilai UTS |" << " Nilai UAS |" << " Nilai Akhir |" << " Nilai Huruf |" << endl;
    cout << setfill ('-') << setw(10) << setfill (' ') << endl;
    for (int a = 0; a < Jumlah_Data; ++a) {
        cout << setw(4) << Data_Mahasiswa[a].No << setw(15) << Data_Mahasiswa[a].Nama << setw(12) << Data_Mahasiswa[a].Nilai_UTS << setw(12) << Data_Mahasiswa[a].Nilai_UAS << setw(14) << fixed << setprecision(1) << Data_Mahasiswa[a].Nilai_Akhir << setw(14) << Data_Mahasiswa[a].Nilai_Huruf << endl;
    
    }
    return 0;
}
