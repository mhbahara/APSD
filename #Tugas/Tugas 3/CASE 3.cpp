#include <iostream>
#include <string>

using namespace std;

int main () {
//deklarasi
string Nama, Pendidikan;
int JumlahJam, Gaji = 300000, Honor;
float TunjanganGolongan, TunjanganPendidikan;

    //input
    cout << "---- PROGRAM HITUNG GAJI KARYAWAN KONTRAK ----" <<endl;
    cout << "Nama Karyawan : ";
    cin >> Nama;
    cout << "Golongan Jabatan : ";
    cin >> TunjanganGolongan;
    cout << "Jumlah Jam Kerja : ";
    cin >> JumlahJam;
    cout << "Pendidikan : ";
    cin >> Pendidikan;

    //if tunjangan jabatan
    if (TunjanganGolongan = 1) 
    {TunjanganGolongan = Gaji * 0.05;}

    if (TunjanganGolongan = 2)
    {TunjanganGolongan = Gaji * 0.1;}

    if (TunjanganGolongan = 3)
    {TunjanganGolongan = Gaji * 0.15;}

    //else
    else {TunjanganGolongan = 0;}

    //if tunjangan pendidikan
    if (Pendidikan == "SMA"){
    TunjanganPendidikan = Gaji * 0.025;
    cout << "Tunjangan Pendidikan Rp " <<TunjanganPendidikan <<endl;
    }

    else if (Pendidikan == "D1")
    {TunjanganPendidikan = Gaji * 0.05;
    cout << "Tunjangan Pendidikan Rp " <<TunjanganPendidikan <<endl;
    }

    else if (Pendidikan == "D3")
    {TunjanganPendidikan = Gaji * 0.2;
    cout << "Tunjangan Pendidikan Rp " <<TunjanganPendidikan <<endl;
    }

    else if (Pendidikan == "S1")
    {TunjanganPendidikan = Gaji * 0.3;
    cout << "Tunjangan Pendidikan Rp " <<TunjanganPendidikan <<endl;
    }

    //else
    else {TunjanganPendidikan = 0;}

    //if honor lembur
    if (JumlahJam > 8) 
    {JumlahJam = (JumlahJam - 8) * 3500;}

    //else
    else {JumlahJam = 0;}

    //proses
    Honor = (Gaji + TunjanganGolongan + TunjanganPendidikan + JumlahJam);

    //output
    cout << "Karyawan yang bernama " << Nama <<endl;
    cout << "Tunjangan Jabatan Rp " << TunjanganGolongan <<endl;
    cout << "Tunjangan Pendidikan Rp " << TunjanganPendidikan <<endl;
    cout << "Honor Lembur Rp " << JumlahJam <<endl;
    cout << "Jadi Total Gaji Karyawan Kontrak adalah Rp " <<Honor <<endl;

return 0;

}