# Operasi Penyeleksian Kondisi

Pernyataan Percabangan digunakan untuk memecahkan persoalan untuk mengambil suatu keputusan diantara sekian pernyataan yang ada. Untuk keperluan pengambilan keputusan, C++ menyediakan beberapa perintah antara lain (Frieyadie, 2006).

## 1. Pernyataan IF
Pernyataan `if` mempunyai pengertian, "Jika kondisi bernilai benar, maka perintah akan dikerjakan dan jika tidak memenuhi syarat maka akan diabaikan". 

Bentuk umum dari pernyataan `if`:

Penulisan kondisi berada di dalam tanda kurung kurawal jika pemakaian `if` diikuti dengan pernyataan majemuk, bentuk penulisannya sebagai berikut:

```cpp
if (kondisi)
    pernyataan;

if (kondisi)
{
    pernyataan;
    // ...
}
```

Berikut contoh penggunaan `if` dalam program menggunakan Bahasa C++:

```cpp
#include <iostream>

int main() {
    float x, y;

    std::cout << "Masukkan Nilai Positif atau Negatif" << std::endl;
    std::cout << "Nilai X: "; std::cin >> x;
    std::cout << "Nilai Y: "; std::cin >> y;

    if ((x >= 0) && (y >= 0))
        std::cout << "X dan Y Bernilai POSITIF" << std::endl;
    else
        std::cout << "X, Y: Ada yang bernilai NEGATIF" << std::endl;

    return 0;
}

```

Output yang akan dihasilkan dari program contoh tersebut adalah tergantung pada input yang dimasukkan oleh pengguna. Misalnya, jika pengguna memasukkan nilai X = 3 dan Y = 4, maka outputnya akan menjadi:

```
Masukkan Nilai Positif atau Negatif
Nilai X: 3
Nilai Y: 4
X dan Y Bernilai POSITIF
```

## 1.1. Pernyataan IF - ELSE

Pernyataan `if` mempunyai pengertian, "Jika kondisi bernilai benar, maka perintah-1 akan dikerjakan dan jika tidak memenuhi syarat maka akan mengerjakan perintah-2".

Bentuk umum dari pernyataan `if - else`:

```cpp
if (kondisi)
    perintah-1;
else
    perintah-2;
```

Perintah-1 dan perintah-2 dapat berupa sebuah pernyataan tunggal, pernyataan majemuk, atau pernyataan kosong. Jika pemakaian `if-else` diikuti dengan pernyataan majemuk, bentuk penulisannya sebagai berikut:

```cpp
if (kondisi)
    {
        perintah-1;
        ...
    }
        else
    {
        perintah-2;
        ...
    } 
```

### Contoh:

Menentukan besarnya gaji pokok dan jabatan dari golongan, dengan kriteria:
- jika golongan=1, Jabatan= Direktur, gapok =5000000
- Jika golongan =2, jabatan=Manajer, gapok=4000000

```cpp
#include <iostream>
#include <cstring>

int main() {
    char gol, jab[10];
    long gapok = 0;

    std::cout << std::endl << "Data Jabatan" << std::endl
              << "===============" << std::endl;
    std::cout << "Masukkan Golongan [1/2]: "; std::cin >> gol;

    if(gol == '1') {
        strcpy(jab, "Direktur");
        gapok = 5000000;
    } else if(gol == '2') {
        strcpy(jab, "Manajer");
        gapok = 4000000;
    }

    std::cout << "Jabatan = " << jab << std::endl;
    std::cout << "Gaji Pokok = " << gapok << std::endl;

    return 0;
}

```

Output yang akan dihasilkan dari program contoh tersebut akan tergantung pada input yang dimasukkan oleh pengguna. Contoh, jika pengguna memasukkan golongan=1, maka outputnya akan menjadi:
```
Data Jabatan
===============
Masukan Golongan [1/2]: 1
Jabatan = Direktur
Gaji Pokok = 5000000
```

## 1.2. Pernyataan NESTED IF

Nested if merupakan pernyataan if yang berada dalam pernyataan if yang lainnya. Bentuk penulisan pernyataan Nested if adalah:

```cpp
if (syarat)
{
    if (syarat)
    {
        // perintah;
    }
    else
    {
        // perintah;
    }
}
else
{
    if (syarat)
    {
        // perintah;
    }
    else
    {
        // perintah;
    }
}
```

### Contoh:

Suatu perusahaan menjual pakaian dengan ketentuan sebagai berikut:
- Jika kode baju=1 maka Merk Baju = H&R, dengan ukuran baju=S,maka harganya 45000, Jika ukuran baju=M, maka harganya 60000.
- Jika kode baju=2 maka Merk Baju = Adidas, dengan ukuran baju=S, maka harganya 65000, Jika ukuran Baju=M, maka harganya 75000.

```cpp
#include <iostream>
#include <cstring>

int main() {
    char kode, ukuran, merk[15];
    long harga = 0;

    std::cout << "Kode Baju : "; std::cin >> kode;
    std::cout << "Ukuran : "; std::cin >> ukuran;

    if (kode == '1') {
        strcpy(merk, "H & R");
        if (ukuran == 'S' || ukuran == 's')
            harga = 45000;
        else
            harga = 60000;
    } else if (kode == '2') {
        strcpy(merk, "Adidas");
        if (ukuran == 'S' || ukuran == 's')
            harga = 65000;
        else
            harga = 75000;
    }

    std::cout << "------------------------" << std::endl;
    std::cout << "Merk Baju : " << merk << std::endl;
    std::cout << "Harga Baju : " << harga << std::endl;

    return 0;
}

```

Output yang akan dihasilkan dari program contoh tersebut akan tergantung pada input yang dimasukkan oleh pengguna.
```
Kode Baju : 1
Ukuran : S
------------------------
Merk Baju : H & R
Harga Baju : 45000
```


## 1.3. Pernyataan IF – ELSE Majemuk

Bentuk dari if-else bertingkat sebenarnya serupa dengan nested if, keuntungan penggunaan if-else bertingkat dibanding dengan nested if adalah penggunaan bentuk penulisan yang lebih sederhana.

### Bentuk Umum Penulisannya:

```cpp
if (syarat)
{
    // perintah;
    // perintah;
}
else if (syarat)
{
    // perintah;
    // perintah;
}
else
{
    // perintah;
    // perintah;
}
```

### Contoh:

Suatu perusahaan memberikan komisi kepada para salesman dengan ketentuan sebagai berikut:
- Bila salesman dapat menjual barang hingga Rp. 200.000 ,- , akan diberikan uang jasa sebesar Rp. 10.000 ditambah dengan uang komisi Rp. 10% dari pendapatan yang diperoleh hari itu.
- Bila salesman dapat menjual barang di atas Rp. 200.000 ,- , akan diberikan uang jasa sebesar Rp. 20.000 ditambah dengan uang komisi Rp. 15% dari pendapatan yang diperoleh hari itu.
- Bila salesman dapat menjual barang di atas Rp. 500.000 ,- , akan diberikan uang jasa sebesar Rp. 30.000 ditambah dengan uang komisi Rp. 20% dari pendapatan yang diperoleh hari itu.

```cpp
#include <iostream>

int main() {
    float pendapatan, jasa = 0, komisi = 0, total = 0;

    std::cout << "Pendapatan Hari ini Rp. ";
    std::cin >> pendapatan;

    if (pendapatan >= 0 && pendapatan <= 200000) {
        jasa = 10000;
        komisi = 0.1 * pendapatan;
    } else if (pendapatan <= 500000) {
        jasa = 20000;
        komisi = 0.15 * pendapatan;
    } else {
        jasa = 30000;
        komisi = 0.2 * pendapatan;
    }

    /* menghitung total */
    total = komisi + jasa;

    std::cout << "Uang Jasa Rp. " << jasa << std::endl;
    std::cout << "Uang Komisi Rp. " << komisi << std::endl;
    std::cout << "=============================" << std::endl;
    std::cout << "Hasil Total Rp. " << total << std::endl;

    return 0;
}

```

Output yang akan dihasilkan dari program contoh tersebut akan tergantung pada input yang dimasukkan oleh pengguna.
```
Pendapatan Hari ini Rp. 200000
Uang Jasa   Rp. 10000
Uang Komisi Rp. 20000
=============================
Hasil Total Rp. 30000
```

## Short Hand If...Else (Ternary Operator)

Ada juga singkat if else, yang dikenal sebagai operator ternary karena terdiri dari tiga operan. Ini dapat digunakan untuk menggantikan beberapa baris kode dengan satu baris. Ini sering digunakan untuk menggantikan pernyataan if else sederhana:

### Syntax

```cpp
variable = (condition) ? expressionTrue : expressionFalse;
```

Daripada menulis:

### Contoh

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int time = 20;
    if (time < 18) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }
    return 0;
}
```

Anda dapat menulis dengan singkat:

### Contoh

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
    return 0;
}
```
