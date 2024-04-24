## 2. Pernyataan switch - case

Bentuk dari switch - case merupakan pernyataan yang dirancang khusus untuk menangani pengambilan keputusan yang melibatkan sejumlah atau banyak alternatif penyelesaian. Pernyataan switch - case ini memiliki kegunaan sama seperti if – else bertingkat, tetapi penggunaannya untuk memeriksa data yang bertipe karakter atau integer. Bentuk penulisan perintah ini adalah sebagai berikut:

Setiap pilihan akan dijalankan jika syarat nilai konstanta tersebut dipenuhi, dan default akan dijalankan jika semua cabang di atasnya tidak terpenuhi. Pernyataan `break` menunjukkan bahwa perintah siap keluar dari `switch`. Jika pernyataan ini tidak ada, maka program akan diteruskan ke pilihan-pilihan yang lainnya.

**Contoh-1 switch**

```cpp
#include <iostream>

using namespace std;

int main() {
    int kode;
    cout << "Masukkan Kode Jurusan [11/12/13] : ";
    cin >> kode;
    switch(kode) {
        case 11 :
            cout << "Komputerisasi Akuntansi";
            break;
        case 12 :
            cout << "Manajemen Informatika";
            break;
        case 13 :
            cout << "Tehnik Komputer";
            break;
        default:
            cout << "Anda Salah Memasukan kode";
            break;
    }
    return 0;
}

```

Output yang akan dihasilkan dari program contoh tersebut akan tergantung pada input yang dimasukkan oleh pengguna.
```
Masukkan Kode Jurusan [11/12/13] : 11
Komputerisasi Akuntansi
```

**Contoh-2 switch**

```cpp
#include <iostream>

using namespace std;

int main() {
    char kode;
    cout << "Masukkan Kode Barang [A..C] : ";
    cin >> kode;
    switch(kode) {
        case 'A' :
        case 'a' :
            cout << "Alat Olah Raga";
            break;
        case 'B' :
        case 'b' :
            cout << "Alat Elektronik";
            break;
        case 'C' :
        case 'c' :
            cout << "Alat Masak";
            break;
        default:
            cout << "Anda Salah Memasukan kode";
            break;
    }
    return 0;
}


```

Output yang akan dihasilkan dari program contoh tersebut akan tergantung pada input yang dimasukkan oleh pengguna.
```
Masukkan Kode Barang [A..C] : a
Alat Olah Raga
```

