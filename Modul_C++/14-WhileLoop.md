# Proses

## Perulangan

Operasi perulangan selalu dijumpai didalam bahasa pemrograman, disini akan dibahasa beberapa perintah perulangan diantaranya (Kadir, 2001). 

### 1. Pernyataan for

Perulangan yang pertama adalah for. Bentuk umum pernyataan for sebagai berikut:

```
for (inisialisasi; syarat_pengulangan; pengubah_nilai_pencacah) {
    // kode yang akan diulang
}
```

Bila pernyataan didalam for lebih dari satu maka pernyataan-pernyataan tersebut harus diletakan didalam tanda kurung.

```
for ( inisialisasi; syarat pengulangan; pengubah nilai pencacah )
{
    pernyataan / perintah;
    pernyataan / perintah;
    pernyataan / perintah;
} 
```
Kegunaan dari masing-masing argumen for diatas adalah:

- Inisialisasi: merupakan bagian untuk memberikan nilai awal untuk variabel-variabel tertentu.
- Syarat Pengulangan: memegang kontrol terhadap pengulangan, karena bagian ini yang akan menentukan suatu perulangan diteruskan atau dihentikan.
- Pengubah Nilai Pencacah: mengatur kenaikan atau penurunan nilai pencacah.

#### Contoh:

Sebagai contoh program untuk mencetak bilangan dari 1 hingga 10 secara menaik, secara menurun dan menampilkan bilangan ganjil, sebagai berikut:

**Contoh-1**

```cpp
/* --------------------------- */
/* Program for - bilangan naik */
/* --------------------------- */ 
#include <iostream>

using namespace std;

int main() {
    int a;
    for(a = 1; a <= 10; ++a)
        cout << a;
    return 0;
}

```

Output yang akan dihasilkan, dari program contoh-1 diatas adalah:

```
12345678910
```

**Contoh-2**

```cpp
/* ---------------------------- */
/* Program for - bilangan turun */
/* ---------------------------- */ 
#include <iostream>

using namespace std;

int main() {
    for(int a = 10; a >= 1; --a)
        cout << a;
    return 0;
}

```

Output yang akan dihasilkan, dari program contoh-2 diatas adalah:

```
10987654321
```

**Contoh-3**

```cpp
/* ----------------------------- */
/* Program for - bilangan ganjil */
/* ----------------------------- */
#include <iostream>

using namespace std;

int main() {
    for(int a = 1; a <= 10; a += 2)
        cout << a;
    return 0;
}

```

Output yang akan dihasilkan, dari program contoh-3 diatas adalah:

```
13579
```
### 1.1. Pernyataan nested - for

Pernyataaan Nested for adalah suatu perulangan for didalam perulangan for yang lainnya. Bentuk umum pernyataan Nested for sebagai berikut:

```cpp
for (inisialisasi; syarat_pengulangan; pengubah_nilai_pencacah) {
    for (inisialisasi; syarat_pengulangan; pengubah_nilai_pencacah) {
        // pernyataan / perintah;
    }
}
```

`Didalam penggunaan nested-for, perulangan yang di dalam terlebih dahulu dihitung hingga selesai, kemudian perulangan yang diluar diselesaikan.`

#### Contoh:

**Contoh-4**

```cpp
#include <stdio.h>

int main() {
    int a, b;
    for (a = 1; a <= 5; a++) {
        printf("\n");
        for (b = a; b <= 5; b++)
            printf(" %d ", a);
    }
    return 0;
}
```

Output yang akan dihasilkan, dari program contoh-4 diatas adalah:

```

 1  1  1  1  1
 2  2  2  2
 3  3  3
 4  4
 5

```
### 1.2. Perulangan Tidak Berhingga

Perulangan tak berhingga merupakan perulangan (loop) yang tak pernah berhenti atau mengulang terus, hal ini sering terjadi disebabkan adanya kesalahan penanganan kondisi yang dipakai untuk keluar dari loop.

Sebagai contoh, jika penulisan perintah sebagai berikut:

**Contoh-5**

```cpp
#include<stdio.h>

int main() {
    int bil;
    for (bil = 60; bil >= 10; bil++) {
        printf("%d", bil);
    }
    return 0;
}

```
Output yang akan dihasilkan, dari program contoh-5 diatas adalah:

```
605958575655545352515049484746454443424140393837363534333231302928272625242322212019181716151413121110...
```

Pada pernyataan ini tidak akan berhenti untuk menampilkan bilangan menurun, kesalahan terjadi pada pengubah nilai pencacah, seharusnya penulisan yang benar berupa `bil--`. Akan tetapi yang ditulis adalah `bil++`. Oleh karena kondisi `bil >= 1` selalu bernilai benar (karena `bil` bernilai 6), maka pernyataan `printf("%d", bil);` akan terus dijalankan.

Jika terjadi hal semacam ini, untuk menghentikan proses yang terus menerus semacam ini dengan menekan tombol CTRL – PAUSE atau CTRL – BREAK.

### 2. Pernyataan goto

Pernyataan `goto` merupakan instruksi untuk mengarahkan eksekusi program ke-pernyataan yang diawali dengan suatu label. Label merupakan suatu pengenal (identifier) yang diikuti dengan tanda titik dua (`:`). Bentuk pemakaian `goto` sebagai berikut:

```cpp
goto label;
```

**Contoh Penggunaan goto**, dapat dilihat pada program berikut:

**Contoh-6**

```cpp
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
    int a, b;
    char lagi;
atas:
    cout << "Masukkan Bilangan = ";
    cin >> a;
    b = a % 2;
    printf("Nilai %d %% 2 adalah = %d",a, b);
    printf("\n\nIngin Hitung Lagi [Y/T] : ");
    // Clear input buffer
    cin.ignore();
    lagi = getchar();
    if (lagi == 'Y' || lagi == 'y')
        goto atas;
    return 0;
}
```

Output yang akan dihasilkan, dari program contoh-6 diatas adalah:

```
Masukkan Bilangan = 12
Nilai 12 % 2 adalah = 0

Ingin Hitung Lagi [Y/T] : Y
Masukkan Bilangan = 16
Nilai 16 % 2 adalah = 0

Ingin Hitung Lagi [Y/T] :

```

### 3. Pernyataan while

Pernyataan perulangan `while` merupakan instruksi perulangan yang mirip dengan perulangan `for`. Bentuk perulangan `while` dikendalikan oleh syarat tertentu, yaitu perulangan akan terus dilaksanakan selama syarat tersebut terpenuhi.

Bentuk umum perulangan `while`, sebagai berikut:

```cpp
while (syarat) {
    Pernyataan / perintah;
}
```

```cpp
while (syarat) {
    Pernyataan / perintah;
    Pernyataan / perintah;
}
```

**Contoh-7**

```cpp
#include <iostream>
#include <cstdlib> // for system function

int main() {
    // For Windows, you can use system("cls")
    system("cls");
    
    // For Unix-like systems (Linux, macOS), you can use system("clear")
    //system("clear");
    int bil = 1;
    while (bil <= 10) {
        printf(" %d ", bil);
        ++bil;
    }
    return 0;
}

```

Output yang akan dihasilkan, dari program contoh-7 diatas adalah:

```
 1  2  3  4  5  6  7  8  9  10
```

**Contoh-8**

```cpp
#include <iostream>

int main() {

    int bil = 2;
    while (bil <= 10) {
        printf(" %d ", bil);
        bil += 2;
    }
    return 0;
}

```

Output yang akan dihasilkan, dari program contoh-8 diatas adalah:

```
 2  4  6  8  10
```

### 4. Pernyataan do - while

Pernyataan perulangan `do - while` merupakan bentuk perulangan yang melaksanakan perulangan terlebih dahulu dan pengujian perulangan dilakukan dibelakang.

Bentuk umum perulangan `do - while`, sebagai berikut:

```cpp
do {
    pernyataan / perintah;
}
while (syarat);
```

```cpp
do {
    Pernyataan / perintah;
    Pernyataan / perintah;
}
while (syarat);
```

**Contoh-9**

```cpp
#include <iostream>
//#include <cstdlib> // for system function

int main() {
   // system("cls");
    int bil = 2;
    do {
        printf(" %d ", bil);
        bil += 2;
    } while (bil <= 10);
    return 0;
}

```

Output yang akan dihasilkan, dari program contoh-9 diatas adalah:

```
2  4  6  8  10
```
