# C++ Syntax

Untuk memahami syntax pada C++ perhatikan code berikut:


```C++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

Penjelasan:

Line 1: `#include <iostream>` adalah sebuah header file library yang memungkinkan kita untuk bekerja dengan objek input dan output, seperti cout (digunakan pada baris 5). Header files menambahkan fungsionalitas ke dalam program C++.

Line 2: `using namespace std` berarti bahwa kita dapat menggunakan nama-nama untuk objek dan variabel dari library standar.

Jangan khawatir jika Anda tidak memahami bagaimana `#include <iostream>` dan `using namespace std` bekerja. Cukup anggap itu sebagai sesuatu yang (hampir) selalu muncul dalam program Anda.

Line 3: Sebuah baris kosong. C++ mengabaikan spasi putih. Tetapi kita menggunakannya untuk membuat kode lebih mudah dibaca.

Line 4: Sesuatu lagi yang selalu muncul dalam program C++ adalah `int main()`. Ini disebut sebagai sebuah fungsi. Semua kode di dalam kurung kurawalnya {} akan dieksekusi.

Line 5: `cout` (dibaca sebagai "see-out") adalah sebuah objek yang digunakan bersama dengan operator sisipan (<<) untuk mengeluarkan/mencetak teks. Dalam contoh kita, itu akan mencetak "Hello World!".

Catatan: Setiap pernyataan C++ diakhiri dengan titik koma (;).

Catatan: Tubuh dari `int main()` juga dapat ditulis sebagai:
```cpp
int main() { 
    cout << "Hello World! "; 
    return 0; 
}
```
Ingatlah: Kompiler mengabaikan spasi putih. Namun, beberapa baris membuat kode lebih mudah dibaca.

Line 6: `return 0` mengakhiri fungsi main.

Line 7: Jangan lupa untuk menambahkan kurung kurawal penutup } untuk benar-benar mengakhiri fungsi main.
