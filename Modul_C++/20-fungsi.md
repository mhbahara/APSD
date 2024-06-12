
## Fungsi dan Prosedur

Fungsi (Function) merupakan blok kode yang dirancang untuk melaksanakan tugas khusus (Stroustrup, 2013). Kegunaan dari fungsi ini adalah untuk (Sianipar, 2012):

- Mengurangi pengulangan penulisan program yang berulangan atau sama.
- Program menjadi lebih terstruktur, sehingga mudah dipahami dan dapat lebih dikembangkan.

Fungsi-fungsi yang sudah kita kenal sebelumnya adalah fungsi `main()`, yang bersifat mutlak, karena fungsi ini program akan dimulai, sebagai contoh yang lainnya fungsi `printf()`, `cout()` yang mempunyai tugas untuk menampilkan informasi atau data kelayar dan masih banyak lainnya.

### 1. Struktur Fungsi

Sebuah fungsi sederhana mempunyai bentuk penulisan sebagai berikut:

```cpp
nama_fungsi(argumen)
{
    pernyataan / perintah;
    pernyataan / perintah;
    pernyataan / perintah;
}
```

Keterangan:

- Nama fungsi, boleh dituliskan secara bebas dengan ketentuan, tidak menggunakan spasi dan nama-nama fungsi yang mempunyai arti sendiri.
- Argumen, diletakkan diantara tanda kurung “( )” yang terletak dibelakang nama fungsi. Argumen boleh diisi dengan suatu data atau dibiarkan kosong.
- Pernyataan / perintah, diletakkan diantara tanda kurung ‘{ }’.

Pada pemanggilan sebuah fungsi, cukup dengan menuliskan nama fungsinya.

#### Contoh pembuatan fungsi sederhana

```cpp
#include <iostream>

using namespace std;

// Deklarasi fungsi garis
void garis() {
    cout << "\n----------------------\n";
}

// Program utama
int main() {
    // Memanggil fungsi garis
    garis();
    cout << "UPB" << endl;
    // Memanggil fungsi garis
    garis();

    return 0;
}

```


### 2. Prototipe dan Parameter Fungsi

Prototipe merupakan uraian dari blok fungsi yang dapat digunakan untuk mendeklarasikan ke kompiler mengenai:

- Tipe data keluaran dari fungsi.
- Jumlah parameter yang digunakan.
- Tipe data dari masing-masing parameter yang digunakan.

Prototipe fungsi dituliskan di atas blok program utama dan diakhiri dengan tanda qualifier titik koma (`;`), sedangkan blok program fungsi yang mengandung perintah-perintah atau pernyataan-pernyataan dari program berada di bawah blok program utama yang memiliki keuntungan sebagai berikut:

- Kompiler akan melakukan konversi antara tipe parameter dalam definisi dan parameter fungsi.
- Jika jumlah parameter yang digunakan dalam definisi fungsi dan pada saat pemanggilan fungsi berbeda atau tidak sama, maka akan menunjukkan kesalahan.

Sedangkan yang dimaksud dengan parameter pada fungsi adalah suatu pendefinisian nilai-nilai dari objek-objek yang dideklarasikan pada bagian argumen di fungsi. Nilai-nilai pada objek-objek tersebut didapat dari variabel-variabel yang berada pada program utama.

Terdapat dua macam para parameter fungsi, yaitu :

- Parameter formal adalah variabel yang terdapat pada daftar parameter yang berada dalam definisi fungsi.
- Parameter Aktual adalah variabel yang digunakan pada pemanggilan suatu fungsi.

Bentuk penulisan Parameter Formal dan Parameter Aktual.

Contoh penggunaan prototipe fungsi dan parameter fungsi sebagai berikut:

```cpp
#include <iostream>
#include <cstring> // untuk strcpy

using namespace std;

// Prototipe fungsi
void coment(char ket[30], int n);

int main() {
    char lagi, c[30];
    int i;

    do {
        cout << "Masukkan nilai = ";
        cin >> i;
        coment(c, i); // parameter formal
        cout << c;
        cout << "\n\nIngin input lagi [Y/T]: ";
        cin >> lagi;
    } while (lagi == 'Y' || lagi == 'y');

    return 0;
}

// Blok program fungsi dengan parameter aktual
void coment(char ket[30], int n) {
    int a;
    a = n % 2;
    if (a == 1)
        strcpy(ket, "---Bilangan Ganjil---");
    else
        strcpy(ket, "---Bilangan Genap---");
}

```

Di dalam bahasa C++ ada dua cara untuk melewatkan nilai-nilai parameter ke dalam fungsi dari nilai-nilai variabel, yaitu:

### 2.1. Pemanggilan dengan nilai ( Call by Value )

Pada pemanggilan dengan nilai yaitu nilai dari parameter aktual akan dimasukkan ke parameter formal. Dengan cara ini nilai parameter aktual tidak dapat berubah, walaupun nilai dari parameter formal berubah. Berikut contoh pemanggilan dengan nilai dapat dilihat pada contoh berikut:

```cpp
/* ------------------------ */
/* Penggunaan Call By Value */
/* Program Tambah Nilai */
/* ------------------------ */
#include <iostream>

using namespace std;

// Deklarasi fungsi tambah
void tambah(int m, int n);

int main() {
    int a, b;
    a = 5;
    b = 9;
    cout << "Nilai Sebelum Fungsi Digunakan";
    cout << "\na = " << a << " b = " << b;
    tambah(a, b);
    cout << "\nNilai Setelah Fungsi Digunakan";
    cout << "\na = " << a << " b = " << b;
    return 0;
}

void tambah(int m, int n) {
    m += 5;
    n += 7;
    cout << "\n\nNilai di dalam Fungsi Tambah()";
    cout << "\nm = " << m << " n = " << n;
    cout << endl;
}


```

### 2.2. Pemanggilan dengan Referensi (Call by Reference)

Pemanggilan dengan referensi merupakan pemanggilan nilai suatu parameter di dalam fungsi ke parameter actual yang disimpan pada alamat memori dengan menggunakan pointer. Cara ini dapat dipakai untuk mengubah isi suatu parameter aktual dengan melaksanakan pengubahan nilai dari suatu parameter yang dilakukan di dalam fungsi.

```cpp
/* ---------------------------- */
/* Penggunaan Call By Reference */
/* Program Tambah Nilai */
/* ---------------------------- */
#include <iostream>

using namespace std;

// Deklarasi fungsi tambah dengan parameter pointer
void tambah(int *c, int *d);

int main() {
    int a, b;
    a = 4;
    b = 6;
    cout << "Nilai Sebelum Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b;
    tambah(&a, &b);
    cout << endl;
    cout << "\nNilai Setelah Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b;
    return 0;
}

void tambah(int *c, int *d) {
    *c += 7;
    *d += 5;
    cout << endl;
    cout << "\nNilai di Akhir Fungsi Tambah()";
    cout << "\nc = " << *c << " d = " << *d;
}

```


### 3. Pernyataan return()

Digunakan untuk mengirimkan nilai atau nilai dari suatu fungsi kepada fungsi yang lain yang memanggilnya. Pernyataan return() diikuti oleh argumen yang berupa nilai yang akan dikirimkan. Syarat utama dalam pembuatan fungsi return adalah nama fungsi yang dapat mengembalikan nilai, dik

arenakan nilai hasil dari parameter formal akan disimpan pada nama fungsi. Contoh pemakaian pernyataan return() dapat dilihat pada contoh berikut:

```cpp
#include <iostream>
#include <cmath>

using namespace std;

// Fungsi untuk menghitung luas lingkaran
float luas(int r) {
    return 3.14 * r * r;
}

// Fungsi untuk menghitung keliling lingkaran
float kel(int r) {
    return 3.14 * 2 * r;
}

int main() {
    int j;
    cout << "Masukkan Jari-jari = ";
    cin >> j;
    cout << "Luas lingkaran = " << luas(j) << endl;
    cout << "Keliling lingkaran = " << kel(j);
    return 0;
}

```

### 4. Jenis Variabel

Jenis Variabel pada C++ ini sangat berguna didalam penulisan suatu fungsi agar penggunaan didalam penggunaan suatu variabel tidak salah. Terdapat beberapa jenis variabel yaitu:

- Variabel Lokal.
- Variabel Eksternal atau Global.
- Variabel Statis.

#### 10.4.1. Variabel Lokal

Variabel Lokal adalah variabel yang dideklarasikan didalam fungsi dan hanya dikenal oleh fungsi yang bersangkutan. Variabel lokal biasa disebut dengan Variabel Otomatis.

```cpp
/* -------------- */
/* Variabel Lokal */
/* -------------- */
#include <iostream>

using namespace std;

// Deklarasi fungsi lokal
void lokal();

int main() {
    int a = 15;
    cout << "Pemanggilan Variabel Lokal" << endl;
    cout << "\nNilai didalam fungsi main() = : " << a;
    lokal();
    cout << "\nNilai didalam fungsi main() = : " << a;
    return 0;
}

void lokal() {
    int a = 10; // nilai ini hnya bisa di akses secara lokal
    cout << "\nNilai a didalam fungsi lokal() = " << a;
}

```

#### 4.2. Variabel Eksternal

Variabel Eksternal adalah variabel yang dideklarasikan diluar fungsi yang bersifat global yang artinya dapat digunakan bersama-sama tanpa harus dideklarasikan berulang-ulang. Untuk pendeklarasian variabel ekternal ini, diluar dari fungsi `main()`, yang selama ini pendeklarasian variabel selalu didalam fungsi `main()`.

```cpp
/* ------------------------------ */
/* Variabel Eksternal atau Global */
/* ------------------------------ */
#include <iostream>

using namespace std;

int a = 6; // Deklarasi variabel eksternal

void lokal();

int main() {
    cout << "Penggunaan Variabel Eksternal" << endl;
    cout << "\nNilai didalam fungsi main() = : " << a;
    lokal(); // Pemanggilan fungsi lokal
    cout << "\nNilai Setelah pemanggilan fungsi lokal() = " << a;
    return 0;
}

void lokal() {
    a += 10; // Modifikasi variabel eksternal
}

```


#### 4.3. Variabel Statis

Variabel Statis dapat berupa variabel local atau variabel eksternal. Sifat variabel statis ini mempunyai sifat antar lain.

- Jika variabel statis bersifat local, maka variabel hanya dikenal oleh fungsi tempat variabel dideklarasikan.
- Jika variabel statis bersifat eksternal, maka variabel dapat dipergunakan oleh semua fungsi yang terletak pada file yang sama ditempat variabel statis dideklarasikan.
- Jika tidak ada inisialisasi oleh pemrograman secara otomatis akan diberikan nilai awal nol.

Suatu variabel statis diperoleh dengan menambahkan kata-kunci `static` didepan penentu tipe data variabel.

```cpp
/* -------------------------- */
/* Penggunaan Variabel Statis */
/* -------------------------- */
#include <iostream>

void walah(); // Prototipe fungsi walah

int main()
{
    int k = 5;
    walah();
    walah();
    std::cout << "\nNilai K didalam fungsi main() = " << k;
    return 0;
}

void walah()
{
    static int k = 0; // Deklarasi variabel statis dengan inisialisasi
    k += 4;
    std::cout << "\nNilai K didalam fungsi() = " << k;
}

```

### 5. Parameter Fungsi

#### 5.1 Parameter default

Parameter fungsi dapat menggunakan nilai default parameter dengan menggunakan tanda '='

contoh:
```cpp
#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}
```

### 5.2 Multiple Parameter

Dalam fungsi dapat menggunakan banyak parameter sesuai dengan kebutuhanya.
contoh:
```cpp
#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age) {
  cout << " yang bernama " << fname << " berumur "<< age << " tahun \n";
}

int main() {
  myFunction("Ari", 3);
  myFunction("Ani", 14);
  myFunction("Aji", 30);
  return 0;
}
```

### 5.3 Return Value

Kata kunci `void`, yang digunakan dalam contoh sebelumnya, menunjukkan bahwa fungsi tidak akan mengembalikan nilai. Jika Anda ingin fungsi mengembalikan nilai, Anda dapat menggunakan tipe data (seperti `int`, `string`, dll.) sebagai pengganti `void`, dan gunakan kata kunci `return` di dalam fungsi tersebut:

Contoh
```cpp
#include <iostream>
using namespace std;
int myFunction(int x) {
  return 5 + x;
}

int main() {
  cout << myFunction(3);
  return 0;
}
```
Keluaran:
```
8 (5 + 3)
```

Contoh  berikut ini mengembalikan hasil penjumlahan dari fungsi dengan dua parameter:

Contoh
```cpp
#include <iostream>
using namespace std;

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  cout << myFunction(5, 3);
  return 0;
}
```

Keluaran: 
```
8 (5 + 3)
```

Anda juga dapat menyimpan hasilnya dalam sebuah variabel:

Contoh
```cpp
#include <iostream>
using namespace std;

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
  cout << z;
  return 0;
}
```

Keluaran: 
```
8 (5 + 3)
```
### 5.4 pass by reference
Menukar Berdasarkan Referensi
Dalam contoh dari halaman sebelumnya, kita menggunakan variabel default saat kita menggunakan parameter ke sebuah fungsi. Anda juga dapat menukar referensi ke fungsi. Ini bisa berguna ketika Anda perlu mengubah nilai dari argumen:

Contoh
```cpp
#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Sebelum swap: " << "\n";
  cout << firstNum << " " << secondNum << "\n";

  // Memanggil fungsi, yang akan mengubah nilai dari firstNum dan secondNum
  swapNums(firstNum, secondNum);

  cout << "Setelah swap: " << "\n";
  cout << firstNum << " " << secondNum << "\n";

  return 0;
}
```

Dalam contoh ini, fungsi `swapNums` menerima referensi dari variabel `x` dan `y`. Ketika nilai dari `x` dan `y` diubah dalam fungsi tersebut, perubahan tersebut juga akan berlaku untuk variabel asli `firstNum` dan `secondNum`.


### 5.5 menggunakan array pada fungsi

pada fungsi, array juga bisa dijadikan parameter

```cpp
#include <iostream>  
using namespace std;  

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {  
    cout << myNumbers[i] << "\n";    
  } 
}

int main() {  
  int myNumbers[5] = {10, 20, 30, 40, 50};  
  myFunction(myNumbers);
  return 0;
}  
```

### 6. Fungsi inline

Fungsi inline ( inline function ) digunakan untuk mengurangi lambatnya eksekusi program dan mempercepat eksekusi program terutama pada program yang sering menggunakan atau memanggil fungsi yang berlebih. terutama programprogram yang menggunakan pernyataan perulangan proses seperti for, while dan do – while. Inline function dideklarasikan dengan menambahkan kata kunci inline didepan tipe data. 

```cpp
#include <iostream>
#include <conio.h>

inline int kali(int i, int j)
{
    return (i * j);
}

int main()
{
    int k;
    for (k = 1; k < 20; k++)
    {
        std::cout << kali(k, k * 2) << " ";
    }
    return 0;
}

```


contoh lain:
```cpp
#include <iostream>

inline static void cplusplus()
{
    std::cout << "Pemrogramman C++\n";
    std::cout << "C++ Programming, ";
}

int main()
{
    {
        std::cout << "Kami Sedang Belajar, ";
        cplusplus();
        std::cout << "Sedang Kami Pelajari.\n\n";
    }
    {
        std::cout << "Mari Belajar, ";
        cplusplus();
        std::cout << "Mudah Untuk Dipelajari.\n\n";
    }
    {
        std::cout << "Jika Sudah Mengerti, ";
        cplusplus();
        std::cout << "Berarti Sudah Anda Kuasai";
    }
    return 0;
}

```

### 7. Fungsi Overloading

Function Overloading adalah mendefinisikan beberapa fungsi, sehingga memiliki nama yang sama tetapi dengan parameter yang berbeda. 
Dapat diartikan bahwa fungsi yang overload berarti menyediakan versi lain dari fungsi tersebut. Salah satu kelebihan dari C++ adalah Overloading.Sebagai contoh membentuk fungsi yang sama dengna tipe yang berbeda-beda dan dibuatkan pula nama fungsi yang berbeda-beda pula.  

```cpp
#include <iostream>

int hitung(int b);
long hitung(long c);
double hitung(double d);

int main()
{
    std::cout << "Hasilnya Fungsi overload -1 : " << hitung(4) << std::endl;
    std::cout << "Hasilnya Fungsi overload -2 : " << hitung(2L) << std::endl; // Perhatikan '2L' untuk long
    std::cout << "Hasilnya Fungsi overload -3 : " << hitung(3.0) << std::endl; // Perhatikan '3.0' untuk double
    return 0;
}

int hitung(int b)
{
    return (b * b);
}

long hitung(long c)
{
    return (c * c);
}

double hitung(double d)
{
    return (d * d);
}

```



### 8. Rekursif Fungsi

Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri. Ide dasar dari rekursi adalah pemecahan suatu masalah menjadi beberapa submasalah dengan ukuran yang lebih kecil. Pada rekursi, fungsi akan terus memanggil dirinya sendiri hingga mencapai kondisi batas (base case).

```cpp
#include <iostream>

int faktorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * faktorial(n - 1);
}

int main() {
    int n;
    std::cout << "Masukkan Nilai Faktorial = ";
    std::cin >> n;
    std::cout << "Faktorial dari " << n << " adalah = " << faktorial(n);
    return 0;
}

```


contoh lain:
```cpp
#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}
```
penjelasan :
```
10 + sum(9)
10 + ( 9 + sum(8) )
10 + ( 9 + ( 8 + sum(7) ) )
...
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0

```


## Prosedur dalam C++
Dalam C++, prosedur adalah sebutan lain untuk fungsi yang tidak mengembalikan nilai (`void`). Prosedur digunakan untuk menjalankan sekumpulan instruksi tanpa perlu memberikan nilai kembali ke pemanggilnya. Prosedur sangat berguna untuk modularisasi kode, membuat kode lebih bersih, dan memudahkan pemeliharaan.

### Definisi Prosedur
Prosedur dalam C++ dideklarasikan dan didefinisikan menggunakan kata kunci `void`. Berikut adalah struktur dasar sebuah prosedur:

```cpp
#include <iostream>
using namespace std;

// Deklarasi prosedur
void namaProsedur(parameter1, parameter2, ...);

int main() {
    // Pemanggilan prosedur
    namaProsedur(argumen1, argumen2, ...);
    return 0;
}

// Definisi prosedur
void namaProsedur(parameter1, parameter2, ...) {
    // Blok kode yang akan dijalankan
}
```

### Contoh Prosedur
Mari kita lihat contoh prosedur yang mencetak pesan ke layar:

```cpp
#include <iostream>
using namespace std;

// Deklarasi dan definisi prosedur
void cetakPesan() {
    cout << "Hello, World!" << endl;
}

int main() {
    // Pemanggilan prosedur
    cetakPesan();
    return 0;
}
```

#### Penjelasan:
- `void cetakPesan() { ... }` mendeklarasikan dan mendefinisikan prosedur `cetakPesan` yang tidak menerima parameter dan tidak mengembalikan nilai.
- `cetakPesan();` memanggil prosedur dalam `main` untuk mencetak pesan "Hello, World!" ke layar.

### Prosedur dengan Parameter
Prosedur dapat menerima parameter untuk mengoper nilai saat dipanggil. Berikut adalah contoh prosedur dengan parameter:

```cpp
#include <iostream>
using namespace std;

// Deklarasi dan definisi prosedur
void tambah(int a, int b) {
    int hasil = a + b;
    cout << "Hasil penjumlahan: " << hasil << endl;
}

int main() {
    int x = 5, y = 3;
    // Pemanggilan prosedur dengan argumen
    tambah(x, y);
    return 0;
}
```

#### Penjelasan:
- `void tambah(int a, int b) { ... }` mendefinisikan prosedur `tambah` yang menerima dua parameter `a` dan `b` bertipe `int`.
- `tambah(x, y);` memanggil prosedur dengan nilai `x` dan `y` sebagai argumen.

### Prosedur dengan Parameter Referensi
Prosedur juga dapat menerima parameter referensi untuk mengubah nilai variabel yang dipass melalui parameter. Berikut contohnya:

```cpp
#include <iostream>
using namespace std;

// Deklarasi dan definisi prosedur
void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Sebelum tukar: x = " << x << ", y = " << y << endl;
    // Pemanggilan prosedur dengan argumen referensi
    tukar(x, y);
    cout << "Sesudah tukar: x = " << x << ", y = " << y << endl;
    return 0;
}
```

#### Penjelasan:
- `void tukar(int &a, int &b) { ... }` mendefinisikan prosedur `tukar` yang menerima dua parameter referensi `a` dan `b`.
- `tukar(x, y);` memanggil prosedur dan menukar nilai `x` dan `y`.

### Prosedur dengan Parameter Default
C++ juga mendukung parameter default dalam prosedur. Berikut adalah contohnya:

```cpp
#include <iostream>
using namespace std;

// Deklarasi dan definisi prosedur dengan parameter default
void cetakPesan(string pesan = "Hello, World!") {
    cout << pesan << endl;
}

int main() {
    // Pemanggilan prosedur tanpa argumen
    cetakPesan();
    // Pemanggilan prosedur dengan argumen
    cetakPesan("Hello, C++!");
    return 0;
}
```

#### Penjelasan:
- `void cetakPesan(string pesan = "Hello, World!") { ... }` mendefinisikan prosedur `cetakPesan` dengan parameter default `pesan`.
- `cetakPesan();` memanggil prosedur tanpa argumen menggunakan nilai default.
- `cetakPesan("Hello, C++!");` memanggil prosedur dengan argumen.

