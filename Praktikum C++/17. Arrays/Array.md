# Arrays

## 1. Pengertian

Array digunakan untuk menyimpan beberapa nilai dalam satu variabel, daripada mendeklarasikan variabel terpisah untuk setiap nilai.

Untuk mendeklarasikan sebuah array, tentukan tipe variabel, spesifikasikan nama array diikuti dengan tanda kurung siku dan tentukan jumlah elemen yang akan disimpan:

```cpp
string mobil[4];
```

Sekarang kita telah mendeklarasikan variabel yang menyimpan array dari empat string. Untuk memasukkan nilai ke dalamnya, kita dapat menggunakan literal array - letakkan nilai-nilai tersebut dalam daftar yang dipisahkan koma, di dalam kurung kurawal:

```cpp
string mobil[4] = {"Volvo", "BMW", "Ford", "Mazda"};
```

Untuk membuat array dari tiga bilangan bulat, Anda bisa menuliskan:

```cpp
int myNum[3] = {10, 20, 30};
```

Akses Elemen dari Sebuah Array
Anda dapat mengakses elemen array dengan merujuk pada nomor indeks di dalam tanda kurung siku [].

Pernyataan ini mengakses nilai elemen pertama dalam mobil:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars[0];
  return 0;
}
// Outputnya Volvo
```

Catatan: Indeks array dimulai dari 0: [0] adalah elemen pertama. [1] adalah elemen kedua, dan seterusnya.

Mengubah Elemen Array
Untuk mengubah nilai dari sebuah elemen tertentu, rujuklah pada nomor indeks:

```cpp
mobil[0] = "Opel";
```

Contoh
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cars[0] = "Opel";
  cout << cars[0];
  return 0;
}
// Sekarang outputnya Opel bukan Volvo
```

## Latihan C++

Latihan:
array bertipe string yang bernama cars.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars[0];
  return 0;
}
```

## 2. Melakukan Perulangan Melalui Array
Anda dapat melakukan perulangan melalui elemen-elemen array dengan menggunakan perulangan for.

Contoh berikut menampilkan semua elemen dalam array mobil:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  for (int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  return 0;
}
```

Contoh berikut menampilkan indeks dari setiap elemen beserta nilainya:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  for (int i = 0; i < 5; i++) {
    cout << i << " = " << cars[i] << "\n";
  }
  return 0;
}
```

Contoh ini menunjukkan bagaimana melakukan perulangan melalui sebuah array bilangan bulat:

```cpp
#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
  return 0;
}
```

## Perulangan foreach
Ada juga "for-each loop" (diperkenalkan dalam C++ versi 11 (2011)), yang digunakan secara eksklusif untuk melakukan perulangan melalui elemen-elemen dalam sebuah array:

```cpp
for (tipe variabel : namaArray) {
  // blok kode yang akan dieksekusi
}
```

Contoh berikut menampilkan semua elemen dalam sebuah array, menggunakan "for-each loop":

```cpp
#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i : myNumbers) {
    cout << i << "\n";
  }
  return 0;
}
```
## 3. Menghilangkan Ukuran Array

Di C++, Anda tidak harus menentukan ukuran array. Kompiler sudah cukup cerdas untuk menentukan ukuran array berdasarkan jumlah nilai yang dimasukkan:

```cpp
string mobil[] = {"Volvo", "BMW", "Ford"}; // Tiga elemen array
```

Contoh di atas sama dengan:

```cpp
string mobil[3] = {"Volvo", "BMW", "Ford"}; // Juga tiga elemen array
```

Namun, pendekatan terakhir ini dianggap sebagai "praktik yang baik", karena akan mengurangi kemungkinan kesalahan dalam program Anda.

## Menghilangkan Elemen pada Deklarasi

Juga mungkin untuk mendeklarasikan sebuah array tanpa menentukan elemen-elemen pada deklarasinya, dan menambahkannya kemudian:

**Contoh**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[5];
  cars[0] = "Volvo";
  cars[1] = "BMW";
  cars[2] = "Ford";
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  return 0;
}
```

Dengan demikian, Anda dapat mendeklarasikan array terlebih dahulu dan kemudian mengisinya dengan nilai sesuai kebutuhan.

## 4. Mendapatkan Ukuran Sebuah Array

Untuk mendapatkan ukuran sebuah array, Anda dapat menggunakan operator sizeof():

**Contoh**
```cpp
#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  cout << sizeof(myNumbers);
  return 0;
}
```

Hasil:
```
20
```

Mengapa hasil menunjukkan 20 bukan 5, padahal array tersebut berisi 5 elemen?

Hal ini disebabkan karena operator sizeof() mengembalikan ukuran suatu tipe dalam byte.

Anda telah belajar dari bab Data Types bahwa tipe int biasanya memiliki ukuran 4 byte, sehingga dari contoh di atas, 4 x 5 (4 byte x 5 elemen) = 20 byte.

Untuk mengetahui berapa banyak elemen yang dimiliki oleh sebuah array, Anda harus membagi ukuran array dengan ukuran tipe data yang berisi:

**Contoh**
```cpp
#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  int getArrayLength = sizeof(myNumbers) / sizeof(int);
  cout << getArrayLength;
  return 0;
}
```

Hasil:
```
5
```

Loop Melalui Sebuah Array dengan sizeof()
Pada Bab Arrays and Loops, kita menuliskan ukuran array dalam kondisi loop (i < 5). Ini tidak ideal, karena hanya akan berfungsi untuk array dengan ukuran tertentu.

Namun, dengan menggunakan pendekatan sizeof() dari contoh di atas, sekarang kita dapat membuat loop yang berfungsi untuk array dengan ukuran apa pun, yang lebih berkelanjutan.

Daripada menulis:

```cpp
#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {
  cout << myNumbers[i] << "\n";
}
  return 0;
}
```

Lebih baik menuliskan:

**Contoh**
```cpp
#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
    cout << myNumbers[i] << "\n";
  }
  return 0;
}

```

Perhatikan bahwa, dalam C++ versi 11 (2011), Anda juga dapat menggunakan loop "for-each":

**Contoh**
```cpp
#include <iostream>
using namespace std;

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  for (int i : myNumbers) {
    cout << i << "\n";
  }
  return 0;
}
```
## 5. Array Multi-Dimensi

Array multi-dimensi adalah array yang terdiri dari array-array lainnya.

Untuk mendeklarasikan array multi-dimensi, tentukan tipe variabelnya, spesifikasikan nama array diikuti dengan kurung siku yang menunjukkan berapa banyak elemen yang dimiliki oleh array utama, diikuti dengan satu set kurung siku lagi yang menunjukkan berapa banyak elemen yang dimiliki oleh sub-arraynya:

**Contoh**
```cpp
string letters[2][4];
```

Seperti halnya dengan array biasa, Anda dapat menyisipkan nilai dengan literal array - daftar yang dipisahkan koma di dalam kurung kurawal. Dalam array multi-dimensi, setiap elemen dalam literal array adalah literal array lainnya.

```cpp
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
```

Setiap set kurung siku dalam deklarasi array menambahkan dimensi lain ke sebuah array. Sebuah array seperti contoh di atas dikatakan memiliki dua dimensi.

Array dapat memiliki jumlah dimensi yang sembarang. Semakin banyak dimensi yang dimiliki sebuah array, semakin kompleks kode tersebut. Array berikut memiliki tiga dimensi:

```cpp
string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};
```

Mengakses Elemen Array Multi-Dimensi
Untuk mengakses elemen dari array multi-dimensi, tentukan nomor indeks dalam setiap dimensi array.

Pernyataan ini mengakses nilai elemen di baris pertama (0) dan kolom ketiga (2) dari array letters.

**Contoh**
```cpp
#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  
  cout << letters[0][2];
  return 0;
} 
// Output "C"
```

Ingat bahwa: Indeks array dimulai dari 0: [0] adalah elemen pertama. [1] adalah elemen kedua, dan seterusnya.

Mengubah Elemen dalam Array Multi-Dimensi
Untuk mengubah nilai dari sebuah elemen, tentukan nomor indeks dari elemen dalam setiap dimensi:

**Contoh**
```cpp
#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  letters[0][0] = "Z";
  
  cout << letters[0][0];
  return 0;
} // Sekarang output "Z" bukan "A"
```

Melakukan Loop Melalui Array Multi-Dimensi
Untuk melakukan loop melalui array multi-dimensi, Anda membutuhkan satu loop untuk setiap dimensi array.

Contoh berikut menampilkan semua elemen dalam array letters:

**Contoh**
```cpp
#include <iostream>
using namespace std;

int main() {
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      cout << letters[i][j] << "\n";
    }
  }
  return 0;
}
```

Contoh ini menunjukkan bagaimana melakukan loop melalui array tiga dimensi:

**Contoh**
```cpp
#include <iostream>
using namespace std;

int main() {
  string letters[2][2][2] = {
    {
      { "A", "B" },
      { "C", "D" }
    },
    {
      { "E", "F" },
      { "G", "H" }
    }
  };

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << letters[i][j][k] << "\n";
      }
    }
  }
  return 0;
}
```

Mengapa Array Multi-Dimensi?
Array multi-dimensi sangat baik dalam merepresentasikan grid. Contoh ini menunjukkan penggunaan praktis untuk mereka. Dalam contoh berikut, kita menggunakan array multi-dimensi untuk merepresentasikan permainan kecil Battleship:

**Contoh**
```cpp
#include <iostream>
using namespace std;

int main() {
// Kami memasukkan "1" untuk menunjukkan bahwa ada kapal.
bool ships[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
};

// Lacak berapa banyak tembakan yang berhasil dan berapa banyak giliran yang telah dimainkan dalam variabel ini
int hits = 0;
int numberOfTurns = 0;

// Biarkan pemain terus bermain sampai mereka berhasil menyerang keempat kapal
while (hits < 4) {
  int row, column;

  cout << "Memilih koordinat\n";

  // Mintalah pemain untuk memilih baris
  cout << "Pilih nomor baris antara 0 dan 3: ";
  cin >> row;

  // Mintalah pemain untuk memilih kolom
  cout << "Pilih nomor kolom antara 0 dan 3: ";
  cin >> column;

  // Periksa apakah kapal ada di koordinat tersebut
  if (ships[row][column]) {
    // Jika pemain berhasil menyerang kapal, hapus kapal tersebut dengan mengatur nilainya menjadi nol.
    ships[row][column] = 0;

    // Tingkatkan hit counter
    hits++;

    // Beritahu pemain bahwa mereka telah berhasil menyerang kapal dan berapa banyak kapal yang tersisa
    cout << "Tembak! " << (4-hits) << " tersisa.\n\n";
  } else {
    // Beritahu pemain bahwa mereka gagal menyerang
    cout << "Meleset\n\n";
  }

  // Hitung berapa banyak giliran yang telah dimainkan oleh pemain
  numberOfTurns++;
}

cout << "Menang!\n";
cout << "Anda menang dalam " << numberOfTurns << "kali";
  
  return 0;
}
```