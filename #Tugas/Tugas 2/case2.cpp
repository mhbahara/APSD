#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi Variabel
    string Nama;
    int Nilai_Keaktifan, Nilai_Tugas, Nilai_Ujian;
    float Total_Nilai_Keaktifan, Total_Nilai__Tugas, Total_Nilai_Ujian, Nilai_Akhir;

    //Input Data Siswa
    cout << "===== Program Hitung Nilai Akhir =====" << endl;
    cout << "Nama Siswa : ";
    cin >> Nama;

    //Input Data Nilai Siswa
    cout << "Nilai Keaktifan : ";
    cin >> Nilai_Keaktifan;

    cout << "Nilai Tugas : ";
    cin >> Nilai_Tugas;

    cout << "Nilai Ujian : ";
    cin >> Nilai_Ujian;

    //Mencari Nilai Murni
    Total_Nilai_Keaktifan = Nilai_Keaktifan * 0.2;
    Total_Nilai__Tugas = Nilai_Tugas * 0.5;
    Total_Nilai_Ujian = Nilai_Ujian * 0.3;

    cout << "Nilai Murni Keaktifan : " << Total_Nilai_Keaktifan << endl;
    cout << "Nilai Murni Tugas : " << Total_Nilai__Tugas << endl;
    cout << "Nilai Murni Ujian : " << Total_Nilai_Ujian << endl;

    //Mencari Nilai Akhir
    Nilai_Akhir = Total_Nilai_Keaktifan + Total_Nilai__Tugas + Total_Nilai_Ujian;

    //Output
    cout << "Siswa yang bernama " << Nama << endl;
    cout << "Dengan Nilai Persentasi Yang Dihasilkan. ";
    cout << "Nilai Keaktifan * 20% : " << Total_Nilai_Keaktifan << endl;
    cout << "Nilai Tugas * 50% : " << Total_Nilai__Tugas << endl;
    cout << "Nilai Ujian * 30% : " << Total_Nilai_Ujian << endl;
    cout << "Jadi Siswa yang bernama " << Nama;
    cout << " memperoleh nilai akhir sebesar " << Nilai_Akhir;

    return 0;

}
