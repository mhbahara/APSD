
## Operasi String

Operasi string selalu dijumpai didalam bahasa pemrograman, dikarenakan hampir semua bahasa pemrograman menggunakan manual inputnya adalah string, terutama pada pemrograman visualisasi. Pada bab ini akan dibahas beberapa perintah dan fungsi string (Frieyadie, 2006).

### 1. Fungsi Manipulasi String

C++ menyediakan beberapa fungsi yang digunakan untuk keperluan menipulasi string, diantaranya:

### 1.1. Fungsi strcat()

Fungsi ini digunakan untuk menambahkan string sumber ke bagian akhir dari string tujuan. File header yang harus disertakan adalah string.h dan ctype.h

**Bentuk Penulisan :**

```
strcat(tujuan, sumber);
```

**Contoh 01 Fungsi strcat**

```cpp
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a1[20];
    char a2[20];
    cout << "Masukkan Kata - 1 = ";
    cin >> a1;
    cout << "Masukkan Kata - 2 = ";
    cin >> a2;
    strcat(a1, a2);
    cout << "Hasil Penggabungannya " << a1 << endl;
    return 0;
}

```

**Output yang akan dihasilkan, dari program contoh-1 diatas adalah:**
```plaintext
Masukkan Kata - 1= Hello
Masukkan Kata - 2= World
Hasil Penggabungannya HelloWorld
```
### 1.2. Fungsi strcmp()

Fungsi ini digunakan untuk membandingkan string pertama dengan string kedua. Hasil dari fungsi ini bertipe data integer (int). File header yang harus disertakan adalah string.h

**Bentuk Penulisan :**

```cpp
strcmp(string1, string2);
```

**Contoh 02 Fungsi strcmp**

```cpp
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a1[] = "UNIVERSITAS PUTRA BANGSA";
    char a2[] = "Universitas Putra Bangsa";
    char b1[] = "universitas putra bangsa";
    cout << "Hasil Perbandingan " << a1 << " dan " << a2 << " -> ";
    cout << strcmp(a1, a2) << endl;
    cout << "Hasil Perbandingan " << a2 << " dan " << a2 << " -> ";
    cout << strcmp(a2, a1) << endl;
    cout << "Hasil Perbandingan " << a1 << " dan " << b1 << " -> ";
    cout << strcmp(a1, b1) << endl;
    return 0;
}

```

**Output yang akan dihasilkan, dari program contoh-2 diatas:**
```plaintext
Hasil Perbandingan UNIVERSITAS PUTRA BANGSA dan Universitas Putra Bangsa -> -1
Hasil Perbandingan Universitas Putra Bangsa dan Universitas Putra Bangsa -> 1
Hasil Perbandingan UNIVERSITAS PUTRA BANGSA dan universitas putra bangsa -> -1
```
Keterangan 

- Hasil perbandingan yang dicetak adalah nilai integer yang menunjukkan hubungan leksikografis antara kedua string karakter tersebut:
  - Jika nilai yang dicetak adalah 0, berarti kedua string karakter tersebut sama.
  - Jika nilai yang dicetak negatif, berarti string karakter pertama lebih kecil secara leksikografis daripada string karakter kedua.
  - Jika nilai yang dicetak positif, berarti string karakter pertama lebih besar secara leksikografis daripada string karakter kedua.

### 1.3. Fungsi strcpy()

Fungsi ini digunakan untuk menyalin string asal ke-variabel string tujuan, dengan syarat string tujuan harus mempunyai tipe data dan dan ukuran yang sama dengan string asal. File header yang harus disertakan adalah string.h.

**Bentuk Penulisan :**

```cpp
strcpy(string_tujuan, string_asal);
```

**Contoh 03 Fungsi strcpy**

```cpp
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char huruf[20];
    char pindah[20];
    cout << "Masukkan Sembarang Kata = ";
    cin.getline(huruf, sizeof(huruf)); // Mendapatkan input string dengan batasan ukuran
    /* Proses */
    strcpy(pindah, huruf);
    cout << "Pemindahannya = " << pindah;
    return 0;
}

```

**Output yang akan dihasilkan, dari program contoh-3 diatas:**
```plaintext
Masukkan Sembarang Kata = Hello
Pemindahannya = Hello

```

### 1.4. Fungsi strlen()

Fungsi ini digunakan untuk memperoleh banyaknya karakter dalam string. File header yang harus disertakan adalah string.h.

**Bentuk Penulisan :**

```cpp
strlen(string);
```

**Contoh 04 Fungsi strlen**

```cpp
#include <iostream>
#include <cstring> // Untuk strlen()

using namespace std;

int main() {
    char huruf[20];
    cout << "Masukkan Sembarang Kata = ";
    cin.getline(huruf, sizeof(huruf)); // Mendapatkan input string dengan batasan ukuran
    cout << "Panjang Kata Yang Diinputkan = " << strlen(huruf);
    return 0;
}

```

**Output yang akan dihasilkan, dari program contoh-4 diatas:**
```plaintext
Masukkan Sembarang Kata = Hello
Panjang Kata Yang Diinputkan = 5

```
### 1.5. Fungsi strrev()

Fungsi ini digunakan untuk membalik letak urutan pada string. String urutan paling akhir dipindahkan keurutan paling depan dan seterusnya. File header yang harus disertakan adalah string.h.

**Bentuk Penulisan :**

```cpp
strrev(string);
```

**Contoh 05 Fungsi strrev**

```cpp
#include <iostream>
#include <cstring> // Untuk strrev()

using namespace std;

int main() {
    char kata[20];
    cout << "Masukkan Sembarang Kata = ";
    cin.getline(kata, sizeof(kata)); // Mendapatkan input string dengan batasan ukuran
    strrev(kata);
    cout << "Hasil Perubahan = " << kata << endl;
    
    cout << "Tekan Enter untuk melanjutkan...";
    cin.ignore(); // Menunggu sampai tombol Enter ditekan
    return 0;
}

```

**Output yang akan dihasilkan, dari program contoh-5 diatas:**
```plaintext
Masukan Sembarang Kata = Hello
Hasil Perubahan = olleH
```

### 2. Fungsi Konfersi String

C++ menyediakan beberapa fungsi yang digunakan untuk keperluan konfersi string.

#### 2.1. Fungsi atof()

Fungsi ini digunakan untuk mengubah string (teks) angka menjadi bilangan numerik float. File header yang harus disertakan adalah math.h.

**Contoh 06 Fungsi atof**

```cpp
#include <iostream>
#include <cstdlib> // Untuk atof()
#include <cmath> // Untuk pow()

using namespace std;

int main() {
    char kata[20];
    float angka, a;
    
    cout << "Masukkan Sembarang Kata berupa angka = ";
    cin >> kata;

    angka = atof(kata);
    a = angka + 5;

    cout << "Hasil Perubahan ditambah dengan 5 = " << a << endl;

    return 0;
}

```

**Output yang akan dihasilkan, dari program contoh-6 diatas:**
```plaintext
Masukan Sembarang Kata berupa angka = 52.4
Hasil Perubahan ditambah dengan 5 = 57.4
```
### 2.2. Fungsi atoi()

Fungsi ini digunakan untuk mengubah string (teks) angka menjadi bilangan numerik integer. File header yang harus disertakan adalah stdlib.h.

**Contoh 07 Fungsi atoi**

```cpp
#include <iostream>
#include <cstdlib> // Untuk atoi()
#include <cstring> // Untuk strlen()

using namespace std;

int main() {
    char kata[20];
    float angka, a;
    
    cout << "Masukkan Sembarang Kata berupa angka = ";
    cin.getline(kata, 20);

    angka = atof(kata);
    a = angka + 5;

    cout << "Hasil Perubahan ditambah dengan 5 = " << a << endl;

    return 0;
}

```

**Output yang akan dihasilkan, dari program contoh-7 diatas:**
```plaintext
Masukan Sembarang Kata berupa angka = 75
Hasil Perubahan ditambah dengan 5 = 80
```

### 2.3. Fungsi atol()

Fungsi ini digunakan untuk mengubah string (teks) angka menjadi bilangan numerik long integer. File header yang harus disertakan adalah stdlib.h.

**Contoh 08 Fungsi atol**

```cpp
#include <iostream>
#include <cstdlib>
#include <stdio.h>

int main() {
    char kata[20];
    float angka, a;
    
    std::cout << "Masukkan Sembarang Kata berupa angka = ";
    fgets(kata, sizeof(kata), stdin);

    angka = atof(kata);
    a = angka + 5;

    std::cout << "Hasil Perubahan ditambah dengan 5 = " << a;

    return 0;
}

```

**Output yang akan dihasilkan, dari program contoh-8 diatas:**
```plaintext
Masukan Sembarang Kata berupa angka = 10
Hasil Perubahan ditambah dengan 5 = 15
```

### 2.4. Fungsi strlwr()

Fungsi ini digunakan untuk mengubah setiap huruf kapital (huruf besar) dalam string menjadi huruf kecil. File header yang harus disertakan adalah string.h.

**Contoh 09 Fungsi strlwr**

```cpp
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kata[20];
    
    std::cout << "Masukkan Sembarang Kata dengan Huruf Besar = ";
    fgets(kata, sizeof(kata), stdin);

    for (int i = 0; kata[i] != '\0'; ++i) {
        kata[i] = tolower(kata[i]);
    }

    std::cout << "Hasil Perubahan = " << kata;

    return 0;
}

```

**Output yang akan dihasilkan, dari program contoh-9 diatas:**
```plaintext
Masukan Sembarang Kata dengan Huruf Besar =HELLO
Hasil Perubahan = hello
```

### 2.5. Fungsi strupr()

Fungsi ini digunakan untuk mengubah setiap huruf kecil dalam string menjadi huruf kapital (huruf besar). File header yang harus disertakan adalah string.h.

**Contoh 10 Fungsi strupr**

```cpp
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kata[20];

    std::cout << "Masukan Sembarang Kata dengan Huruf Kecil= ";
    fgets(kata, sizeof(kata), stdin);

    for (int i = 0; kata[i] != '\0'; ++i) {
        kata[i] = toupper(kata[i]);
    }

    std::cout << "Hasil Perubahan = " << kata;

    return 0;
}

```

**Output yang akan dihasilkan, dari program contoh-10 diatas:**
```plaintext
Masukan Sembarang Kata dengan Huruf Kecil=hello
Hasil Perubahan = HELLO
```

### Latihan

1. Program untuk menghitung panjang kata:

```cpp
#include <iostream>
#include <cstring>

int main() {
    char kalimat[] = "Ilmu Komputer Universitas Putra Bangsa Kebumen";
    int panjang = std::strlen(kalimat);
    std::cout << "Panjang kata: " << panjang << std::endl;
    return 0;
}

```

2. Program untuk membalik kata:

```cpp
#include <iostream>
#include <cstring>

int main() {
    char kalimat[] = "Ilmu Komputer Universitas Putra Bangsa Kebumen";
    int panjang = strlen(kalimat);
    for (int i = panjang - 1; i >= 0; i--) {
        std::cout << kalimat[i];
    }
    std::cout << std::endl;
    return 0;
}

```

3. Program untuk menggabungkan dua string:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string kalimat1 = "Manajemen";
    std::string kalimat2 = "Informatika";
    std::string hasil = kalimat1 + kalimat2;
    std::cout << "Hasil gabungan: " << hasil << std::endl;
    return 0;
}

```

4. Program untuk melakukan operasi aritmatika pada string:

```cpp
#include <iostream>
#include <cstdlib> // untuk atof()

int main() {
    char kalimat1[] = "35.6";
    char kalimat2[] = "12.5";

    // Konversi string ke floating point
    float angka1 = atof(kalimat1);
    float angka2 = atof(kalimat2);

    // Operasi matematika
    std::cout << "a. Perkalian: " << angka1 * angka2 << std::endl;
    std::cout << "b. Pembagian: " << angka1 / angka2 << std::endl;
    std::cout << "c. Penambahan: " << angka1 + angka2 << std::endl;
    std::cout << "d. Pengurangan: " << angka1 - angka2 << std::endl;

    // Mengonversi ke integer dan menghitung sisa hasil pembagian
    int intAngka1 = static_cast<int>(angka1);
    int intAngka2 = static_cast<int>(angka2);
    std::cout << "e. Sisa hasil pembagian: " << (intAngka1 % intAngka2) << std::endl;

    return 0;
}

```
