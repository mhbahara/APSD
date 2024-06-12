# Object Oriented Programming (OOP)

## 1. Pengertian OOP
Object Oriented Programming atau yang lebih dikenal dengan OOP adalah pemrograman yang menitikberatkan kepada objek-objek untuk menyelesaikan tugas atau proses dari program tersebut (Sianipar, 2012). Penitikberatkan ini dimaksudkan adanya interaksi pengiriman nilai, pesan, atau pernyataan antar objek (Frieyadie, 2006). Kemudian objek yang merespon hasil dari interaksi tersebut akan membentuk suatu tindakan atau aksi (metode) (Stroustrup, 2013).

### Class
Class merupakan gambaran atau abstraksi karakter dan sifat dari suatu objek. Class juga dapat mendefinisikan ciri dan perilaku objek tersebut.

### Object
Object (objek) adalah suatu data atau entitas yang berwujud maupun tidak berwujud, memiliki sifat (karakteristik) tertentu sesuai dengan kondisi atau status dari penggunaannya. Data atau entitas di dalam pemrograman dapat disebut dengan blok fungsi.

Contoh: Pensil adalah suatu objek yang memiliki atribut (karakter) jenis, warna, panjang, dan lain-lain.

### Methode
Metode merupakan tata cara objek tersebut diperlakukan, atau penggunaan atau manfaat dari objek tersebut.

Contoh: Pensil juga memiliki metode (perilaku) seperti diruncingkan, digunakan, dan lain-lain.

## 1.1. Keuntungan Penggunaan OOP
Adapun keuntungan atau manfaat dari penggunaan OOP adalah:

1. **Natural**:  
   OOP dapat melakukan pendekatan terhadap objek yang menggambarkan segala sesuatu yang nyata, seperti sifat suatu benda maupun kegunaan dari benda tersebut.

2. **Modular**:  
   Objek yang sudah dibentuk dapat dikelompokkan kembali dengan objek-objek yang lain, seperti kelompok alat tulis yang dapat dikelompokkan kembali dengan kelompok pensil, kelompok buku, dan lain-lain.

3. **Mudah diperbaharui**:  
   Dikarenakan sifat jangkauan dari objek memiliki bagian private dan public, maka jika bagian private ingin digunakan pada objek-objek lain dapat diperbaharui dengan menempatkan objek lain tersebut di bagian public.

4. **Dapat didaur ulang**:  
   Suatu objek yang telah didefinisikan baik jenis, bentuk, ciri, maupun perilaku dapat didefinisikan kembali dengan objek yang lain. Misalkan objek rumah yang memiliki ciri umum ada pintunya, jendelanya, atapnya, temboknya, dan lain-lain, dapat didefinisikan kembali ciri-ciri tersebut dengan menyebutkan cirinya masing-masing seperti temboknya yang memiliki ciri jenisnya, ketebalannya, warna catnya, dan lain-lain.

   

## 1.2. Tata Cara Penggunaan Pemrograman Berbasis Objek
1. Fungsi dan data menjadi satu kesatuan yang disebut objek.
2. Objek-objek dalam OOP bersifat aktif.
3. Cara pandang: program bukan urut-urutan instruksi tapi diselesaikan oleh objek-objek yang bekerjasama untuk menyelesaikan masalah.

### Bentuk umum dari kelas
```cpp
class class_name {
private:
    data element_class;
    method;
public:
    data element_class;
    method;
    protype function;
};
```

### Deklarasi Objek
Contoh deklarasi:
```cpp
class motor {
    char merk[50];
    float harga;
    int stok;
};

motor sport;
```

Pernyataan di atas digunakan untuk mendefinisikan variabel bernama `sport`. Pada C++, variabel seperti `sport` berkedudukan sebagai variabel kelas yang biasa disebut dengan objek. Pada sebuah kelas, item-item di dalamnya bisa bersifat private atau public. Secara default, semua item di dalam kelas bersifat private. Jadi tanpa menuliskan kata kunci private, semua item di dalam kelas sudah private.

### A. Public pada kelas
Public menyatakan bahwa deklarasi variabel atau item-item yang ada di dalam kelas dapat diakses dari luar kelas.

#### Contoh-1: Penggunaan public pada class
```cpp
#include <iostream.h>
#include <conio.h>

void garis() {
    cout << "==============================\n";
}

class siswa {
public:
    char nis[9], nama[20];
    float nilai;
};

void main() {
    clrscr();
    siswa sekolah;
    garis();
    cout << endl;
    cout << "\t Program Nilai Siswa" << endl
         << "\t -------------------" << endl;
    cout << " Input NIS = "; cin >> sekolah.nis;
    cout << " Input Nama Siswa = "; cin >> sekolah.nama;
    cout << " Input Nilai Akhir = "; cin >> sekolah.nilai;
    clrscr();
    garis();
    cout << endl;
    cout << "\t Nilai Siswa" << endl
         << "\t ------------" << endl << endl
         << " NIS = " << sekolah.nis << endl
         << " Nama Siswa = " << sekolah.nama << endl
         << " Nilai Akhir = " << sekolah.nilai << endl;
    garis();
    getch();
}
```

Output yang dihasilkan dari program contoh-1 di atas adalah:
```
==============================

        Program Nilai Siswa
        -------------------
 Input NIS = 123456789
 Input Nama Siswa = John Doe
 Input Nilai Akhir = 95
==============================

        Nilai Siswa
        ------------

 NIS = 123456789
 Nama Siswa = John Doe
 Nilai Akhir = 95
==============================
```

### B. Private pada Kelas
Private digunakan pada kelas untuk memproteksi anggota-anggota tertentunya agar tidak dapat diakses dari luar kelas secara langsung.

#### Contoh-2: Penggunaan private pada class
```cpp
#include <conio.h>
#include <iostream.h>
#define pi 3.14

class tabung {
private:
    int j, t;
    float v, k;
public:
    tabung();
    void keluaran();
};

void main() {
    clrscr();
    tabung s;
    s.keluaran();
    getch();
}

tabung::tabung() {
    cout << "\n Menghitung Tabung" << endl
         << " -----------------" << endl << endl;
    cout << " Masukan Jari-jari = "; cin >> j;
    cout << " Masukan Tinggi = "; cin >> t;
    v = (pi * j * j) * t;
    k = (2 * (pi * 2 * j)) + t;
}

void tabung::keluaran() {
    cout << endl
         << " Volume Tabung = " << v << endl
         << " Keliling Tabung = " << k << endl;
}
```

Output yang dihasilkan dari program contoh-2 di atas adalah:
```
 Menghitung Tabung
 -----------------

 Masukan Jari-jari = 5
 Masukan Tinggi = 10

 Volume Tabung = 785
 Keliling Tabung = 42.8
```

### 2. Konstruktor
Konstruktor (constructor) merupakan suatu fungsi dari anggota suatu kelas yang memiliki nama yang sama dengan nama kelas fungsi itu berada. Konstruktor ini digunakan untuk mengalokasikan ruang untuk suatu objek dan untuk memberikan nilai awal (Stroustrup, 2013).

Berikut contoh pendeklarasian suatu konstruktor di dalam sebuah kelas:

```cpp
class hitung {
private:
    int a;
    int b;
public:
    int inta();
    int intb();
    hitung(int mudah); // deklarasi constructor
};
```

#### Contoh-3: Konstruktor
```cpp
#include <conio.h>
#include <iostream.h>

class bilangan {
private:
    int bulat;
    double nyata;
public:
    bilangan(); // konstruktor
    void info();
};

void main() {
    clrscr();
    bilangan a;
    a.info();
    bilangan b;
    b.info();
    getch();
}

bilangan::bilangan() {
    cout << "\n Konstruktor dijalankan ... " << endl;
    bulat = 5;
    nyata = 3.6;
}

void bilangan::info() {
    cout << "\n Jenis Bilangan: " << endl
         << " Bulat = " << bulat << endl
         << " Nyata = " << nyata << endl;
}
```

Output yang dihasilkan dari program contoh-3 di atas adalah:
```
 Konstruktor dijalankan ...
 Jenis Bilangan: 
 Bulat = 5
 Nyata = 3.6

 Konstruktor dijalankan ...
 Jenis Bilangan: 
 Bulat = 5
 Nyata = 3.6
```

### 3. Destruktor

Destruktor merupakan suatu fungsi anggota yang dijalankan secara otomatis manakala suatu objek akan terbebas dari memori karena lingkup keberadaannya telah menyelesaikan tugasnya (Stroustrup, 2013). Destruktor harus mempunyai nama yang sama dengan kelas dan diawali karakter tilde (~) atau karakter tak terhingga. Destruktor digunakan secara khusus manakala suatu objek menggunakan memori dinamis selama keberadaannya dan kemudian melepaskan memori itu setelah tidak menggunakannya lagi.

#### Contoh-4: Destruktor

```cpp
#include <conio.h>
#include <iostream.h>
#include <string.h>

class motor {
private:
    char *merk;
    float cc_mesin;
    long harga;
public:
    motor(char *nama, float cc, long hrg); // konstruktor
    ~motor(); // destruktor
    void keterangan();
};

void main() {
    clrscr();
    motor sport("Honda CBR", 500, 30500000);
    motor matic("Honda Vario", 125, 14500000);
    sport.keterangan();
    matic.keterangan();
    getch();
}

motor::motor(char *nama, float cc, long hrg) {
    merk = new char[25]; // merubah data karakter menjadi string
    strcpy(merk, nama);
    cc_mesin = cc;
    harga = hrg;
}

motor::~motor() {
    delete[] merk; // menghapus memori karakter pada merk
}

void motor::keterangan() {
    cout << "\n Informasi Motor:" << endl
         << " Merk = " << merk << endl
         << " CC Mesin = " << cc_mesin << endl
         << " Harga = " << harga << endl << endl;
}
```

Output yang dihasilkan dari program contoh-4 di atas adalah:

```
 Informasi Motor:
 Merk = Honda CBR
 CC Mesin = 500
 Harga = 30500000

 Informasi Motor:
 Merk = Honda Vario
 CC Mesin = 125
 Harga = 14500000
```

### 4. Array pada Kelas

Anggota dari suatu kelas dapat pula berupa array. Berikut ini contoh anggota dari suatu kelas yang berupa array.

#### Contoh-5: Class dengan Array & Fungsi

```cpp
#include <conio.h>
#include <iostream.h>

class kerja {
public:
    char nik[10], nm[25];
    int jam;
    double total;
    float lembur(int l);
};

main() {
    int x, y, a = 1, b = 1;
    double grand = 0;
    kerja kary[15];

    cout << endl << "Jumlah Data :";
    cin >> y;
    
    for (x = 0; x < y; x++) {
        cout << endl << " Data Ke-:" << a++ << endl;
        cout << " NIK :";
        cin >> kary[x].nik;
        cout << " Nama Karyawan :";
        cin >> kary[x].nm;
        cout << " Jumlah Jam :";
        cin >> kary[x].jam;
    }
    
    clrscr();
    gotoxy(14, 3);
    cout << "Daftar Gaji Mingguan\n";
    gotoxy(16, 4);
    cout << "Karyawan Honorer\n";
    cout << " -------------------------------------------------\n"
         << " No. NIK Nama Jumlah Upah Total\n"
         << " Karyawan Jam Lembur Gaji\n"
         << " -------------------------------------------------\n";
         
    for (x = 0; x < y; x++) {
        gotoxy(3, wherey());
        cout << b++ << ".";
        gotoxy(7, wherey());
        cout << kary[x].nik;
        gotoxy(15, wherey());
        cout << kary[x].nm;
        gotoxy(30, wherey());
        cout << kary[x].jam;
        gotoxy(36, wherey());
        cout << kary[x].lembur(kary[x].jam);
        kary[x].total = (40 * 20000) + kary[x].lembur(kary[x].jam);
        gotoxy(44, wherey());
        cout << kary[x].total << endl;
        grand += kary[x].total;
    }
    
    cout << " -------------------------------------------------\n";
    cout << " Total Keseluruhan Karyawan :";
    gotoxy(44, wherey());
    cout << grand << endl;
    getch();
}

float kerja::lembur(int l) {
    if (l > 40)
        return (l - 40) * 30000;
    else 
        return 0;
}
```

Output yang dihasilkan dari program contoh-5 di atas adalah: 

```
Jumlah Data : 3

 Data Ke-: 1
 NIK : 123456
 Nama Karyawan : John
 Jumlah Jam : 45

 Data Ke-: 2
 NIK : 789012
 Nama Karyawan : Jane
 Jumlah Jam : 38

 Data Ke-: 3
 NIK : 345678
 Nama Karyawan : Bob
 Jumlah Jam : 50

 Daftar Gaji Mingguan
 Karyawan Honorer
 -------------------------------------------------
 No. NIK       Nama            Jumlah    Upah       Total
                Karyawan        Jam       Lembur     Gaji
 -------------------------------------------------
 1. 123456    John            45        150000     950000
 2. 789012    Jane            38         0         800000
 3. 345678    Bob             50        300000    1100000
 -------------------------------------------------
 Total Keseluruhan Karyawan : 2850000
```

### 5. Karakteristik OOP

Di dalam penggunaan konsep pemrograman yang berbasis objek atau yang disebut Object Oriented Programming (OOP), haruslah memiliki karakteristik. Adapun karakteristik tersebut adalah memiliki sifat turunan atau pewarisan (Inheritance), satu nama memiliki banyak sifat atau perilaku (Polymorphism), dan pembungkusan sifat dari objek yang berbeda (Encapsulation). Berikut akan dijelaskan karakteristik OOP tersebut (Stroustrup, 2013):

#### 5.1. Inheritance

Inheritance memungkinkan programmer untuk "menurunkan" sebuah class menjadi class lain yang lebih spesifik dan memiliki fungsi yang lebih komplit. Inheritance merepresentasikan hubungan "seperti" atau "sejenis" (a kind of). Sebagai contoh, sebuah perahu motor adalah seperti perahu namun dengan kemampuan lebih, yakni memiliki motor. Contoh lain adalah kendaraan jenis mobil (sebagai super class) dan memiliki tipe sport (sebagai subclass), bila digabung menjadi mobil sport.

Ketika kita menurunkan sebuah class dari class yang lain, class yang baru akan mewarisi semua attribute dan method dari class yang sudah ada. Class yang sudah ada disebut dengan base class atau super class atau parent class dan class yang baru disebut dengan derived class atau subclass, atau child class. Dengan inheritance, kita dapat mendaur ulang program kita atau bahkan mendaur ulang program orang lain agar sesuai dengan kebutuhan kita.

Tanpa inheritance, kelas merupakan sebuah unit yang berdiri sendiri. Inheritance akan membentuk suatu konsep dimana jika konsep yang diatas berubah maka perubahan akan juga berlaku pada yang ada dibawahnya. Inheritance sangat mirip dengan hubungan orang tua dengan anak. Manakala suatu kelas menerima warisan, semua anggota data dan fungsi juga akan menerima warisan, walaupun tidak semuanya akan dapat diakses oleh anggota fungsi dari kelas.

Di dalam C++, penentuan akses pada inheritance ada tiga macam, yaitu:

1. **Public**
   - Penentuan akses berbasis public menyebabkan anggota dari public dari sebuah kelas utama akan menjadi anggota public kelas turunan dan menyebabkan juga anggota protected kelas utama menjadi anggota protected kelas turunan, namun untuk anggota kelas private tetap pada private kelas utama.

2. **Private**
   - Penentu akses berbasis private menyebabkan anggota dari anggota public dari kelas utama akan menjadi anggota protected kelas turunan, dan menyebabkan anggota dari kelas utama menjadi anggota protected kelas turunan, namun untuk anggota kelas private tetap pada private kelas utama.

3. **Protected**
   - Penentu akses berbasis protected menyebabkan anggota dari anggota protected dan public dari kelas utama akan menjadi anggota private dari kelas turunan. Anggota private dari kelas utama selalu menjadi anggota private kelas utama.

Pada waktu mendeklarasikan suatu kelas, anda dapat menandai bahwa suatu kelas berasal dari mana, yaitu dengan tanda titik dua (:) setelah nama kelas, tipe asalnya bisa berupa public atau yang lainnya dan dari kelas mana berasal. Berikut penulisan sintaksisnya:

```cpp
class kucing_besar : public predator
```

#### Contoh-6: Penggunaan Inheritance

```cpp
#include <iostream.h>
#include <conio.h>

enum KETURUNAN { PUMA, TUTUL, SINGA, MACAN };

class Predator {
public:
    // constructors
    Predator() : Usianya(10), Bobotnya(5) {}
    ~Predator() {}

    // accessors
    int Umurnya() const { return Usianya; }
    void SetUmur(int Umur) { Usianya = Umur; }
    int Beratnya() const { return Bobotnya; }
    void SetBerat(int Berat) { Bobotnya = Berat; }

    // method lainnya
    void Meraung() const { cout << "Meraung ... suara Predator!\n"; }
    void Tidur() const { cout << "ssshhh… Predator Tidur.\n"; }

protected:
    int Usianya;
    int Bobotnya;
};

class Kucing_besar : public Predator {
public:
    // constructors
    Kucing_besar() : Keturunannya(SINGA) {}
    ~Kucing_besar() {}

    // accessors
    KETURUNAN DptKeturunan() const { return Keturunannya; }
    void setKeturunan(KETURUNAN keturunan) { Keturunannya = keturunan; }

    // other methods
    void Melompat() { cout << " Melompat ...\n"; }
    void Berburu() { cout << " Berburu ... ingin makan \n"; }

private:
    KETURUNAN Keturunannya;
};

int main() {
    Kucing_besar Sibelang;
    Sibelang.Meraung();
    Sibelang.Berburu();
    cout << " Umur Raja Hutan adalah: " << Sibelang.Umurnya() << " Tahun Usianya \n";
    getch();
}
```

Output yang dihasilkan dari program contoh-6 di atas adalah:

```
Meraung ... suara Predator!
Berburu ... ingin makan
Umur Raja Hutan adalah: 10 Tahun Usianya 
```

### 5.2. Polymorphism

Polymorphism adalah kemampuan dua buah objek yang berbeda untuk merespon pesan permintaan yang sama dalam suatu cara yang unik. Contohnya, saya melatih lumba-lumba saya dengan perintah untuk meloncat dan juga saya melatih burung untuk merespon perintah saya untuk berkicau. Saya lakukan latihan untuk merespon kepada mereka dengan perintah lisan. Melalui polymorphism, saya tahu bahwa anjing dan burung akan merespon dengan gonggongan atau kicauan.

Dengan cara dan kemampuan seperti ini, jenis akses tertentu dapat diterapkan dengan berbagai cara oleh objek-objek yang memiliki tipe yang berbeda atau memiliki banyak bentuk. Fungsi virtual merupakan dasar dari polymorphism yang bekerja hanya dengan pointer-pointer dan referensi, dan hanya mendeklarasikan method sebagai virtual.

Adapun aturan dari virtual function adalah sebagai berikut:
1. Virtual function harus anggota class.
2. Anggota class bukan anggota yang bersifat statis.
3. Anggota class dapat diakses dengan pointer objek.
4. Virtual function tidak dapat memiliki virtual constructor, akan tetapi dapat berupa virtual destructor.

#### Contoh-7: Penggunaan Polymorphism

```cpp
#include <iostream.h>
#include <conio.h>

class HewanPeliharaan {
public:
    void lucu() {
        cout << "Lucunya hewan peliharaan" << endl;
    }
    virtual void makan() { // anggota class
        cout << "Makan... dibutuhkan hewan peliharaan" << endl;
    }
};

class Jinak : public HewanPeliharaan {
public:
    void lucu() {
        cout << "Lucu dan Jinak" << endl;
    }
    virtual void makan() {
        cout << "Diberi makan agar jinak" << endl;
    }
};

class Kucing : public Jinak {
public:
    void lucu() {
        cout << "Lucunya kucing" << endl;
    }
    virtual void makan() {
        cout << "Makanan dibutuhkan Kucing" << endl;
    }
};

void main() {
    // Definisi Objek Jinak dan Kucing puma
    Jinak jinak;
    Kucing puma;
    // Definisi pointer ke objek
    HewanPeliharaan *hewan;
    hewan = &jinak;
    hewan->lucu();
    hewan->makan();
    cout << "-----------------------------" << endl;
    hewan = &puma;
    hewan->lucu();
    hewan->makan();
    getch();
}
```

Output yang dihasilkan dari program contoh-7 di atas adalah:

```
Lucunya hewan peliharaan
Makan... dibutuhkan hewan peliharaan
-----------------------------
Lucunya kucing
Makanan dibutuhkan Kucing
```

### 5.3. Encapsulation

Ciri penting lainnya dari OOP adalah encapsulation. Encapsulation adalah sebuah proses dimana tidak ada akses langsung ke data yang diberikan, bahkan disembunyikan. Jika ingin mendapatkan data, maka harus berinteraksi dengan objek yang bertanggung jawab atas data tersebut. Berikut adalah ciri dari encapsulation:

1. Variabel dan method dalam suatu objek dibungkus agar terlindungi.
2. Untuk mengakses, variabel dan method yang sudah dibungkus tadi perlu menggunakan interface.
3. Setelah variabel dan method dibungkus, hak akses terhadapnya dapat ditentukan.
4. Konsep pembungkusan ini pada dasarnya merupakan perluasan dari tipe data struktur.

Dua hal dalam encapsulation:

1. Information hiding.
2. Menyediakan perantara (method) untuk mengakses data.

Pada intinya, encapsulation adalah pemisahan antara bagian private dan public pada sebuah objek. Atau, dapat dipandang sebagai pemisahan antara interface (bagian private) dan implementasi (bagian public). Objek-objek lain yang hendak berinteraksi dengan objek ini akan mengirimkan sebuah pesan (message), dan objek ini akan mengerjakan sesuatu dan mengirimkan pesan balik sebagai jawaban jika diperlukan.

Keuntungan utama dari encapsulation tentu saja adalah penyembunyian implementasi (implementation hiding). Dengan implementation hiding, kita dapat memperbaiki bagaimana objek kita bekerja tanpa harus khawatir bagaimana menginformasikan perubahan tersebut ke objek-objek yang lain. Selama kita tidak merubah interface dari objek kita, objek-objek yang lain akan tetap dapat menggunakan objek kita.

#### Contoh-8: Penggunaan Encapsulation

```cpp
#include <conio.h>
#include <iostream.h>

class satu_kandang {
private:
    int kandang;
public:
    void atur(int nilai);
    int hasil();
};

void satu_kandang::atur(int nilai) {
    kandang = nilai;
}

int satu_kandang::hasil() {
    return kandang;
}

void main() {
    satu_kandang ayam1, ayam2, ayam3;
    int bebek;

    ayam1.atur(5);
    ayam2.atur(7);
    ayam3.atur(2);
    bebek = 20;

    cout << "Nilai dari ayam1 adalah " << ayam1.hasil() << endl;
    cout << "Nilai dari ayam2 adalah " << ayam2.hasil() << endl;
    cout << "Nilai dari ayam3 adalah " << ayam3.hasil() << endl;
    cout << "Nilai dari bebek adalah " << bebek << endl;

    getch();
}
```

Output yang dihasilkan dari program contoh-8 di atas adalah:

```
Nilai dari ayam1 adalah 5
Nilai dari ayam2 adalah 7
Nilai dari ayam3 adalah 2
Nilai dari bebek adalah 20
```

### Soal 6: Program Perhitungan Gaji Pegawai Honorer

Seorang manager ingin dibuatkan sebuah program perhitungan gaji pegawai staff honor sederhana. Anda sebagai staff programmer harus membuatkan program tersebut.

Adapun ketentuan perhitungan gaji pegawai honorer adalah sebagai berikut:
- Honor per hari yang diterima pegawai honorer sebesar Rp. 25.000.
- Jam kerja selama 8 jam setiap harinya.
- Jam bekerja lebih dari 8 jam, maka kelebihan jam dikalikan dengan honor lembur per jam sebesar Rp. 1.500.

Petunjuk: Gunakan kelas pegawai.

#### Desain Masukan
```
PT. Meriang Gembira
Jumlah :………………..
Tanggal Input :………………..

Data Ke-1
Nama Pegawai :…………………..
Jumlah Jam Kerja :………………Jam

Data Ke-2
Nama Pegawai :…………………..
Jumlah Jam Kerja :………………Jam

...

<terus mengulang sesuai jumlah pegawai yang diinputkan>
```

#### Desain Keluaran
```
PT. Meriang Gembira
Tanggal : ………………..

==========================================================
No.   Nama Pegawai   Honor Jam Kerja   Honor Lembur   Total Honor
      (Rp)           (Rp)             (Rp)           (Rp)
==========================================================
...   ...            ...              ...            ...
...   ...            ...              ...            ...
...   ...            ...              ...            ...

Total Honor Pegawai Sebesar …………..
```

### Jumlah Pegawai
Berapa jumlah pegawai yang diinputkan?

### Tanggal Input
Tanggal berapa data pegawai diinputkan?

### Contoh Data Masukan
```
PT. Meriang Gembira
Jumlah : 3
Tanggal Input : 2024-06-05

Data Ke-1
Nama Pegawai : Alice
Jumlah Jam Kerja : 8 Jam

Data Ke-2
Nama Pegawai : Bob
Jumlah Jam Kerja : 9 Jam

Data Ke-3
Nama Pegawai : Charlie
Jumlah Jam Kerja : 10 Jam
```

### Contoh Data Keluaran
```
PT. Meriang Gembira
Tanggal : 2024-06-05

==========================================================
No.   Nama Pegawai   Honor Jam Kerja   Honor Lembur   Total Honor
      (Rp)           (Rp)             (Rp)           (Rp)
==========================================================
1.    Alice          200,000          0              200,000
2.    Bob            200,000          1,500          201,500
3.    Charlie        200,000          3,000          203,000

Total Honor Pegawai Sebesar 604,500
```
