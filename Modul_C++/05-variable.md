## Variabel

Variabel adalah suatu tempat menampung data atau konstanta di dalam memori yang memiliki nilai atau data yang dapat berubah-ubah selama proses program. Dalam pemberian nama variabel, terdapat ketentuan-ketentuan antara lain:

1. Tidak boleh ada spasi (contoh: gaji bersih) dan dapat menggunakan tanda garis bawah (_) sebagai penghubung (contoh: gaji_bersih).
2. Tidak boleh diawali oleh angka dan menggunakan operator aritmatika.

Variabel dibagi menjadi dua jenis kelompok, yaitu:

- **Variabel Numerik**
- **Variabel Teks**

### A. Variabel Numerik

Variabel numerik ini dibagi menjadi tiga macam:

1. Bilangan Bulat atau Integer
2. Bilangan Desimal Berpresisi Tunggal atau Floating Point.
3. Bilangan Desimal Berpresisi Ganda atau Double Precision.

### B. Variabel Teks

1. Character (Karakter Tunggal)
2. String (Untuk Rangkaian Karakter)

### C. Deklarasi Variabel

Deklarasi Variabel adalah proses memperkenalkan variabel kepada C++ dan pendeklarasian tersebut bersifat mutlak karena jika tidak diperkenalkan terlebih dahulu maka C++ tidak menerima variabel tersebut. Deklarasi Variabel ini meliputi tipe variabel, seperti integer atau character, dan nama variabel itu sendiri. Setiap kali pendeklarasian variabel harus diakhiri oleh tanda titik koma (;).

#### Tabel 2.3. Deklarasi Variabel

| Tipe Variabel           | Simbol Deklarasi    |
|-------------------------|---------------------|
| Integer                 | Int                 |
| Floating Point          | Float               |
| Double Precision        | Double              |
| Karakter                | Char                |
| Unsigned Integer        | unsigned int        |
| Unsigned Character      | unsigned char       |
| Long Integer            | long int            |
| Unsigned Long Integer   | unsigned long int   |

Bentuk penulisannya:

```
Tipe data nama variabel;
```

Contoh Deklarasi:

```cpp
char nama_mahasiswa[20];
char grade;
float rata_rata;
int nilai;
```

## 2.4. Perintah Keluaran

Perintah standar output yang disediakan oleh C++, di antaranya adalah:

- `printf()`
- `puts()`
- `putchar()`
- `cout()`

Semoga format ini mempermudah pemahaman! Jika Anda memiliki pertanyaan lebih lanjut, jangan ragu untuk bertanya.
