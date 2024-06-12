# File Teks

### 13.1. Tahapan Dasar Operasi File

Sebelum anda bekerja dengan file, sebaiknya anda mengenal tahapan-tahapan terlebih dahulu, di antaranya adalah:

#### 13.1.1. Membuka File

Sebelum anda dapat membaca buku, seharusnya membuka buku terlebih dulu. Begitu juga halnya dengan file. Agar file tersebut dapat digunakan, file harus dibuka atau diaktifkan terlebih dulu.

Sebelum file dibuka, terlebih dulu kita membuat suatu objek dengan menggunakan perintah:

```cpp
ofstream nama_objek;
```

Setelah objek dibuat maka selanjutnya file dibuka dengan menggunakan perintah:

```cpp
nama_objek.open("nama_file");
```

Perintah ini akan membuat sebuah file baru bilamana di dalam disk belum ada file dengan nama tersebut. Apabila nama tersebut sudah ada maka isi dari file yang lama akan tertimpa oleh isi file yang baru.

Contoh:
```cpp
#include<iostream.h>
#include<fstream.h>
main()
{
    // Membuka File FILECPP.TXT
    ofstream cppku;
    cppku.open("FILECPP.TXT");
    // ...
    // ...
} 
```

Kedua perintah di atas dapat digabungkan menjadi lebih sederhana, yaitu sebagai berikut:

```cpp
#include<iostream.h>
#include<fstream.h>
main()
{ 
    // Membuka file FILECPP.TXT
    ofstream cppku("FILECPP.TXT");
    // ...
    // ...
}
```

Dengan bentuk yang lebih sederhana di atas, kontruktor dari objek cppku akan membuatkan objek file, dan langsung mengaktifkannya.

`Ofstream` merupakan suatu kelas yang disediakan untuk operasi keluaran. Jika ingin menggunakan `ofstream` ini, file header yang digunakan adalah `fstream.h`.

#### 13.1.2. Memproses File

Setelah file dibuka atau diafktifkan, selanjutnya anda bisa melakukan perekaman data ke dalam file. Berikut perintah yang digunakan untuk perekaman data ke dalam file.

```cpp
nama_objek << "...text..";
```

contoh:
```cpp
cppku << "Penggunaan File pada CPP " << endl;
cppku << "Pertama Kali ";
```

#### 13.1.3. Menutup File

Setelah file dibuka atau diaktifkan dan dilakukan pemrosesan, selanjutnya file tersebut harus ditutup. Berikut perintah yang digunakan untuk menutup file.

```cpp
nama_objek.close();
```

Contoh:
```cpp
cppku.close();
```

Berikut contoh lengkap penggunaan perintah-perintah diatas:

#### Contoh-1 //merekam atau membuat file teks
```cpp
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
main()
{
    ofstream cppku("FILECPP.TXT");
    cppku << "Penggunaan File pada CPP" << endl;
    cppku << "Pertama Kali " << endl;
    cppku.close(); 
    cout << "File Telah Direkan ...";
    getche();
}
```

Output yang akan dihasilkan program contoh-1 di atas adalah:

### 13.1.4. Membaca Isi File

Setelah data direkam kedalam file, anda bisa melihat isi dari file. Untuk melihat isi file, anda harus membuat suatu objek dengan menggunakan perintah:

```cpp
ifstream nama_objek;
```

Setelah objek dibuat maka selanjutnya file dibuka dengan menggunakan perintah:

```cpp
nama_objek.open("nama_file");
```

Contoh:

```cpp
#include<iostream.h>
#include<fstream.h>
Main()
{
    // Membuka file FILECPP.TXT
    ifstream cppku;
    cppku.open("FILECPP.TXT");
    // ...
    // ...
} 
```

Kedua perintah di atas dapat digabungkan sehingga menjadi lebih sederhana yaitu seperti berikut:

```cpp
ifstream cppku("FILECPP.TXT");
```

`Ifstream` merupakan suatu kelas yang disediakan untuk operasi keluaran. Jika ingin menggunakan `ifstream` ini, file header yang digunakan adalah `ifstream.h`. 

Pada pembacaan isi file, haruslah dilakukan pendeteksian terhadap akhir dari suatu file, fungsi yang digunakan untuk keperluan ini adalah `eof()`.

#### Contoh-2 //membaca isi file
```cpp
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
main()
{
    const int BACADATA = 100;
    char tampil[BACADATA];
    ifstream cppku("FILECPP.txt");
    while (!cppku.eof())
    {
        cppku.getline(tampil, BACADATA);
        cout << tampil << endl;
    }
    cppku.close();
    cout << "\nFile selesai dibaca …..";
    getche();
}
```

Fungsi `getline()` digunakan untuk membaca data hingga baris baru dideteksi, dan terus-menerus membaca data hingga keseluruh data.

Output yang akan dihasilkan program contoh-2 di atas adalah:


### 13.1.5. Menambah Isi File

Untuk menambah isi dari suatu file dilakukan dengan menggunakan perintah `ios::app`. Perintah ini, selain digunakan untuk menambah data jika file yang dibuka belum ada dalam disk, maka secara otomatis akan dibuatkan file yang baru. Perintah ini diletakkan pada fungsi `open()`, menjadi argumen kedua didalam fungsi `open()`. Berikut ini penulisan perintahnya:

```cpp
nama_objek.open("nama_file", ios::app);
```

#### Contoh-3 //menambah data ke file
```cpp
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
main()
{
    int i, byk;
    char text[10][25];
    ofstream cppku("FILECPP.TXT", ios::app);
    cout << "Jumlah baris yang akan ditambah : ";
    cin >> byk;
    for (i = 1; i <= byk; i++)
    {
        cout << "Teks Ke – " << i << " : ";
        gets(text[i]);
    }
    for (i = 1; i <= byk; i++)
    {
        cppku << text[i] << endl;
    }
    cppku.close();
    cout << "File sudah direkam ";
    getche();
}
```

Output yang dihasilkan contoh-3 diatas adalah:

Untuk melihat hasil penambahan pada FILECPP.txt, Anda dapat menjalankan program berikut:

```cpp
#include <iostream.h>
#include <conio.h>
#include <fstream.h>

int main() {
    ifstream file("FILECPP.TXT");
    char ch;
    while (!file.eof()) {
        file.get(ch);
        cout << ch;
    }
    file.close();
    return 0;
}
```

Program ini akan membaca dan menampilkan isi dari FILECPP.txt setelah penambahan data dilakukan. Anda dapat menjalankan program ini untuk melihat hasilnya.


### 13.2. Orientasi Objek pada operasi File

Sebelum membahas lebih lanjut orientasi objek pada operasi file ini, langkah baiknya
bila anda mengetahui beberapa modus operasi file.

- **ios::app**: Digunakan untuk membuka file dengan modus output. Modus operasi ini juga dapat digunakan untuk menambahkan data ke dalam file.
- **ios::ate**: Digunakan untuk membuka file dengan modus input/output. Modus operasi file ini secara otomatis akan meletakkan pointer pada akhir file.
- **ios::in**: Digunakan untuk membuka file dengan operasi input. Modus operasi file ini merupakan modus default yang dimiliki oleh ifstream.
- **ios::out**: Digunakan untuk membuka file dengan operasi output. Modus operasi file ini merupakan modus default yang dimiliki oleh ofstream.
- **ios::nocreate**: Digunakan untuk membuka file yang sudah ada dalam disk. Jika file yang akan dibuka tidak ada, maka tidak melaksanakan pembukaan file atau tidak membentuk file yang dimaksud.
- **ios::noreplace**: Digunakan untuk membuka atau membuat file yang baru. Jika file yang akan dibuka atau dibuat sudah ada, maka tidak melaksanakan pembukaan file atau tidak membentuk file yang dimaksud. Modus ini bisa dilaksanakan apabila digabungkan dengan ios::app atau ios::ate.
- **ios::trunc**: Digunakan untuk menghapus file yang sudah ada di dalam disk dan membuat file yang baru.
- **ios::binary**: Digunakan untuk membuka file dengan operasi input/output secara binary.

### 13.3. Merekam dan Membaca File Menggunakan Konsep OOP

Dalam bahasa C++, proses perekaman dan pembacaan file dapat dilakukan dengan bantuan konsep dari Object Oriented Programming (OOP) yang meliputi class, object, dan method agar tidak perlu membuatkan banyak file coding.

#### 13.3.1. Membuka File

Seperti yang sudah dibahas di atas, sebelum melakukan hal-hal lain, kita harus membuka file terlebih dahulu dan kemudian membuat suatu objek.

```cpp
ofstream file_buku("BUKU.DAT", ios::app);
```

Jika ingin menggunakan lebih dari satu modus pembukaan file maka harus menggunakan tanda | (vertical line). Berikut ini contoh penggunaannya.

```cpp
ofstream file_buku("BUKU.DAT", ios::nocreate | ios::app);
```

#### 13.3.2. Merekam Data

Perintah yang digunakan untuk merekam objek ke dalam file adalah fungsi `write()`. Bentuk perintah penulisan perekaman data ke dalam file adalah sebagai berikut:

```cpp
Nama_objek.write((char *)&nama_objek,sizeof(nama_objek));
```

Berikut contoh program pemasukan data dan disimpan pada file BUKU.DAT

```cpp
#include <iostream.h>
#include <fstream.h>
#include <conio.h> 
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

class Buku {
 private :
 char kode[10], judul[35], pengarang[25];
 int jml;
 public :
 void entri_buku();
};

void rekam_buku(Buku buku);

void main() {
 Buku buku_perpustakaan; //deklarasi objek
 rekam_buku(buku_perpustakaan);
}

void Buku::entri_buku() {
 char tmp[15];
 clrscr();
 cout << " << Merekam Data Buku >>" << endl << endl;
 cout << " Kode : ";
 cin.getline(kode, sizeof(kode));
 cout << " Judul : ";
 cin.getline(judul, sizeof(judul));
 cout << " Pengarang : ";
 cin.getline(pengarang, sizeof(pengarang));
 cout << " Jumlah : ";
 cin.getline(tmp, sizeof(tmp));
 jml = atoi(tmp); //perubahan char ke integer
}

void rekam_buku(Buku buku) {
 char jwb;
 //buat file dan data direkam
 ofstream file_buku("BUKU.DAT", ios::app);
 for( ; ; ) {
 buku.entri_buku();
 //merekam data buku
 file_buku.write((char *)&buku, sizeof(buku));
 cout << endl << " Input data lagi (Y/T) ?";
 do {
 jwb = toupper(getch());
 } while (!((jwb == 'Y') || (jwb == 'T')));
 cout << jwb << endl;
 if (jwb == 'T') break;
 }
 file_buku.close();
 getch();
}
```

Output yang dihasilkan contoh-4 di atas adalah:
```
[Output dari program akan ditempatkan di sini]
```
------------------------------------------


### 13.3.3. Menampilkan Data

Perintah yang digunakan untuk menampilkan objek ke dalam file adalah fungsi `read()`. Bentuk perintah penulisan pembacaan data ke dalam file adalah sebagai berikut:

```cpp
Nama_objek.read((char *)&nama_objek, sizeof(nama_objek));
```

Berikut contoh program pemasukan data dan disimpan pada file BUKU.DAT

```cpp
#include <iostream.h>
#include <fstream.h>
#include <conio.h>

class Buku {
 private :
 char kode[10], judul[35], pengarang[25];
 int jml;
 public :
 void info_buku();
};

void baca_buku(Buku buku);

void main() {
 Buku buku_perpustakaan; //deklarasi objek
 baca_buku(buku_perpustakaan);
}

void Buku::info_buku() {
 gotoxy(5,wherey());cout<<kode;
 gotoxy(15,wherey());cout<<judul;
 gotoxy(36,wherey());cout<<pengarang;
 gotoxy(53,wherey());cout<<jml<<endl;
}

void baca_buku(Buku buku) {
 ifstream file_buku("BUKU.DAT");
 gotoxy(21,2);cout<<" << Daftar Buku >>"<<endl<<endl
 <<" ======================================\n"
 <<" Kode Buku Judul Buku Pengarang Jumlah \n"
 <<" ======================================\n";
 //membaca data buku
 file_buku.read((char *)&buku, sizeof(buku));
 while (!file_buku.eof()) {
 buku.info_buku();
 //membaca seluruh data buku yang telah diinput
 file_buku.read((char *)&buku,sizeof(buku));
 }
 file_buku.close();
 cout<<" ===================================\n";
 getch();
}
```

Output yang dihasilkan contoh-5 di atas adalah:
```
[Output dari program akan ditempatkan di sini]
```
------------------------------------------


### 13.4. Merekam dan Membaca Data ke File

Dari beberapa contoh di atas, dapat pula dilakukan pendefinisian proses perekaman dan sekaligus pembacaan data ke file. Berikut contoh coding untuk merekam dan membaca data ke file:

```cpp
#include <iostream.h>
#include <fstream.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

class Mhs {
 private :
 char nm[20],nh;
 float uts, uas, na;
 public :
 void entri_mhs();
 void info_mhs();
};

void rekam_mhs(Mhs mhs);
void baca_mhs(Mhs mhs);

void main() {
 Mhs nilai_mhs;
 rekam_mhs(nilai_mhs);
 baca_mhs(nilai_mhs);
}

void Mhs::entri_mhs() {
 char t[15],a[15];
 clrscr();
 cout<<" << Data Nilai Mhs >>"<<endl<<endl;
 cout<<" Nama Mhs : ";
 cin.getline(nm, sizeof(nm));
 cout<<" Nilai UTS : ";
 cin.getline(t, sizeof(t));
 uts=atof(t);
 cout<<" Nilai UAS : ";
 cin.getline(a, sizeof(a));
 uas=atof(a);
 na=(uts*0.4)+(uas*0.6);
 if(na>=80 && na<=100)
 nh='A';
 else if(na>=70)
 
```


