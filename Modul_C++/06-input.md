### Perintah Masukan

Perintah standar input yang disediakan oleh C++ meliputi:

- `scanf()`
- `gets()`
- `cin()`
- `getch`
- `getche()`

#### 1. `scanf()`

Fungsi `scanf()` digunakan untuk memasukkan berbagai jenis data. Bentuk Umum dari fungsi ini adalah:

```cpp
scanf("penentu format", &nama-variabel);
```

Tabel Penentu Format `scanf()`

| TIPE DATA               | Penentu Format Untuk `scanf()` |
|-------------------------|--------------------------------|
| Integer                 | `%d`                           |
| Floating Point          | Bentuk Desimal `%e` atau `%f`  |
|                         | Bentuk Berpangkat `%e` atau `%f` |
| Double Precision        | `%lf`                          |
| Character               | `%c`                           |
| String                  | `%s`                           |
| Unsigned Integer        | `%u`                           |
| Long Integer            | `%ld`                          |
| Long Unsigned Integer   | `%lu`                          |
| Unsigned Hexadecimal Integer | `%x`                      |
| Unsigned Octal Integer  | `%o`                           |

#### Contoh:

```cpp
#include <iostream>

using namespace std;

int main() {
    char nama[15], kelas[20], hobby[15];

    cout << "\tBIODATA SAYA\n";
    cout << "Nama : "; cin >> nama;
    cout << "Kelas: "; cin >> kelas;
    cout << "Hobby: "; cin >> hobby;

    cin.get(); // Menunggu input pengguna sebelum program berakhir

    return 0;
}

```

#### Output:

Output yang dihasilkan dari program di atas adalah:

```
BIODATA SAYA
Nama : [input nama]
Kelas: [input kelas]
Hobby: [input hobi]
```

#### 2. `gets()`

Fungsi `gets()` digunakan untuk memasukkan data string. Perbedaan antara `scanf()` dengan `gets()` adalah:

- `scanf()` tidak dapat menerima string yang mengandung spasi atau tab dan dianggap sebagai data terpisah.
- `gets()` dapat menerima string yang mengandung spasi atau tab dan masing-masing dianggap sebagai satu kesatuan data.

#### Contoh:

```cpp
#include <iostream>

using namespace std;

int main() {
    char nm1[20];
    char nm2[20];

    cout << "Masukan nama ke - 1 = ";
    cin.getline(nm1, 20);
    cout << "Masukan nama ke - 2 = ";
    cin >> nm2;

    cout << "Senang Berkenalan Dengan Anda .." << endl;
    cout << nm1 << endl;
    cout << "Senang Berkenalan Dengan Anda .." << nm1 << endl;
    cout << "Senang Berkenalan Dengan Anda .." << endl;
    cout << nm2 << endl;
    cout << "Senang Berkenalan Dengan Anda .." << nm2;

    return 0;
}

```

#### Output:

Output yang dihasilkan dari program di atas adalah:

```
Masukan nama ke - 1 = [input nama]
Masukan nama ke - 2 = [input nama]
Senang Berkenalan Dengan Anda ..
[isi nm1]
Senang Berkenalan Dengan Anda ..[isi nm1]
Senang Berkenalan Dengan Anda ..
[isi nm2]
Senang Berkenalan Dengan Anda ..[isi nm2]
```

#### 3. `cin`

Fungsi `cin` merupakan sebuah objeck dalam C++ yang digunakan untuk memasukkan suatu data.

#### Contoh:

```cpp
#include <iostream>

using namespace std;

int main() {
    int nilai1, nilai2, total;

    cout << "Masukan Nilai 1 : ";
    cin >> nilai1;
    cout << "Masukan Nilai 2 : ";
    cin >> nilai2;

    total = nilai1 + nilai2;
    cout << "Masukan Total Nilai : " << total << endl;

    return 0;
}

```

#### Output:

Output yang dihasilkan dari program di atas adalah:

```
Masukan Nilai 1 : [input nilai1]
Masukan Nilai 2 : [input nilai2]
Masukan Total Nilai : [hasil penjumlahan nilai1 dan nilai2]
```

#### 4. `getchar()`

Fungsi `getchar()` (get character and echo) dipakai untuk membaca sebuah karakter tanpa menekan tombol ENTER, dan karakter yang dimasukkan tidak akan ditampilkan di layar.

#### Contoh:

```cpp
#include <iostream>

using namespace std;

int main() {
    char kar;
    cout << "Masukan Sebuah Karakter Bebas = ";
    kar = getchar();
    cout << "\nTadi Anda Memasukan karakter " << kar;

    return 0;
}
```

#### Output:

Output yang dihasilkan dari program di atas adalah:

```
Masukan Sebuah Karakter Bebas = [input karakter]
Tadi Anda Memasukan karakter [karakter yang diinput]
```
