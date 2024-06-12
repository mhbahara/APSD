### Pengecualian C++ (C++ Exceptions)

Ketika menjalankan kode C++, berbagai kesalahan dapat terjadi: kesalahan penulisan oleh programmer, kesalahan karena input yang salah, atau hal lain yang tidak terduga.

Ketika terjadi kesalahan, C++ biasanya akan berhenti dan menghasilkan pesan kesalahan. Istilah teknis untuk ini adalah: C++ akan melemparkan sebuah pengecualian (throw an exception).

### Try dan Catch (try and catch) pada C++

Penanganan pengecualian dalam C++ terdiri dari tiga kata kunci: try, throw, dan catch:

1. Pernyataan try memungkinkan Anda untuk mendefinisikan blok kode yang akan diuji kesalahannya saat sedang dieksekusi.
2. Kata kunci throw melemparkan sebuah pengecualian ketika sebuah masalah terdeteksi, yang memungkinkan kita membuat kesalahan kustom.
3. Pernyataan catch memungkinkan Anda untuk mendefinisikan blok kode yang akan dieksekusi jika terjadi kesalahan dalam blok try.

Kata kunci try dan catch datang dalam pasangan:

```cpp
try {
  // Blok kode yang akan dicoba
  throw exception; // throw exception ketika ada masalah
}
catch () {
  // Blok kode untuk menangani kesalahan
}
```

### Contoh
```cpp
#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;  
  }
  return 0;
}
```

### Penjelasan Contoh
Kami menggunakan blok try untuk menguji beberapa kode: Jika variabel usia kurang dari 18, kami akan throw exception, dan menanganinya di blok catch.

Di blok catch, kami menangkap kesalahan dan melakukan sesuatu terkait dengan itu. Pernyataan catch mengambil parameter: dalam contoh kami menggunakan variabel int (myNum) (karena ini throw exception dengan tipe int dalam blok try (usia)), untuk mengeluarkan nilai usia.

Jika tidak ada kesalahan terjadi (misalnya jika usia adalah 20 daripada 15, yang berarti akan lebih besar dari 18), blok catch dilewati:

```cpp
#include <iostream>
using namespace std;

int main() {
  try {
    int age = 20;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;  
  }
  return 0;
}
```

Anda juga dapat menggunakan kata kunci throw untuk mengeluarkan nomor referensi, seperti nomor kode kesalahan kustom untuk tujuan organisasi:

```cpp
#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Error number: " << myNum;  
  }
  return 0;
}
```

### Menangani Semua Jenis Pengecualian (...)
Jika Anda tidak tahu jenis lemparan yang digunakan dalam blok try, Anda dapat menggunakan sintaks "titik tiga" (...) di dalam blok catch, yang akan menangani semua jenis pengecualian:

```cpp
#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (...) {
    cout << "Access denied - You must be at least 18 years old.\n";
  }
  return 0;
}
```

