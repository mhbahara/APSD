#include<iostream>
#include<string>

using namespace std;

int main(){
    //deklarasi
    string Nama, Grade;
    int NilaiKeaktifan, NilaiTugas, NilaiUjian;
    float NilaiAkhir;

    //input data
        cout << "---- HITUNG NILAI AKHIR ----" << endl;
        cout << "Nama Siswa : ";
        cin >> Nama;

    //input nilai
        cout << "Nilai Keaktifan  : ";
        cin >> NilaiKeaktifan;
        cout << "Nilai Tugas   : ";
        cin >> NilaiTugas;
        cout << "Nilai Ujian : ";
        cin >> NilaiUjian;

    //proses
        NilaiKeaktifan = NilaiKeaktifan * 0.2;
        NilaiTugas = NilaiTugas * 0.3;
        NilaiUjian = NilaiUjian * 0.5;
        NilaiAkhir = (NilaiKeaktifan + NilaiTugas + NilaiUjian);

    //if
        if (NilaiAkhir > 80, NilaiAkhir <= 100) 
        {Grade = 'A';}

        if (NilaiAkhir > 70, NilaiAkhir <= 80) 
        {Grade = 'B';}

        if (NilaiAkhir > 56, NilaiAkhir <= 70) 
        {Grade = 'C';}

        if (NilaiAkhir > 46, NilaiAkhir <= 56) 
        {Grade = 'D';}
    
    //else
        else {Grade = 'E';}
    
    //output
        cout << "Siswa yang bernama " <<Nama <<endl;
        cout << "Dengan Nilai Persentasi Yang dihasilkan." <<endl;
        cout << "Nilai Keaktifan * 20% : " <<NilaiKeaktifan <<endl;
        cout << "Nilai Tugas * 30% : " <<NilaiTugas <<endl;
        cout << "Nilai Ujian * 50% : " <<NilaiUjian <<endl; 
        cout << "Jadi Siswa yang bernama " <<Nama; 
        cout << " memperoleh nilai akhir sebesar " <<NilaiAkhir;
        cout << " dengan grade " <<Grade; 

    return 0;
}
