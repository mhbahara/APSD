
# Module C++ :

## **Pertemuan 2**

 ### [**01. Intro**](01-intro.md)

 C++ adalah bahasa lintas-platform yang dapat digunakan untuk membuat aplikasi yang berkinerja tinggi(high-performance applications).

- Dikembangkan oleh Bjarne Stroustrup sebagai perluasan dari bahasa C.
- Memberikan para programmer tingkat kontrol yang tinggi terhadap system resources (sumber daya sistem) dan memori.
- Telah diperbarui 4 kali besar pada tahun 2011, 2014, 2017, dan 2020 menjadi C++11, C++14, C++17, C++20.


 ### [**02. Syntax**](/Modul_C++/02-syntax.md)
  Untuk memahami syntax pada C++ perhatikan code berikut:


```C++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

 ### [**03. Output**](/Modul_C++/03-output.md)

 Perintah standar output yang disediakan oleh C++ antara lain:
```
- printf()
- puts()
- putchar()
- cout()
```

 ### [**04. Comment**](/Modul_C++/04-comment.md)

 Komentar dapat digunakan untuk menjelaskan kode C++, dan membuatnya lebih mudah dibaca. Ini juga dapat digunakan untuk mencegah eksekusi saat menguji kode alternatif. Komentar dapat berupa satu baris atau beberapa baris.

```
sebaiknya mana yang dipakai antara komentar Satu Baris atau Multi-baris? 
Tergantung pada Anda ingin menggunakan yang mana. Biasanya, kita menggunakan // untuk komentar pendek, dan /* */ untuk komentar yang lebih panjang.
```
 
 ### [**05. Variable**](/Modul_C++/05-variable.md)

 Variabel adalah suatu tempat menampung data atau konstanta di dalam memori yang memiliki nilai atau data yang dapat berubah-ubah selama proses program. Dalam pemberian nama variabel, terdapat ketentuan-ketentuan antara lain:

1. Tidak boleh ada spasi (contoh: gaji bersih) dan dapat menggunakan tanda garis bawah (_) sebagai penghubung (contoh: gaji_bersih).
2. Tidak boleh diawali oleh angka dan menggunakan operator aritmatika.


 ### [**06. Input**](/Modul_C++/06-input.md)

 Perintah standar input yang disediakan oleh C++ meliputi:

```
- scanf()
- gets()
- cin()
- getch
- getche()
```
 
 ### [**07. Data Type**](/Modul_C++/07-DataType.md)

variable dalam C++ harus memiliki data type yang spesifik:
contoh

```cpp
#include <iostream>
#include <string>

int main() {
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99f;    // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    std::string myText = "Hello"; // String

    std::cout << "Nilai myNum (integer): " << myNum << std::endl;
    std::cout << "Nilai myFloatNum (float): " << myFloatNum << std::endl;
    std::cout << "Nilai myDoubleNum (double): " << myDoubleNum << std::endl;
    std::cout << "Nilai myLetter (char): " << myLetter << std::endl;
    std::cout << "Nilai myBoolean (bool): " << myBoolean << std::endl;
    std::cout << "Nilai myText (string): " << myText << std::endl;

    return 0;
}
```

 ## **Pertemuan 3**
 
 ### [**08. Operator**](/Modul_C++/08-Operator.md)

 Operator merupakan simbol atau karakter yang biasa dilibatkan dalam program, yang digunakan untuk melakukan sesuatu operasi atau manipulasi, seperti penjumlahan, pengurangan, dan lain-lain.
 
 ### [**09. String**](/Modul_C++/09-String.md)

 Operasi string selalu dijumpai didalam bahasa pemrograman, dikarenakan hampir semua bahasa pemrograman menggunakan manual inputnya adalah string, terutama pada pemrograman visualisasi. Pada bab ini akan dibahas beberapa perintah dan fungsi string

 
 ### [**10. Math**](/Modul_C++/10-Math.md)

 C++ Memiliki banyak fungsi yang bisa digunakan untuk menyelesaikan banyak permasalahan matematika.
 
 ### [**11. Booleans**](/Modul_C++/11-Booleans.md)

 Seringkali, dalam pemrograman, Anda akan membutuhkan tipe data yang hanya dapat memiliki salah satu dari dua nilai, seperti:

```
YA / TIDAK
NYALA / MATI
BENAR / SALAH
```
Untuk ini, C++ memiliki tipe data bool, yang dapat mengambil nilai true (1) atau false (0).


 ## **Pertemuan 4**
 
 ### [**12. Condition**](/Modul_C++/12-condition.md)

 Pernyataan Percabangan digunakan untuk memecahkan persoalan untuk mengambil suatu keputusan diantara sekian pernyataan yang ada. Untuk keperluan pengambilan keputusan, C++ menyediakan beberapa perintah akan di bahas pada bab ini.

 ### [**13. Switch**](/Modul_C++/13.switch.md)

 Bentuk dari switch - case merupakan pernyataan yang dirancang khusus untuk menangani pengambilan keputusan yang melibatkan sejumlah atau banyak alternatif penyelesaian. Pernyataan switch - case ini memiliki kegunaan sama seperti if – else bertingkat, tetapi penggunaannya untuk memeriksa data yang bertipe karakter atau integer


 ### [**14. Perulangan**](/Modul_C++/14-WhileLoop.md)

 Operasi perulangan selalu dijumpai didalam bahasa pemrograman, disini akan dibahasa beberapa perintah perulangan.

 ### [**15. Break Continue**](/Modul_C++/15-BreakContinue.md)

 Pernyataan `break` telah dibahas pada pernyataan pengambilan keputusan `switch`. Pernyataan `break` ini berfungsi untuk keluar dari struktur switch. Selain itu pernyataan `break` berfungsi keluar dari perulangan (`for`, `while`, dan `do-while`). Jika pernyataan `break` dikerjakan, maka eksekusi akan dilanjutkan ke pernyataan yang terletak sesudah akhir dari badan perulangan (loop).

 Pernyataan `continue` digunakan untuk mengarahkan eksekusi ke iterasi (proses) berikutnya pada loop yang sama, dengan kata lain mengembalikan proses yang sedang dilaksanakan ke-awal loop lagi, tanpa menjalankan sisa perintah dalam loop tersebut.

 ## **Pertemuan 5**

 ### [**16. Array**](/Modul_C++/16-Array.md)

 Array digunakan untuk menyimpan beberapa nilai dalam satu variabel, daripada mendeklarasikan variabel terpisah untuk setiap nilai.

 Untuk mendeklarasikan sebuah array, tentukan tipe variabel, spesifikasikan nama array diikuti dengan tanda kurung siku dan tentukan jumlah elemen yang akan disimpan:

```cpp
string mobil[4];
```

 ## **Pertemuan 6**
 
 ### [**17. Struct**](/Modul_C++/17-Struct.md)

 Struktur (juga disebut structs) adalah cara untuk mengelompokkan beberapa variabel terkait menjadi satu tempat. Setiap variabel dalam struktur dikenal sebagai anggota struktur.

 Berbeda dengan array, struktur dapat berisi banyak tipe data yang berbeda (int, string, bool, dll.).


 ### [**18. References**](/Modul_C++/18-References.md)

 Dengan menggunakan referensi, Anda dapat memiliki dua nama yang berbeda untuk variabel yang sama, yang dapat berguna dalam beberapa situasi dalam pemrograman C++. Referensi memberikan cara untuk mengakses dan memanipulasi variabel dengan cara yang lebih ekspresif dan jelas dalam kode.

 ### [**19. Pointer**](/Modul_C++/19-Pointer.md)

 Pointer merupakan sebuah variabel yang berisi alamat dari variabel lain. Suatu pointer dimaksudkan untuk menunjukan ke suatu alamat memori sehingga alamat dari suatu variabel dapat diketahui dengan muda

## **Pertemuan 7**

 ### [**20. Fungsi**](/Modul_C++/20-fungsi.md)

 Fungsi (Function) merupakan blok kode yang dirancang untuk melaksanakan tugas khusus. Kegunaan dari fungsi ini adalah untuk (Sianipar, 2012):

 - Mengurangi pengulangan penulisan program yang berulangan atau sama.
 - Program menjadi lebih terstruktur, sehingga mudah dipahami dan dapat lebih dikembangkan.

 Fungsi-fungsi yang sudah kita kenal sebelumnya adalah fungsi `main()`, yang bersifat mutlak, karena fungsi ini program akan dimulai, sebagai contoh yang lainnya fungsi `printf()`, `cout()` yang mempunyai tugas untuk menampilkan informasi atau data kelayar dan masih banyak lainnya.

## **Pertemuan 8**

 ### [**21. OOP**](/Modul_C++/21-OOP.md)
 Object Oriented Programming atau yang lebih dikenal dengan OOP adalah pemrograman yang menitikberatkan kepada objek-objek untuk menyelesaikan tugas atau proses dari program tersebut. Penitikberatkan ini dimaksudkan adanya interaksi pengiriman nilai, pesan, atau pernyataan antar objek (Frieyadie, 2006). Kemudian objek yang merespon hasil dari interaksi tersebut akan membentuk suatu tindakan atau aksi (metode).

## **Pertemuan 9**

 ### [**22. File**](/Modul_C++/22-File.md)

 Sebelum anda bekerja dengan file, sebaiknya anda mengenal tahapan-tahapan terlebih dahulu, diantaranya akan di bahas pada bab ini.

 ### [**23. Exception**](/Modul_C++/23-Exception.md)

 Ketika menjalankan kode C++, berbagai kesalahan dapat terjadi: kesalahan penulisan oleh programmer, kesalahan karena input yang salah, atau hal lain yang tidak terduga.

 Ketika terjadi kesalahan, C++ biasanya akan berhenti dan menghasilkan pesan kesalahan. Istilah teknis untuk ini adalah: C++ akan melemparkan sebuah pengecualian (throw an exception).
 


