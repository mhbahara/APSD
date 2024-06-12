# Operator dalam Pemrograman


Operator merupakan simbol atau karakter yang biasa dilibatkan dalam program, yang digunakan untuk melakukan sesuatu operasi atau manipulasi, seperti penjumlahan, pengurangan, dan lain-lain.

Operator mempunyai sifat sebagai berikut:

- **Unary**: Sifat Unary pada operator adalah hanya melibatkan sebuah operand pada suatu operasi aritmatik  
  *Contoh*: `-5`

- **Binary**: Sifat Binary pada operator adalah melibatkan dua buah operand pada suatu operasi aritmatik  
  *Contoh*: `4 + 8`

- **Ternary**: Sifat Ternary pada operator adalah melibatkan tiga buah operand pada suatu operasi aritmatik  
  *Contoh*: `(10 % 3) + 4 + 2`



## Operator Aritmatika

Operator untuk operasi aritmatika yang tergolong sebagai operator binary adalah:

| Operator | Keterangan  | Contoh   |
|----------|-------------|----------|
| *        | Perkalian   | 4 * 5    |
| /        | Pembagian   | 8 / 2    |
| %        | Sisa Pembagian (mod) | 5 % 2    |
| +        | Penjumlahan | 7 + 2    |
| -        | Pengurangan | 6 - 2    |

Operator yang tergolong sebagai operator Unary adalah:

| Operator | Keterangan  | Contoh   |
|----------|-------------|----------|
| +        | Tanda Plus  | -4       |
| -        | Tanda Minus | +6       |

**01 Operator Aritmatika**
```cpp
#include <iostream>
using namespace std;

main() {
  int x, y, a = 0, b = 0, c = 0, d = 0;
  cout << "Masukan Nilai A : "; cin >> x;
  cout << "Masukan Nilai B : "; cin >> y;
  a = x + y; c = x % y;
  b = x - y; d = x * y;
  printf("Hasil Dari A = X + Y = %i \n", a);
  printf("Hasil Dari B = X - Y = %i \n", b);
  cout << "Hasil dari C = X % Y = " << c << endl;
  cout << "Hasil dari D = X * Y = " << d << endl;
  return 0;
}

```

Output yang akan dihasilkan dari program contoh-1 di atas adalah:


```
Masukan Nilai A : 10
Masukan Nilai B : 3
Hasil Dari A = X + Y = 13 
Hasil Dari B = X - Y = 7
Hasil dari C = X % Y = 1
Hasil dari D = X * Y = 30
```


### Ekspresi Aritmatika

Bentuk penulisan ekspresi aritmatika dikaitkan dengan pernyataan pemberi nilai. Bentuk Umum:
- Variabel, dikenal dengan sebutan LValue (Left Value)
- Ekspresi Aritmatika dikenal dengan sebutan RValue (Right Value)
- Tanda " = ", dikenal dengan sebagai Operator Pemberi Nilai (Assignment Operator).

### Hierarki Operator Aritmatika

Didalam suatu ekspresi aritmatika, selalu menjumpai beberapa operator aritmatika yang berbeda yang dapat digunakan secara bersamaan. Urutan operator aritmatika sebagai berikut:

Tabel Hierarki Operator Aritmatika

| Operator | Keterangan                   |
|----------|------------------------------|
| * atau / | Tingkatan operator sama      |
| %        | dengan penggunaan tergantung|
| + atau - | letak, yang di depan        |

Langkah perhitungannya:
- Tingkatan operator ini dapat diabaikan dengan penggunaan tanda kurung "( )".

**Contoh-1:** 

```
A = 8 + 2 * 3 / 6

```
Langkah perhitungannya :

```
A = 8 + 6 / 6 Æ ( 6 / 6 = 1 )
A = 8 + 1
A = 9

```

Tingkatan operator ini dapat diabaikan dengan penggunaan
tanda kurung “(“ dan “)”.
Contoh :

```
A = (8 + 2) * 3 / 6

```

Langkah perhitungannya :

```
A = 10 * 3 / 6
A = 30 / 6
A = 5
```
**02 Contoh Hierarki Operator Aritmatika**

```cpp
#include <iostream>
using namespace std;
main()
{
 int a, b;
 a = 8 + 2 * 3 / 6;
 b = (8 + 2) * 3 / 6;
 cout<<" A = 8 + 2 * 3 / 6"<<endl;
 cout<<" B = (8 + 2) * 3 /6"<<endl;
 cout<<endl;
 cout<<" Hasil dari A = "<<a<<endl;
 printf(" Hasil dari B = %i ",b);
 return 0;
}
```

Output yang akan dihasilkan, dari program contoh-2 diatas adalah : 
```
A = 8 + 2 * 3 / 6
B = (8 + 2) * 3 / 6

Hasil dari A = 9
Hasil dari B = 5
```



## Operator Pemberi Nilai Aritmatika


Operator Pemberi Nilai Aritmatika

Sebelumnya kita telah mengenal operator pemberi nilai (assignment operator) yaitu tanda “ = ”. Sebagai contoh penggunaan operator pemberi nilai: **A = A + 1**

Dari penulisan ekspresi diatas, C++ dapat menyederhanakan menjadi: **A += 1**

Notasi “ += ” ini dikenal dengan operator pemberi nilai aritmatika. Berikut adalah beberapa operator pemberi nilai aritmatika beserta keterangannya:

Operator Pemberi Nilai Aritmatika

| Operator | Keterangan      |
|----------|-----------------|
| *=       | Perkalian       |
| /=       | Pembagian       |
| %=       | Sisa Pembagian  |
| +=       | Penjumlahan     |
| -=       | Pengurangan     |



Ini adalah materi mengenai operator pemberi nilai aritmatika beserta keterangannya dalam format markdown. Apabila ada yang perlu ditambahkan atau ada pertanyaan, silakan beri tahu saya!

## Operator Penambah dan Pengurang

Masih berkaitan dengan operator pemberi nilai, C++ menyediakan operator penambah dan pengurang. Dari contoh penulisan operator pemberi nilai sebagai penyederhanaannya dapat digunakan operator penambah dan pengurang. Berikut adalah tabel operator penambah dan pengurang:

Tabel Operator Penambah dan Pengurang

| Operator | Keterangan                                    |
|----------|-----------------------------------------------|
| A = A + 1 atau A = A - 1; | disederhanakan menjadi A++ atau A-- |
| ++       | Penambahan: menambahkan 1 ke nilai variable, prefix (++A) atau postfix (A++) |
| --       | Pengurangan: mengurangkan 1 ke nilai variabel, prefix (--A) atau postfix (A--) |

Kedua bentuk penulisan operator ini mempunyai arti yang berbeda:
- **Jika diletakan didepan variabel**, maka proses penambahan atau pengurangan akan dilakukan sesaat sebelum atau langsung pada saat menjumpai ekspresi ini, sehingga nilai variabel tadi akan langsung berubah begitu ekspresi ini ditemukan.
- **Jika diletakan dibelakang variabel**, maka proses penambahan atau pengurangan akan dilakukan setelah ekspresi ini dijumpai atau nilai variabel akan tetap pada saat ekspresi ini ditemukan.

**Contoh Penambahan:**
```c
int x = 5;
y = ++x; // nilai saat ini: y = 6, x = 6

int x = 5;
y = x++; // nilai saat ini: y = 5, x = 6
```

**Contoh Pengurangan:**
```c
int x = 5;
y = --x; // nilai saat ini: y = 4, x = 4

int x = 5;
y = x--; // nilai saat ini: y = 5, x = 4
```

**03 Contoh Penggunaan Notasi Didepan Variabel**
```cpp
#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "Nilai A = " << a;
    cout << "\nNilai ++A = " << ++a;
    cout << "\nNilai A = " << a;
    cout << "\nNilai B = " << b;
    cout << "\nNilai --B = " << --b;
    cout << "\nNilai B = " << b;

    return 0;
}


```

Output yang akan dihasilkan dari program contoh-3 diatas adalah:
```
Nilai A = 10
Nilai ++A = 11
Nilai A = 11
Nilai B = 5
Nilai --B = 4
Nilai B = 4

```

**04 Contoh Penggunaan Notasi Dibelakang Variabel:**
```c
#include <stdio.h>

int main() {
    int a = 10, b = 5;

    printf("Nilai A = %d", a);
    printf("\nNilai ++A = %d", ++a);
    printf("\nNilai A = %d", a);
    printf("\nNilai B = %d", b);
    printf("\nNilai --B = %d", --b);
    printf("\nNilai B = %d", b);

    return 0;
}

```

Output yang akan dihasilkan dari program contoh-4 diatas adalah:
```
Nilai A = 10
Nilai ++A = 10
Nilai A = 11
Nilai B = 5
Nilai --B = 5
Nilai B = 4
```

## Operator Relasi

Operator Relasi digunakan untuk membandingkan dua buah nilai. Hasil perbandingan operator ini menghasilkan nilai numerik 1 (True) atau 0 (False).

| Operator | Keterangan              |
|----------|-------------------------|
| ==       | Sama Dengan             |
| !=       | Tidak Sama dengan       |
| >        | Lebih Dari              |
| <        | Kurang Dari             |
| >=       | Lebih Dari sama dengan  |
| <=       | Kurang Dari sama dengan |

**05 Operator Relasi**
```c
#include <iostream>
using namespace std;

main() {
    float a, b, c, d, e, f, x, y;
    cout<<"Masukan Nilai X = "; cin>>x;
    cout<<"Masukan Nilai Y = "; cin>>y;
    a = x == y;
    b = x != y;
    c = x > y;
    d = x < y;
    e = x >= y;
    f = x <= y;

    cout<<endl;
    cout<<"Hasil dari "<<x<<" == "<<y<<" = "<<a<<endl;
    cout<<"Hasil dari "<<x<<" != "<<y<<" = "<<b<<endl;
    cout<<"Hasil dari "<<x<<" > "<<y<<" = "<<c<<endl;
    cout<<"Hasil dari "<<x<<" < "<<y<<" = "<<d<<endl;
    cout<<"Hasil dari "<<x<<" >= "<<y<<" = "<<e<<endl;
    cout<<"Hasil dari "<<x<<" <= "<<y<<" = "<<f<<endl;
    return 0;
}
```
Output yang akan dihasilkan, dari program contoh diatas adalah:
```
Masukan Nilai X = 12
Masukan Nilai Y = 3

Hasil dari 12 == 3 = 0
Hasil dari 12 != 3 = 1
Hasil dari 12 > 3 = 1
Hasil dari 12 < 3 = 0
Hasil dari 12 >= 3 = 1
Hasil dari 12 <= 3 = 0

```
## Operator Logika

Operator Logika digunakan untuk menghubungkan dua buah operasi relasi menjadi sebuah ungkapan kondisi. Hasil dari operator logika ini menghasilkan nilai numerik 1 (True) atau 0 (False).

### Tabel Operator Logika

|Operator | Keterangan |
|---|---|
| && | Operator Logika AND|
| ll | Operator Logika OR|
| ! | Operator Logika NOT|


### Operator Logika AND

Operator logika AND digunakan untuk menghubungkan dua atau lebih ekspresi relasi, akan dianggap BENAR, bila semua ekspresi relasi yang dihubungkan bernilai BENAR.

| A | B | A && B |
|---|---|--------|
| T | T | T      |
| T | F | F      |
| F | T | F      |
| F | F | F      |

Contoh:
```
Ekspresi Relasi-1: A + 4 < 10
Ekspresi Relasi-2: B > A + 5
Ekspresi Relasi-3: C - 3 >= 4
```
Penggabungan ketiga ekspresi relasi di atas menjadi:
```
A + 4 < 10 && B > A + 5 && C - 3 >= 4
```
Jika nilai A = 3; B = 3; C = 7, maka ketiga ekspresi tersebut mempunyai nilai:
```
- Ekspresi Relasi-1: A + 4 < 10 → 3 + 4 < 10 → BENAR
- Ekspresi Relasi-2: B > A + 5 → 3 > 3 + 5 → SALAH
- Ekspresi Relasi-3: C - 3 >= 4 → 7 - 3 >= 4 → BENAR
```
Dari ekspresi relasi tersebut mempunyai nilai BENAR, maka A + 4 < 10 && B > A + 5 && C - 3 >= 4 → SALAH = 0

**06 Contoh Operator Logika AND**

```cpp
#include <iostream>
using namespace std;

main() {
    float a, b, c, d, e, f, g, h;
    cout << "Masukan Nilai A = ";
    cin >> a;
    cout << "Masukan Nilai B = ";
    cin >> b;
    cout << "Masukan Nilai C = ";
    cin >> c;
    // Proses
    d = a + 4 < 10;
    e = b > a + 5;
    f = c - 3 >= 4;
    g = d && e && f;
    cout << endl << endl;
    cout << "Program Ekspresi AND" << endl << endl;
    cout << "Hasil dari d = a + 4 < 10 adalah " << d << endl;
    cout << "Hasil dari e = b > a + 5 adalah " << e << endl;
    cout << "Hasil dari f = c - 3 >= 4 adalah " << f;
    cout << endl << endl;
    cout << "Hasil dari g = d && e && f adalah " << g;
    cout << endl;
    return 0;
}
```
Output yang akan dihasilkan, dari program contoh diatas adalah:
```
Masukan Nilai A = 12
Masukan Nilai B = 9
Masukan Nilai C = 3

Program Ekspresi AND

Hasil dari d = a + 4 < 10 adalah 0
Hasil dari e = b > a + 5 adalah 0
Hasil dari f = c - 3 >= 4 adalah 0

Hasil dari g = d && e && f adalah 0
```
#### 3.5.2. Operator Logika OR

Operator logika OR digunakan untuk menghubungkan dua atau lebih ekspresi relasi, akan dianggap BENAR, bila salah satu ekspresi relasi yang dihubungkan bernilai BENAR. Jika semua ekspresi relasi yang dihubungkan bernilai SALAH, maka akan bernilai SALAH.

| A | B | A ll B |
|---|---|-------|
| T | T | T     |
| T | F | T     |
| F | T | T     |
| F | F | F     |

**Contoh:**
```
Ekspresi Relasi-1: A + 4 < 10
Ekspresi Relasi-2: B > A + 5
Ekspresi Relasi-3: C - 3 > 4
```
Penggabungan ketiga ekspresi relasi di atas menjadi:
```
A + 4 < 10 || B > A + 5 || C - 3 > 4
```
Jika nilai A = 3; B = 3; C = 7, maka ketiga ekspresi tersebut mempunyai nilai:
```
- Ekspresi Relasi-1: A + 4 < 10 → 3 + 4 < 10 → BENAR
- Ekspresi Relasi-2: B > A + 5 → 3 > 3 + 5 → SALAH
- Ekspresi Relasi-3: C - 3 > 4 → 7 - 3 > 4 → SALAH
```
Dilihat ekspresi di atas, salah satu ekspresi tersebut mempunyai nilai BENAR, maka ekspresi tersebut tetap bernilai BENAR.
```
A + 4 < 10 || B > A + 5 || C - 3 > 4 → BENAR = 1
```

**07 Contoh penggunaan Operasi Logika OR**

```cpp
/* Penggunaan Operasi Logika OR */ 
#include <iostream>
using namespace std;

main() {
    float a, b, c, d, e, f, g, h;
    cout << "Masukan Nilai A = ";
    cin >> a;
    cout << "Masukan Nilai B = ";
    cin >> b;
    cout << "Masukan Nilai C = ";
    cin >> c;
    d = a + 5 > 10;
    e = b > 5 + a ;
    f = c - 4 <= 7;
    g = d || e || f;
    cout << endl << endl;
    cout << "Program Ekspresi AND" << endl << endl;
    cout << "Hasil dari d = a + 5 > 10 adalah " << d << endl;
    cout << "Hasil dari e = b > 5 + a adalah " << e << endl;
    cout << "Hasil dari f = c - 4 <= 7 adalah " << f;
    cout << endl << endl;
    cout << "Hasil dari g = d || e || f adalah " << g;
    cout << endl;
    return 0;
}
```
Output yang akan dihasilkan, dari program contoh diatas adalah:
```
Masukan Nilai A = 12
Masukan Nilai B = 12
Masukan Nilai C = 3

Program Ekspresi AND

Hasil dari d = a + 5 > 10 adalah 1
Hasil dari e = b > 5 + a adalah 0
Hasil dari f = c - 4 <= 7 adalah 1

Hasil dari g = d || e || f adalah 1
```
Keterangan:
```
Dalam hal ini, nilai dari d adalah 1 karena ekspresi a + 5 > 10 menjadi benar (True) dengan nilai a=12. Namun, nilai dari e adalah 0 karena ekspresi b > 5 + a menjadi salah (False) dengan nilai b=12 dan a=12. Nilai f adalah 1 karena ekspresi c - 4 <= 7 menjadi benar (True) dengan nilai c=3. Akhirnya, nilai dari g adalah 1 karena setidaknya salah satu dari d, e, atau f bernilai benar (True).
```
 **08 Contoh Penggunaan Operasi Logika AND OR**

```cpp
/* Penggunaan Operasi Logika AND OR*/
#include <iostream>
using namespace std;

main() {
    float a, b, c, d, e, f, g, h;

    cout << "Masukan Nilai A = ";
    cin >> a;
    cout << "Masukan Nilai B = ";
    cin >> b;
    cout << "Masukan Nilai C = ";
    cin >> c;
    // Proses
    d = a + 4 < 10;
    e = b > a + 5;
    f = c - 3 >= 4;
    g = d && e && f;


    cout << endl << endl;
    cout << "Program Ekspresi AND / OR" << endl << endl;
    cout << "Hasil dari d = a + 4 < 10 adalah " << d << endl;
    cout << "Hasil dari e = b > a + 5 adalah " << e << endl;
    cout << "Hasil dari f = c - 3 >= 4 adalah " << f;
    cout << endl << endl;
    cout << "Hasil dari g = d || e && f adalah " << g;
    cout << endl;
    return 0;
}
```
Output yang akan dihasilkan, dari program contoh diatas adalah:
```
Masukan Nilai A = 12
Masukan Nilai B = 5
Masukan Nilai C = 7

Program Ekspresi AND / OR

Hasil dari d = a + 4 < 10 adalah 0
Hasil dari e = b > a + 5 adalah 0
Hasil dari f = c - 3 >= 4 adalah 1

Hasil dari g = d || e && f adalah 0

```
*keterangan*:
```
Dalam hal ini, nilai dari d adalah 0 karena ekspresi a + 4 < 10 menjadi salah (False) dengan nilai a=12. Nilai dari e juga adalah 0 karena ekspresi b > a + 5 juga menjadi salah (False) dengan nilai b=5 dan a=12. Namun, nilai f adalah 1 karena ekspresi c - 3 >= 4 menjadi benar (True) dengan nilai c=7. Akhirnya, nilai dari g adalah 0 karena d dan e bernilai salah (False), walaupun f bernilai benar (True).
```

### Operator Logika NOT

Operator logika NOT akan memberikan nilai kebalikkan dari ekspresi yang disebutkan. Jika nilai yang disebutkan bernilai BENAR maka akan menghasilkan nilai SALAH, begitu pula sebaliknya.

Contoh:

Ekspresi Relasi: A + 4 < 10

Penggunaan Operator Logika NOT di atas menjadi:

!(A + 4 < 10)

Jika nilai A = 3; maka ekspresi tersebut mempunyai nilai:

- Ekspresi Relasi-1: A + 4 < 10 → 3 + 4 < 10 → BENAR

Dilihat ekspresi di atas, salah satu ekspresi tersebut mempunyai nilai BENAR dan jika digunakan operator logika NOT, maka ekspresi tersebut akan bernilai SALAH:

!(A + 4 < 10) → !(BENAR) = SALAH = 0

**09 Contoh Penggunaan Operasi Logika NOT**

```cpp
/* Penggunaan Operasi Logika NOT */
#include <iostream>
using namespace std;

main() {
    int a, b, c;
    cout << "Masukan Nilai A = ";
    cin >> a;
    /* Proses */
    b = (a + 4 < 10);
    c = !(b);
    cout << endl << "Program Ekspresi NOT" << endl;
    cout << "Nilai A = " << a << endl;
    cout << "Nilai b = (a + 4 < 10) = " << b << endl;
    cout << "Nilai c = !(b) = " << c;
    return 0;
}
```

Output yang akan dihasilkan, dari program contoh diatas adalah:
```
Masukan Nilai A = 12

Program Ekspresi NOT
Nilai A = 12
Nilai b = (a + 4 < 10) = 0
Nilai c = !(b) = 1
```

## Operator Bitwise

Operator Bitwise digunakan untuk memanipulasi data dalam bentuk bit. C++ menyediakan enam buah operator bitwise.

### Tabel Operator Bitiwise

| Operator | Keterangan       |
|----------|------------------|
| ~        | Bitwise NOT      |
| <<       | Bitwise Shift Left |
| >>       | Bitwise Shift Right |
| &        | Bitwise AND      |
| ^        | Bitwise XOR      |
| l       | Bitwise OR       |

#### 3.6.1. Operator Bitwise << (Shift Left)

Operator Bitwise Shift Left digunakan untuk menggeser sejumlah bit ke kiri.

Contoh:

```
0000000011001001 = 201
```

Di geser 1 bit ke kiri menjadi:

```
0000000110010010 = 402
```

**Contoh 10 Operator Bitwise << (Shift Left)**

```cpp
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int x;
    cout << "Masukan Nilai X = ";
    cin >> x;

    cout << "Nilai Awal : " << x << endl;

    // Geser 1 bit ke kiri
    x = x << 1;

    cout << "Hasil dari Geser 1 Bit Kekiri = " << x << endl;

    // Cetak nilai dalam representasi biner
    cout << "Nilai dalam representasi biner: ";
    for (int i = sizeof(int) * 8 - 1; i >= 0; --i) {
        cout << ((x >> i) & 1);
    }
    cout << endl;

    return 0;
}

```

Output yang akan dihasilkan, dari program contoh diatas adalah:
```
Masukan Nilai X = 12
Nilai Awal : 12
Hasil dari Geser 1 Bit Kekiri = 24
```

#### Operator Bitwise >> (Shift Right)


Operator Bitwise Shift Right digunakan untuk menggeser sejumlah bit ke kanan.

Contoh:

```
0000000011001001 = 201
```

Di geser 1 bit ke kanan menjadi:

```
0000000001100100 = 100
```

**Contoh 11 Operator Bitwise >> (Shift Right)**

```cpp
#include <iostream>
#include <conio.h>

int main() {
    int x;
    std::cout << "Masukan Nilai X = ";
    std::cin >> x;
    std::cout << "Nilai Awal : " << x << std::endl;
    x = x >> 1;
    std::cout << "Hasil dari Geser 1 Bit Kekiri = " << x << std::endl;
    return 0;
}

```

Output yang akan dihasilkan, dari program contoh-11 di atas adalah:
```
Masukan Nilai X = 12
Nilai Awal : 12
Hasil dari Geser 1 Bit Kekiri = 6
```
#### Operator Bitwise & (And)

Operator Bitwise & (And) digunakan untuk membandingkan bit dari dua operand. Akan bernilai benar (1) jika semua operand yang digabungkan bernilai benar (1).
Berikut adalah ilustrasi untuk membandingkan bit dari 2 operand menggunakan operator bitwise AND:

| Bit Operand 1 | Bit Operand 2 | Hasil Operand |
|----------------|----------------|---------------|
|       0        |       0        |       0       |
|       0        |       1        |       0       |
|       1        |       0        |       0       |
|       1        |       1        |       1       |

Contoh:
```
Contoh:
11001001 = 201
01100100 = 100
-------------------- AND
01000000 = 64
```


**12 Operator Bitwise & (And)**

```cpp
#include <iostream>

int main() {
    int x, y;
    std::cout << "Masukan Nilai X = ";
    std::cin >> x;
    std::cout << "Masukan Nilai Y = ";
    std::cin >> y;
    int a = x & y;
    std::cout << '\n';
    std::cout << "Hasil dari " << x << " & " << y << " = " << a << std::endl;

    // Menunggu hingga pengguna menekan tombol sebelum menutup konsol
    std::cout << "Press any key to continue...";
    std::cin.ignore(); // Mengabaikan karakter baru yang tersisa di buffer
    std::cin.get(); // Menunggu hingga pengguna menekan tombol

    return 0;
}

```

Output yang akan dihasilkan, dari program contoh-12 di atas adalah:
```
Masukan Nilai X = 201
Masukan Nilai Y = 100

Hasil dari 201 & 100 = 64
```

### Operator Bitwise | (Or)

Operator Bitwise | (Or) digunakan untuk membandingkan bit dari dua operand. Akan bernilai benar jika ada salah satu operand yang digabungkan ada yang bernilai benar (1).

Berikut adalah ilustrasi untuk membandingkan bit dari 2 operand menggunakan operator bitwise OR:

| Bit Operand 1 | Bit Operand 2 | Hasil Operand |
|----------------|----------------|---------------|
|       0        |       0        |       0       |
|       0        |       1        |       1       |
|       1        |       0        |       1       |
|       1        |       1        |       1       |

Contoh :
```
11001001 = 201
01100100 = 100
----------------OR
11101101 = 237
```

**13 Operator Bitwise | (Or)**

```cpp
#include <iostream>

int main() {
    int a, x, y;
    std::cout << "Masukan Nilai X = ";
    std::cin >> x;
    std::cout << "Masukan Nilai Y = ";
    std::cin >> y;
    a = x | y;
    std::cout << '\n';
    std::cout << "Hasil dari " << x << " | " << y << " = " << a << std::endl;
    return 0;
}

```

Output yang akan dihasilkan, dari program contoh-13 di atas adalah:
```
Masukan Nilai X = 201
Masukan Nilai Y = 100

Hasil dari 201 | 100 = 237

```
### Operator Bitwise ^ (eXclusive Or)

Operator Bitwise ^ (XOr) digunakan untuk membandingkan bit dari dua operand. Akan bernilai benar (1) jika hanya satu bit dari dua bit yang dibandingkan yang bernilai benar (1). Berikut adalah ilustrasi untuk membandingkan bit dari 2 operand menggunakan operator bitwise XOr:

| Bit Operand 1 | Bit Operand 2 | Hasil Operand |
|----------------|----------------|---------------|
|       0        |       0        |       0       |
|       0        |       1        |       1       |
|       1        |       0        |       1       |
|       1        |       1        |       0       |

Contoh :
```
11001001 = 201
01100100 = 100
------------------XOR
10101101 = 137
```
**14 Operator Bitwise ^ (eXclusive Or)**

```cpp
#include <iostream>

int main() {
    int a, x, y;
    std::cout << "Masukan Nilai X = ";
    std::cin >> x;
    std::cout << "Masukan Nilai Y = ";
    std::cin >> y;
    a = x ^ y;
    std::cout << '\n';
    std::cout << "Hasil dari " << x << " ^ " << y << " = " << a << std::endl;
    return 0;
}

```

Output yang akan dihasilkan dari program contoh-14 di atas adalah:
```
Masukan Nilai X = 201
Masukan Nilai Y = 100

Hasil dari 201 ^ 100 = 1
```

### Operator Bitwise ~ (Not)

Operator Bitwise ~ (Not) digunakan untuk membalik nilai bit dari suatu operand. Berikut adalah ilustrasi untuk membalikkan bit dari operand menggunakan operator bitwise Not:

| Bit Operand | Hasil |
|-------------|-------|
|      0      |   1   |
|      1      |   0   |

Contoh :
```
00001000 = 8
||||||||
11110111 = 247 = -9
```
**15 Operator Bitwise ~ (Not)**

```cpp
#include <iostream>

int main() {
    int a, x;
    std::cout << "Masukan Nilai X = ";
    std::cin >> x;
    a = ~x;
    std::cout << '\n';
    std::cout << "Hasil dari ~" << x << " = " << a << std::endl;
    return 0;
}

```

Output yang akan dihasilkan, dari program contoh-14 di atas adalah:

```

Hasil dari ~201 = -202

```
###  Tugas

#### 1. Tentukan apa hasil numerik dari ekspresi relasi dan logika dibawah ini.

Diberikan nilai:
- A = 3
- B = 6
- C = 2
- K = 5
- L = 4
- M = 3

a. D = (4 + 2 > A && B – 2 > 3 + 2 || B + 2 <= 6 + 2 )

b. D = K + 5 < M || (C * M < L && 2 * M – L > 0)

c. D = L + 5 < M || C * K < L && 2 * K – L > 0

d. D = A * 4 <= 3 * M + B

e. D = K + 10 > A && L – 2 > 4 * C


#### 2. Dari program dibawah ini, bagaimanakah keluaran yang dihasilkan

```c
#include<stdio.h>

int main() {
    int a = 21;
    printf("\n Nilai a = %d", a);
    printf("\n Nilai a++ = %d", a++);
    printf("\n Nilai ++a = %d", ++a);
    printf("\n Nilai --a = %d", --a);
    printf("\n Nilai a = %d", a);
    a += 3;
    printf("\n Nilai a = %d", a);
    printf("\n Nilai ++a = %d", ++a);
    printf("\n Nilai a++ = %d", a++);
    printf("\n Nilai --a = %d", --a);
    printf("\n Nilai a-- = %d", a--);
    return 0;
}

```