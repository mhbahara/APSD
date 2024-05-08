# Structs

Struktur (juga disebut structs) adalah cara untuk mengelompokkan beberapa variabel terkait menjadi satu tempat. Setiap variabel dalam struktur dikenal sebagai anggota struktur.

Berbeda dengan array, struktur dapat berisi banyak tipe data yang berbeda (int, string, bool, dll.).

## Membuat Struktur

Untuk membuat struktur, gunakan kata kunci struct dan deklarasikan setiap anggota di dalam kurung kurawal.

Setelah deklarasi, tentukan nama variabel strukturnya (myStructure dalam contoh di bawah):

**Contoh**
```cpp
struct {             // Deklarasi struktur
  int myNum;         // Anggota (variabel int)
  string myString;   // Anggota (variabel string)
} myStructure;       // Variabel struktur
```

## Mengakses Anggota Struktur

Untuk mengakses anggota struktur, gunakan sintaks titik (.):

**Contoh**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
// Membuat variabel struktur bernama myStructure
struct {
  int myNum;
  string myString;
} myStructure;

// Memberi nilai pada anggota myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Mencetak anggota myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";
  return 0;
}
```

## Satu Struktur dalam Beberapa Variabel

Anda dapat menggunakan koma (,) untuk menggunakan satu struktur dalam banyak variabel:

**Contoh**
```cpp
struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3; // Variabel struktur multiple dipisahkan dengan koma
```

Contoh ini menunjukkan bagaimana menggunakan struktur dalam dua variabel yang berbeda:

**Contoh**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
// Menggunakan satu struktur untuk mewakili dua mobil
struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // Kita bisa menambahkan variabel dengan memisahkannya dengan koma di sini

// Memasukkan data ke dalam struktur pertama
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Memasukkan data ke dalam struktur kedua
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Mencetak anggota struktur
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
  return 0;
}
```

## Struktur Bernama

Dengan memberikan nama pada struktur, Anda dapat memperlakukannya sebagai tipe data. Ini berarti Anda dapat membuat variabel dengan struktur ini di mana saja dalam program pada waktu apa pun.

Untuk membuat struktur bernama, letakkan nama struktur tepat setelah kata kunci struct:

```cpp
struct myDataType { // Struktur ini dinamai "myDataType"
  int myNum;
  string myString;
};
```

Untuk mendeklarasikan variabel yang menggunakan struktur, gunakan nama struktur sebagai tipe data variabelnya:

```cpp
myDataType myVar;
```

**Contoh**
```cpp
#include <iostream>
#include <string>
using namespace std;

// Mendeklarasikan struktur bernama "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  // Membuat struktur mobil dan menyimpannya di myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Membuat struktur mobil lainnya dan menyimpannya di myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Mencetak anggota struktur
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}
```

Dengan menggunakan struktur, Anda dapat mengorganisir data Anda dengan lebih terstruktur dan mudah dipahami.