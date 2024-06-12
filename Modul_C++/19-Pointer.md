# POINTER

Pointer merupakan sebuah variabel yang berisi alamat dari variabel lain. Suatu pointer dimaksudkan untuk menunjukan ke suatu alamat memori sehingga alamat dari suatu variabel dapat diketahui dengan mudah (Frieyadie, 2006).

### Operator Pointer
Terdapat dua macam operator pointer:

#### 1. Operator Dereference ( & )
Didalam mendeklarasikan suatu variabel harus pada lokasi yang pasti didalam penggantian memori. Pada umumnya kita tidak dapat menentukan dimana variabel akan ditempatkan. Terkadang secara otomatis dilakukan oleh kompiler dan sistem operasi yang sedang aktif, tetapi sesekali sistem operasi akan memberikan banyak alamat yang kita tidak mengetahui dimana variabel ditempatkan. Hal ini dapat dilakukan dengan memberikan suatu identifier “&” (ampersand sign) didepan nama variabel, operator ini biasa disebut dengan “address of” atau operator alamat. Dengan menggunakan operator dereference ( & ) ini, suatu variabel akan menghasilkan alamat lokasi memori.
Sebagai contoh ILHAM ditempatkan pada memori dengan alamat 0x0012ff88 dan dideklarasikan sebagai berikut:
```cpp
ILHAM = 75;
AMIR = ILHAM; // AMIR sama dengan ILHAM (75)
RAKA = &ILHAM; // RAKA sama dengan Address Of ILHAM (0x0012ff88)
```

#### 2. Operator Reference ( * )
Dengan menggunakan operator anda dapat mengakses secara langsung nilai yang terdapat didalam variabel yang berpointer, hal ini dapat dilakukan dengan menambahkan identifier asterisk ( * ), agar dapat menterjemahkan nilai sebenarnya dari suatu variabel. Operator ini biasa disebut dengan “value pointed by”. Dengan menggunakan operator reference ( * ) ini, menghasilkan nilai yang berada pada suatu alamat memori
Sebagai contoh ILHAM ditempatkan pada memori dengan alamat 0x0012ff88 dan dideklarasikan sebagai berikut:
```cpp
ILHAM = 75;
RAKA = &ILHAM; // RAKA sama dengan Address Of ILHAM (0x0012ff88)
RAFLI = *RAKA; // RAFLI sama dengan value pointed by RAKA(75)
```

### Deklarasi Pointer Pada Konstanta
Suatu pointer dapat dideklarasikan secara konstanta atau secara tetap tidak dapat diubah. Untuk mendeklarasikan pointer secara konstanta dengan memberikan kata const didepan nama konstanta.
Bentuk penulisan:
```cpp
// Pendeklarasian Pointer Konstanta
tipe_data * const nama_konstanta;
```
### Contoh-1 

``` cpp
//----------------------------------//
//Pendeklarasian Pointer Konstanta //
//----------------------------------//
#include <iostream>
using namespace std;

int main() {
    const char * const nama = "ILHAM"; // Deklarasi pointer konstan yang menunjuk ke string konstan
    cout << "Nama = " << nama << endl;
    nama = "RAKA"; // Ini akan menyebabkan kesalahan kompilasi karena mencoba mengubah data yang konstan
    return 0;
}

``` 

Pada program diatas, terdapat kesalahan dan tidak dapat dijalankan, penyebabnya pada pernyataan nama = "ILHAM";. Karena variabel nama, merupakan pointer konstanta, yaitu tidak dapat diubah-ubah. Pesan Kesalahan Yang Tampil adalah:
"Cannot modify a const object"

### Deklarasi Pointer Pada Variabel
Karena keahlian dari pointer untuk menunjuk secara langsung kesuatu nilai, memeriksa satu persatu data yang memiliki pointer pada saat variabel tersebut pertama kali dideklarasikan.
```
tipe_data *nama_variabel;
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int ilham, amir, *raka;
    ilham = 75;
    amir = ilham;
    raka = &ilham;
    cout << "Nilai ILHAM = " << ilham << endl;
    cout << "Nilai AMIR = " << amir << endl;
    cout << "Nilai RAKA = " << *raka << endl;
    return 0;
}
```

hasil dari program tersebut 
```
Nilai ILHAM = 75
Nilai AMIR = 75
Nilai RAKA = 75
```


### Pointer Pada Pointer
Tidak terbatas menunjuk alamat dari suatu variabel, pointer dapat pula menunjuk ke pointer lainnya. Didalam pendeklarasianya, hanya menambahkan pointer reference ( * ) pada variabel yang akan ditunjuk.
Sebagai contoh :
```cpp
char ilham;
char *raka; //pointer ke variabel
char **amir; //pointer pada pointer
ilham = '75';
raka = &ilham;
amir = &raka;
```

### Pointer pada Array
Konsep Array diantaranya adalah banyak loncatan dari pointer satu ke pointer yang lain. karena secara internal array juga menyatakan alamat, yaitu pengenal array sama dengan alamat pada elemen pertama, pada array.

### Pointer pada String
Pointer pada string dapat anda lihat pada contoh program berikut:
```cpp
/* Pointer pada String */
char band_metal[] = "SEPULTURA";
char *band_punk = "RANCID";
cout<<"Nama Band Metal = "<<band_metal<<endl;
cout<<"Nama Band Punk = "<<band_punk;
band_punk+=3; //menambah nilai penunjuk / pointer
cout<<"Nama Band Metal = "<<band_metal<<endl;
cout<<"Nama Band Punk = "<<band_punk;
```

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    return 0;
}
```

**Penjelasan Contoh:**
- Membuat variabel pointer dengan nama `ptr`, yang menunjuk ke variabel string, dengan menggunakan tanda asterisk `*` (string* ptr).
- Gunakan operator `&` untuk menyimpan alamat memori dari variabel yang disebut `food`, dan berikan nilainya kepada pointer.
- Sekarang, `ptr` menyimpan nilai alamat memori `food`.
  
Tip: Ada tiga cara untuk mendeklarasikan variabel pointer, tetapi cara pertama lebih disukai:

```cpp
string* mystring; // Preferred
string *mystring;
string * mystring;
```
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration

    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    return 0;
}
```

**Penjelasan Contoh:**
- Membuat variabel string `food`.
- Mendeklarasikan variabel pointer `ptr` yang menunjuk ke `food`.
- Menggunakan `ptr` untuk mencetak alamat memori dari `food`.
- Menggunakan `*ptr` untuk mengakses nilai dari `food`. Saat ini, `*ptr` akan mengembalikan nilai yang sama dengan `food`.

C++ Modify Pointers
Modify the Pointer Value
You can also change the pointer's value. But note that this will also change the value of the original variable:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Access the memory address of food and output its value (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";

    return 0;
}
```

**Penjelasan Contoh:**
- Membuat variabel string `food` dan variabel pointer `ptr` yang menunjuk ke `food`.
- Menggunakan `cout` untuk mencetak nilai dari `food`.
- Menggunakan `cout` untuk mencetak alamat memori dari `food`.
- Menggunakan `*ptr` untuk mengakses nilai dari `food`.
- Mengubah nilai yang ditunjuk oleh pointer `ptr` menjadi "Hamburger".
- Mencetak nilai yang baru ditunjuk oleh pointer `ptr` dan nilai dari `food`, yang keduanya sekarang menjadi "Hamburger".

