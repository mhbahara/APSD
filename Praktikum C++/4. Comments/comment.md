# Comment C++ 

Komentar dapat digunakan untuk menjelaskan kode C++, dan membuatnya lebih mudah dibaca. Ini juga dapat digunakan untuk mencegah eksekusi saat menguji kode alternatif. Komentar dapat berupa satu baris atau beberapa baris.

## 1. Komentar Satu Baris 
Komentar satu baris dimulai dengan dua garis miring ke depan (//).

Setiap teks antara // dan akhir baris diabaikan oleh kompiler (tidak akan dieksekusi).

```cpp
// Ini adalah komentar
cout << "Hello World!";
```

Contoh di bawah ini menggunakan komentar satu baris sebelum baris kode:

```cpp
cout << "Hello World!"; // Ini adalah komentar
```

## 2. Komentar Multi-baris C++ 
Komentar multi-baris dimulai dengan /* dan diakhiri dengan */.

Setiap teks antara /* dan */ akan diabaikan oleh kompiler:

```cpp
/* Kode di bawah ini akan mencetak kata-kata Hello World!
ke layar, dan itu menakjubkan */
cout << "Hello World!";
```
Tips:
```
sebaiknya mana yang dipakai antara komentar Satu Baris atau Multi-baris? 
Tergantung pada Anda ingin menggunakan yang mana. Biasanya, kita menggunakan // untuk komentar pendek, dan /* */ untuk komentar yang lebih panjang.
```