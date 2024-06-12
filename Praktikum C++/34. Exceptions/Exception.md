### Pengecualian C++ (C++ Exceptions)

Ketika menjalankan kode C++, berbagai kesalahan dapat terjadi: kesalahan penulisan oleh programmer, kesalahan karena input yang salah, atau hal lain yang tidak terduga.

Ketika terjadi kesalahan, C++ biasanya akan berhenti dan menghasilkan pesan kesalahan. Istilah teknis untuk ini adalah: C++ akan melemparkan sebuah pengecualian (throw an exception).

### Coba dan Tangkap (try and catch) pada C++

Penanganan pengecualian dalam C++ terdiri dari tiga kata kunci: try, throw, dan catch:

1. Pernyataan try memungkinkan Anda untuk mendefinisikan blok kode yang akan diuji kesalahannya saat sedang dieksekusi.
2. Kata kunci throw melemparkan sebuah pengecualian ketika sebuah masalah terdeteksi, yang memungkinkan kita membuat kesalahan kustom.
3. Pernyataan catch memungkinkan Anda untuk mendefinisikan blok kode yang akan dieksekusi jika terjadi kesalahan dalam blok try.

Kata kunci try dan catch datang dalam pasangan:

```cpp
try {
  // Blok kode yang akan dicoba
  throw exception; // Melemparkan pengecualian ketika ada masalah
}
catch () {
  // Blok kode untuk menangani kesalahan
}
```

### Contoh
```cpp
try {
  int age = 15;
  if (age >= 18) {
    cout << "Akses diberikan - Anda sudah cukup tua.";
  } else {
    throw (age);
  }
}
catch (int myNum) {
  cout << "Akses ditolak - Anda harus berusia minimal 18 tahun.\n";
  cout << "Usia adalah: " << myNum;
}
```

### Penjelasan Contoh
Kami menggunakan blok try untuk menguji beberapa kode: Jika variabel usia kurang dari 18, kami akan melemparkan pengecualian, dan menanganinya di blok catch.

Di blok catch, kami menangkap kesalahan dan melakukan sesuatu terkait dengan itu. Pernyataan catch mengambil parameter: dalam contoh kami menggunakan variabel int (myNum) (karena kami melemparkan pengecualian dengan tipe int dalam blok try (usia)), untuk mengeluarkan nilai usia.

Jika tidak ada kesalahan terjadi (misalnya jika usia adalah 20 daripada 15, yang berarti akan lebih besar dari 18), blok catch dilewati:

```cpp
int age = 20;
```

Anda juga dapat menggunakan kata kunci throw untuk mengeluarkan nomor referensi, seperti nomor kode kesalahan kustom untuk tujuan organisasi:

```cpp
try {
  int age = 15;
  if (age >= 18) {
    cout << "Akses diberikan - Anda sudah cukup tua.";
  } else {
    throw 505;
  }
}
catch (int myNum) {
  cout << "Akses ditolak - Anda harus berusia minimal 18 tahun.\n";
  cout << "Nomor kesalahan: " << myNum;
}
```

### Menangani Semua Jenis Pengecualian (...)
Jika Anda tidak tahu jenis lemparan yang digunakan dalam blok try, Anda dapat menggunakan sintaks "titik tiga" (...) di dalam blok catch, yang akan menangani semua jenis pengecualian:

```cpp
try {
  int age = 15;
  if (age >= 18) {
    cout << "Akses diberikan - Anda sudah cukup tua.";
  } else {
    throw 505;
  }
}
catch (...) {
  cout << "Akses ditolak - Anda harus berusia minimal 18 tahun.\n";
}
```
```
Anda dapat menyalin kode markdown di atas dan menjalankan program C++ di komputer Anda untuk melihat hasilnya.
```