# References

Membuat Referensi
Variabel referensi adalah "referensi" ke variabel yang sudah ada, dan dibuat dengan operator &:

**Contoh**
```cpp
string food = "Pizza";  // variabel food
string &meal = food;    // referensi ke food
```

Sekarang, kita dapat menggunakan nama variabel food atau nama referensi meal untuk merujuk ke variabel makanan:

**Contoh**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;

  cout << food << "\n";//Output Pizza
  cout << meal << "\n";//Output Pizza
  return 0;
}
```

Dengan menggunakan referensi, Anda dapat memiliki dua nama yang berbeda untuk variabel yang sama, yang dapat berguna dalam beberapa situasi dalam pemrograman C++. Referensi memberikan cara untuk mengakses dan memanipulasi variabel dengan cara yang lebih ekspresif dan jelas dalam kode.

# Alamat Memori

Pada contoh dari halaman sebelumnya, operator & digunakan untuk membuat variabel referensi. Namun, itu juga dapat digunakan untuk mendapatkan alamat memori dari suatu variabel; yang merupakan lokasi di mana variabel disimpan di dalam komputer.

Ketika suatu variabel dibuat di C++, sebuah alamat memori ditetapkan untuk variabel tersebut. Dan ketika kita memberikan nilai pada variabel, nilainya disimpan di alamat memori ini.

Untuk mengaksesnya, gunakan operator &, dan hasilnya akan merepresentasikan di mana variabel disimpan:

**Contoh**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  
  cout << &food; // Outputs 0x6dfed4
  return 0;
}

```

```
Catatan: Alamat memori dalam bentuk heksadesimal (0x..). Perhatikan bahwa Anda mungkin tidak mendapatkan hasil yang sama dalam program Anda.
```

Dan mengapa penting untuk mengetahui alamat memori?
Referensi dan Pointer (yang akan Anda pelajari dalam bab berikutnya) penting dalam C++, karena memberikan kemampuan untuk memanipulasi data di dalam memori komputer - yang dapat mengurangi kode dan meningkatkan kinerja.

Dua fitur ini adalah salah satu hal yang membuat C++ menjadi berbeda dari bahasa pemrograman lainnya, seperti Python dan Java.