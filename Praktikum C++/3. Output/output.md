## Perintah Keluaran

Perintah standar output yang disediakan oleh C++ antara lain:

- `printf()`
- `puts()`
- `putchar()`
- `cout()`

### 1. printf()

Fungsi `printf()` merupakan fungsi keluaran yang umum digunakan untuk menampilkan informasi ke layar. String-Kontrol digunakan untuk menentukan format output.

#### Tabel Penentu Format `printf()`

| TIPE DATA          | Penentu Format untuk `printf()` |
|--------------------|---------------------------------|
| Integer            | %d                              |
| Floating Point     | Bentuk Desimal (%f), Bentuk Berpangkat (%e), Bentuk Desimal dan Pangkat (%g) |
| Double Precision   | %lf                             |
| Character          | %c                              |
| String             | %s                              |
| Unsigned Integer   | %u                              |
| Long Integer       | %ld                             |
| Long Unsigned Integer | %lu                           |
| Unsigned Hexadecimal Integer | %x                      |
| Unsigned Octal Integer      | %o                      |

Contoh penggunaan:

```cpp
printf("%c merupakan abjad yang ke - %d", 'b', 2);
```

### 2. puts()

Fungsi `puts()` digunakan untuk mencetak string ke layar tanpa perlu menyertakan format string seperti pada `printf()`.

Contoh penggunaan:

```cpp
char nama[5] = "Dita";
puts("Nama Saya Adalah ");
puts(nama);
```

### 3. putchar()

Fungsi `putchar()` digunakan untuk menampilkan sebuah karakter ke layar tanpa perlu mencetak pindah baris.

Contoh penggunaan:

```cpp
putchar('U');
putchar('P');
putchar('B');
putchar('-');
putchar('2');
putchar('0');
putchar('2');
putchar('4');
```

### 4. cout

Fungsi `cout` merupakan sebuah objek dalam Borland C++ yang digunakan untuk menampilkan data ke layar.

Contoh penggunaan:

```cpp
#include <iostream.h>
main() {
    int jumbar1 = 150, jumbar2 = 23;
    clrscr();
    cout << "Jumlah Barang 1: " << jumbar1;
    cout << " Jumlah Barang 2: " << jumbar2;
}
```

### 5. Fungsi Manipulator

Terdapat beberapa fungsi manipulator yang dapat digunakan untuk mengatur tampilan layar, seperti:

- `endl`
- `end`
- `flush()`
- `dec()`
- `hex()`
- `oct()`
- `setbase()`
- `setw()`
- `setfill()`
- `setprecision()`
- `setosflags()`

Berikut adalah beberapa contoh penggunaannya.

#### a. endl

Fungsi `endl` digunakan untuk menyisipkan karakter NewLine atau membuat pindah baris.

Contoh penggunaan:

```cpp
#include <iostream.h>
main() {
    char nim[9] = "12098890", nama[15] = "Andi";
    char alamat[20] = "Jakarta Selatan";
    clrscr();
    cout << "Nim :" << nim << endl;
    cout << "Nama :" << nama << endl;
    cout << "Alamat :" << alamat << endl;
}
```

#### b. ends

Fungsi `ends` digunakan untuk menambahkan karakter null ke deretan karakter.

Contoh penggunaan:

```cpp
#include <iostream.h>
main() {
    int a, b, c, d;
    clrscr();
    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai B : ";
    cin >> b;
    c = a % b;
    d = a * b;
    cout << "Hasil dari C = A % B adalah " << c << ends;
    cout << "Hasil dari D = A * B adalah " << d << ends;
}
```

#### c. dec, oct, dan hex

Fungsi `dec`, `oct`, dan `hex` digunakan untuk menampilkan data dalam bentuk desimal, oktal, dan heksadesimal.

Contoh penggunaan:

```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    int nilai = 320;
    clrscr();
    cout << "Nilai Awal = " << nilai << endl;
    cout << "Nilai ke Octal = " << oct << nilai << endl;
    cout << "Nilai ke Hexadesimal = " << hex << nilai << endl;
    cout << "Nilai ke Desimal = " << dec << nilai << endl;
}
```

#### d. setprecision()

Fungsi `setprecision()` digunakan untuk mengatur jumlah digit desimal yang ingin ditampilkan.

Contoh penggunaan:

```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    float a, b, c;
    a = 25.23;
    b = 12.54;
    clrscr();
    c = a * b;
    cout << setiosflags(ios::fixed);
    cout << setprecision(1) << c << endl;
    cout << setprecision(2) << c << endl;
    cout << setprecision(3) << c << endl;
    cout << setprecision(4) << c << endl;
    cout << setprecision(5) << c << endl;
}
```

#### e. setbase()

Fungsi `setbase()` digunakan untuk konversi bilangan oktal, desimal, dan heksadesimal.

Contoh penggunaan:

```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    int a = 250;
    clrscr();
    cout << "Penggunan Manipulator setbase()" << endl << endl;
    cout << "Decimal Octal Hexadecimal" << endl;
    cout << "----------------------------" << endl;
    for (a = 250; a <= 260; a++) {
        cout << setbase(10) << a << " ";
        cout << setbase(8) << a << " ";
        cout << setbase(16) << a << endl;
    }
    getche();
}
```

#### f. setw()

Fungsi `setw()` digunakan untuk mengatur lebar tampilan di layar dari suatu nilai variabel.

Contoh penggunaan:

```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    int a;
    clrscr();
    cout << "Penggunan Manipulator setw()" << endl << endl;
    cout << "-------------------------------" << endl;
    for (a = 1; a <= 15; a++) {
        cout << setw(a) << a << endl;
    }
    cout << "-------------------------------" << endl;
    getche();
}
```

#### g. setfill()

Fungsi `setfill()` digunakan untuk menampilkan suatu karakter yang diletakkan di depan nilai yang diatur oleh fungsi `setw()`.

Contoh penggunaan:

```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    int a;
    clrscr();
    cout << "Penggunan Manipulator setfill()" << endl << endl;
    cout << "-------------------------------" << endl;
    for (a = 1; a <= 15; a++) {
        cout << setfill('-') << setw(a) << a << endl;
    }
    getche();
}
```

#### h. setiosflags()

Fungsi `setiosflags()` digunakan untuk mengatur sejumlah format keluaran data.
Berikut adalah beberapa format keluaran yang dapat diatur menggunakan fungsi `setiosflags()`:

1. **Tanda Format Perataan Kiri dan Kanan**: Ada dua tanda format yang digunakan untuk perataan kiri dan kanan, yaitu `ios::left` untuk perataan kiri dan `ios::right` untuk perataan kanan.

Contoh penggunaan `ios::left` dan `ios::right`:

```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    int a = 75, b = 56;
    clrscr();
    cout << "Penggunaan ios::left dan ios::right\n\n";
    cout << "Rata Sebelah Kiri = ";
    cout << setiosflags(ios::left) << setw(10) << a;
    cout << setiosflags(ios::left) << setw(10) << b;
    cout << endl;
    cout << "Rata Sebelah Kanan = ";
    cout << setiosflags(ios::right) << setw(10) << a;
    cout << setiosflags(ios::right) << setw(10) << b;
    getche();
}
```

2. **Tanda Format Keluaran Notasi Konversi**: Dua tanda format yang umum digunakan adalah `ios::scientific` untuk notasi eksponensial dan `ios::fixed` untuk notasi desimal.

Contoh penggunaan `ios::scientific` dan `ios::fixed`:


```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    clrscr();
    cout << "Penggunaan ios::scientific dan ios::fixed\n";
    cout << "\nHasil ios::scientific dari 75.45 adalah ";
    cout << setiosflags(ios::scientific) << 75.45 << endl;
    cout << "Hasil ios::fixed dari 56.65 adalah ";
    cout << setiosflags(ios::fixed) << 56.65;
    getche();
}
```

3. **Tanda Format Konversi Dec, Oct, dan Hex**: Terdapat tiga tanda format untuk konversi keluaran dalam basis desimal, oktal, dan heksadesimal, yaitu `ios::dec` untuk desimal, `ios::oct` untuk oktal, dan `ios::hex` untuk heksadesimal.

Contoh penggunaan `ios::dec`, `ios::oct`, dan `ios::hex`:

```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    clrscr();
    cout << "\n\n";
    cout << "Bilangan Decimal dar 75 = ";
    cout << setiosflags(ios::dec) << 75 << endl;
    cout << "Bilangan Octal dari 10 = ";
    cout << setiosflags(ios::oct) << 10 << endl;
    cout << "Bilangan Hexadecimal dari 15 = ";
    cout << setiosflags(ios::hex) << 15;
    getche();
}
```

4. **Tanda Format Manipulasi Huruf Hexadecimal**: Untuk memanipulasi atau mengubah huruf pada notasi heksadesimal, kita dapat menggunakan `ios::uppercase`. 

Contoh penggunaan `ios::uppercase`:

```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    int a;
    clrscr();
    cout << "Penggunaan ios::uppercase\n";
    cout << "-------------------------\n";
    cout << "Tanpa Dengan \n";
    cout << "Konversi Konversi \n";
    cout << "-------------------------\n";
    for (a = 1; a <= 15; a++)
        cout << hex << a << endl;
    for (a = 1; a <= 15; a++) {
        gotoxy(15, a + 5);
        cout << setiosflags(ios::uppercase) << hex << a << endl;
    }
    getche();
}
```

5. **Tanda Format Keluaran Dasar Bilangan Hexadecimal dan Octal**: Untuk menampilkan dasar bilangan heksadesimal dan oktal, kita dapat menggunakan `ios::showbase`. 

Contoh penggunaan `ios::showbase`:

```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    int a;
    clrscr();
    cout << "Penggunaan ios::showbase\n";
    cout << "----------------------------\n";
    cout << "Decimal Hexadecimal Oktal \n";
    cout << "----------------------------\n";
    cout << setiosflags(ios::showbase);
    for (a = 1; a <= 15; a++) {
        gotoxy(4, a + 5);
        cout << dec << a << endl;
    }
    for (a = 1; a <= 15; a++) {
        gotoxy(15, a + 5);
        cout << hex << a << endl;
    }
    for (a = 1; a <= 15; a++) {
        gotoxy(25, a + 5);
        cout << oct << a << endl;
    }
    cout << "----------------------------\n";
    getche();
}
```

6. **Tanda Format Menampilkan Titik Desimal**: Untuk menampilkan titik desimal, kita dapat menggunakan `ios::showpoint`.

Contoh penggunaan `ios::showpoint`:

```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    double a = 78;
    clrscr();
    // Tanpa tanda format ios::showpoint
    cout << "Tanpa tanda format ios::showpoint" << endl;
    cout << "Variabel a = " << a << "\n\n";
    // Dengan tanda format ios::showpoint
    cout << "Dengan tanda format ios::showpoint" << endl;
    cout << setiosflags(ios::showpoint);
    cout << "Variabel a = " << a << endl;
    getche();
}
```

7. **Tanda Format Menampilkan Simbol Plus (+)**: Untuk menampilkan simbol plus (+) pada bilangan positif, kita dapat menggunakan `ios::showpos`.

Contoh penggunaan `ios::showpos`:

```cpp
#include <iostream.h>
#include <iomanip.h>
main() {
    int a = 8, b = -9;
    clrscr();
    cout << "Tanpa Menggunakan ios::showpos" << "\n\n";
    cout << "Nilai a = " << a << " Nilai b = " << b << endl;
    cout << "\n\n";
    cout << setiosflags(ios::showpos);
    cout << "Dengan Menggunakan ios::showpos" << "\n\n";
    cout << "Nilai a = " << a << " Nilai b = " << b << endl;
    getche();
}
```
Ini adalah penjelasan dan contoh-contoh tentang penggunaan berbagai tanda format dalam C++.