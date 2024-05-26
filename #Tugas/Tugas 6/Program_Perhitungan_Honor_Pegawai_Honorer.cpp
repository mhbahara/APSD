#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

struct Pegawai_Honorer { // Buat nyimpen Data Pegawai
    int No;
    string Nama;
    int Jam_Kerja;
    int Kelebihan_Jam_Kerja;
    int Honor_Harian;
    int Honor_Lembur;
    int Total_Honor;
};

int main () {
    int Jumlah_Data;

    // Input Jumlah Data Pegawai
    cout << "Masukkan Banyak Data Pegawai : ";
    cin >> Jumlah_Data;

    // Vektor buat nyimpan data Pegawai
    vector <Pegawai_Honorer> Data_Pegawai (Jumlah_Data);

    // Input data Pegawainya
    for (int a = 0; a < Jumlah_Data; ++a) {
        cout << "Data Pegawai ke-" << a + 1 << " :\n";
        Data_Pegawai[a].No = a + 1;

        cout << "Nama Pegawai : ";
        cin.ignore();
        getline(cin, Data_Pegawai[a].Nama);

        cout << "Jumlah Jam Kerja : ";
        cin >> Data_Pegawai[a].Jam_Kerja;

        cout << "Kelebihan Jam Kerja : ";
        cin >> Data_Pegawai[a].Kelebihan_Jam_Kerja;

        cout << "Honor Harian yang Diperoleh : ";
        cin >> Data_Pegawai[a].Honor_Harian;

        // Hitung Honor Lembur dan Total Honor Lembur
        if (Data_Pegawai[a].Kelebihan_Jam_Kerja >= 1) {
            Data_Pegawai[a].Honor_Lembur = Data_Pegawai[a].Kelebihan_Jam_Kerja * 5000;
        } else {
            Data_Pegawai[a].Honor_Lembur = 0;
        }
        Data_Pegawai[a].Total_Honor = (Data_Pegawai[a].Honor_Harian + Data_Pegawai[a].Honor_Lembur);
    }

    cout << "\nTabel Honor Pegawai\n";
    cout << "|  No  |" << " Nama Pegawai |" << " Jam Kerja |" << " Honor Lembur |" << " Total Honor |" << endl;
    cout << setfill ('-') << setw(10) << setfill (' ') << endl;
    for (int a = 0; a < Jumlah_Data; ++a) {
        cout << setw(4) << Data_Pegawai[a].No << setw(15) << Data_Pegawai[a].Nama << setw(12) << Data_Pegawai[a].Jam_Kerja << setw(12) << Data_Pegawai[a].Honor_Lembur << setw(14) << fixed << setprecision(1) << Data_Pegawai[a].Total_Honor << endl;   
    }

    return 0;

}
