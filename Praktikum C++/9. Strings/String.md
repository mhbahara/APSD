
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
#include <string.h>
#include <ctype.h>
#include <iostream.h>

main()
{
    char a1[20];
    char a2[20];
    clrscr();
    cout<<"Masukkan Kata - 1= ";
    cin>>a1;
    cout<<"Masukkan Kata - 2= ";
    cin>>a2;
    strcat(a1, a2);
    cout<<"Hasil Penggabungannya "<<a1;
    getch();
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
#include <string.h>
#include <iostream.h>

main()
{
    char a1[] = "UNIVERSITAS PUTRA BANGSA";
    char a2[] = "Universitas Putra Bangsa";
    char b1[] = "universitas putra bangsa";
    clrscr();
    cout<<"Hasil Perbandingan "<<a1<<" dan "<<a2<<"->";
    cout<<strcmp(a1,a2)<<endl;
    cout<<"Hasil Perbandingan "<<a2<<" dan "<<a2<<"->";
    cout<<strcmp(a2,a1) <<endl;
    cout<<"Hasil Perbandingan "<<a1<<" dan "<<b1<<"->";
    cout<<strcmp(a1,b1) <<endl;
    getch();
}
```

**Output yang akan dihasilkan, dari program contoh-2 diatas:**
```plaintext
Hasil Perbandingan UNIVERSITAS PUTRA BANGSA dan Universitas Putra Bangsa->32
Hasil Perbandingan Universitas Putra Bangsa dan UNIVERSITAS PUTRA BANGSA->-32
Hasil Perbandingan UNIVERSITAS PUTRA BANGSA dan universitas putra bangsa->-32

```

### 1.3. Fungsi strcpy()

Fungsi ini digunakan untuk menyalin string asal ke-variabel string tujuan, dengan syarat string tujuan harus mempunyai tipe data dan dan ukuran yang sama dengan string asal. File header yang harus disertakan adalah string.h.

**Bentuk Penulisan :**

```cpp
strcpy(string_tujuan, string_asal);
```

**Contoh 03 Fungsi strcpy**

```cpp
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>

main()
{
    char huruf[20];
    char pindah[20];
    clrscr();
    cout<<"Masukkan Sembarang Kata = ";
    gets(huruf);
    /* Proses */
    strcpy(pindah, huruf);
    cout<<"Pemindahannya = "<<pindah;
    getch();
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
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>

main()
{
    char huruf[20];
    char pindah[20];
    clrscr();
    cout<<"Masukkan Sembarang Kata = ";
    gets(huruf);
    cout<<"Panjang Kata Yang Diinputkan = ";
    cout<<strlen(huruf);
    getch();
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
#include <iostream.h>
#include <conio.h>
#include <string.h>

int main() {
    char kata[20];
    clrscr();
    cout << "Masukkan Sembarang Kata = ";
    gets(kata);
    strrev(kata);
    cout << "Hasil Perubahan = " << kata;
    getch();
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
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream.h>
main()
{
    char kata[20];
    float angka, a, b;
    clrscr();
    cout<<"Masukan Sembarang Kata berupa angka = ";
    gets(kata);
    angka = atof(kata);
    a = angka + 5;
    cout<<"Hasil Perubahan ditambah dengan 5 = "<<a;
    getch();
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
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream.h>
main()
{
    char kata[20];
    float angka, a, b;
    clrscr();
    cout<<"Masukan Sembarang Kata berupa angka = ";
    gets(kata);
    angka = atoi(kata);
    a = angka + 5;
    cout<<"Hasil Perubahan ditambah dengan 5 = "<<a;
    getch();
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
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream.h>
main()
{
    char kata[20];
    float angka, a, b;
    clrscr();
    cout<<"Masukan Sembarang Kata berupa angka = ";
    gets(kata);
    angka = atol(kata);
    a = angka + 5;
    cout<<"Hasil Perubahan ditambah dengan 5 = "<<a;
    getch();
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
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>
main()
{
    char kata[20];
    clrscr();
    cout<<"Masukan Sembarang Kata dengan Huruf Besar =";
    gets(kata);
    strlwr(kata);
    cout<<"Hasil Perubahan = "<<kata;
    getch();
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
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>
main()
{
    char kata[20];
    clrscr();
    cout<<"Masukan Sembarang Kata dengan Huruf Kecil=";
    gets(kata);
    strupr(kata);
    cout<<"Hasil Perubahan = "<<kata;
    getch();
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
#include <iostream.h>
#include <string.h>

int main() {
    char kalimat[] = "Akademi Manajemen Informatika dan Komputer Bina Sarana Informatika";
    int panjang = strlen(kalimat);
    cout << "Panjang kata: " << panjang << endl;
    return 0;
}
```

2. Program untuk membalik kata:

```cpp
#include <iostream.h>
#include <string.h>

int main() {
    char kalimat[] = "Akademi Manajemen Informatika dan Komputer Bina Sarana Informatika";
    int panjang = strlen(kalimat);
    for (int i = panjang - 1; i >= 0; i--) {
        cout << kalimat[i];
    }
    cout << endl;
    return 0;
}
```

3. Program untuk menggabungkan dua string:

```cpp
#include <iostream.h>
#include <string.h>

int main() {
    char kalimat1[] = "Manajemen";
    char kalimat2[] = "Informatika";
    strcat(kalimat1, kalimat2);
    cout << "Hasil gabungan: " << kalimat1 << endl;
    return 0;
}
```

4. Program untuk melakukan operasi aritmatika pada string:

```cpp
#include <iostream.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char kalimat1[] = "35.6";
    char kalimat2[] = "12.5";

    float angka1 = atof(kalimat1);
    float angka2 = atof(kalimat2);

    cout << "a. Perkalian: " << angka1 * angka2 << endl;
    cout << "b. Pembagian: " << angka1 / angka2 << endl;
    cout << "c. Penambahan: " << angka1 + angka2 << endl;
    cout << "d. Pengurangan: " << angka1 - angka2 << endl;
    cout << "e. Sisa hasil pembagian: " << ((int)angka1 % (int)angka2) << endl;

    return 0;
}
```
