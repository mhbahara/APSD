## Bolean C++
Seringkali, dalam pemrograman, Anda akan membutuhkan tipe data yang hanya dapat memiliki salah satu dari dua nilai, seperti:

```YA / TIDAK
NYALA / MATI
BENAR / SALAH
```
Untuk ini, C++ memiliki tipe data bool, yang dapat mengambil nilai true (1) atau false (0).

### Nilai Boolean
Variabel boolean dideklarasikan dengan kata kunci bool dan hanya dapat mengambil nilai true atau false:

**Contoh deklarasi boolean**
```cpp
#include <iostream>
using namespace std;

int main() {
  bool isCodingFun = true;
  bool isFishTasty = false;
  cout << isCodingFun << "\n";
  cout << isFishTasty;
  return 0;
}
```
Dari contoh di atas, Anda dapat melihat bahwa nilai true mengembalikan 1, dan false mengembalikan 0. Namun, lebih umum untuk mengembalikan nilai boolean dengan membandingkan nilai dan variabel


## Ekspresi Boolean

Sebuah ekspresi Boolean mengembalikan nilai boolean yang bisa 1 (true) atau 0 (false).

Ini berguna untuk membangun logika, dan mencari jawaban.

Anda dapat menggunakan operator perbandingan, seperti operator lebih besar dari (>) untuk mengetahui apakah sebuah ekspresi (atau variabel) adalah true atau false:

### Contoh Ekspresi Boolean

```cpp
#include <iostream>
using namespace std;
    int main() {
    int x = 10;
    int y = 9;
    cout << (x > y); // mengembalikan 1 (true), karena 10 lebih besar dari 9
    return 0;
}
```

Atau bahkan lebih mudah:

### Contoh

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << (10 > 9); // mengembalikan 1 (true), karena 10 lebih besar dari 9
    return 0;
}

```

Pada contoh di bawah, kami menggunakan operator sama dengan (==) untuk mengevaluasi sebuah ekspresi:

### Contoh

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    cout << (x == 10);  // mengembalikan 1 (true), karena nilai x sama dengan 10
    return 0;
}

```

### Contoh

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << (10 == 15);  // mengembalikan 0 (false), karena 10 tidak sama dengan 15
    return 0;
}

```

### Contoh Kehidupan Nyata

Mari kita pikirkan sebuah "contoh kehidupan nyata" di mana kita perlu mengetahui apakah seseorang sudah cukup tua untuk memilih.

Pada contoh di bawah, kami menggunakan operator perbandingan >= untuk mengetahui apakah usia (25) lebih besar dari ATAU sama dengan batas usia memilih, yang ditetapkan menjadi 18:

### Contoh

```cpp
#include <iostream>
using namespace std;

int main() {
    int usiaSaya = 25;
    int batasUsiaMemilih = 18;
    cout << (usiaSaya >= batasUsiaMemilih); // mengembalikan 1 (true), artinya orang berusia 25 tahun diizinkan untuk memilih!
    return 0;
}

```

Keren bukan? Pendekatan yang bahkan lebih baik (karena kita sekarang sedang dalam momentum), adalah dengan membungkus kode di atas dalam sebuah pernyataan if...else, sehingga kita dapat melakukan tindakan yang berbeda tergantung pada hasilnya:

### Contoh

```cpp
#include <iostream>
using namespace std;

int main() {
    int usiaSaya = 25;
    int batasUsiaMemilih = 18;

    if (usiaSaya >= batasUsiaMemilih) {
    cout << "Cukup tua untuk memilih!";
    } else {
    cout << "Belum cukup tua untuk memilih.";
    }

    // Output: Cukup tua untuk memilih!
    return 0;
}

```
