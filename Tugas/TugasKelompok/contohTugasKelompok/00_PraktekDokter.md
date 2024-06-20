## Contoh tugas : Program Manajemen Jadwal Dokter

### Deskripsi Program
Anda diminta untuk membuat program untuk mengelola jadwal dokter di sebuah klinik atau rumah sakit. Program ini harus dapat melakukan operasi seperti menambahkan jadwal dokter baru, menghapus jadwal, mencari jadwal berdasarkan nama dokter atau ID jadwal, mengedit data jadwal, dan menampilkan daftar seluruh jadwal dokter.

### Fungsi-Fungsi Utama
1. **Menambah Jadwal Baru**: Program harus memungkinkan pengguna untuk menambahkan jadwal baru dengan informasi seperti nama dokter, spesialisasi, hari dan jam praktek, dan ID jadwal.
2. **Menghapus Jadwal**: Program harus menyediakan fungsi untuk menghapus jadwal berdasarkan ID jadwal.
3. **Mencari Jadwal**: Program harus memiliki fitur untuk mencari jadwal berdasarkan nama dokter atau ID jadwal.
4. **Mengedit Data Jadwal**: Program harus memungkinkan pengguna untuk mengedit informasi jadwal berdasarkan ID jadwal.
5. **Menampilkan Daftar Jadwal**: Program harus menampilkan daftar semua jadwal dokter yang ada beserta informasi detailnya.

### Struktur Data
1. **Class**: Gunakan class untuk merepresentasikan data jadwal, termasuk atribut seperti nama dokter, spesialisasi, hari dan jam praktek, dan ID jadwal.
2. **Vector atau Array**: Gunakan struktur data dinamis seperti vector untuk menyimpan daftar jadwal.

### Penyimpanan Data
1. **File I/O**: Implementasikan fungsi untuk menyimpan data jadwal ke dalam file dan memuat data jadwal dari file / database.

### Penerapan Materi C++
Pastikan aplikasi yang Anda buat menggunakan semua materi yang telah dipelajari dalam mata kuliah C++, termasuk namun tidak terbatas pada:

1. **Class dan Object**: Implementasikan class `Jadwal` dengan atribut dan metode yang sesuai.
2. **File Input/Output**: Gunakan fungsi file I/O untuk menyimpan dan membaca data jadwal dari file.
3. **Array atau Vector**: Gunakan vector atau array untuk menyimpan dan mengelola daftar jadwal.
4. **Fungsi**: Implementasikan fungsi untuk menambah, menghapus, mencari, mengedit, dan menampilkan data jadwal.
5. **Struktur Kontrol**: Gunakan struktur kontrol seperti `if`, `for`, `while`, dan `switch` untuk mengatur alur program.
6. **Modularitas**: Buat program yang modular dengan memisahkan fungsi-fungsi utama ke dalam fungsi yang terpisah.

### Instruksi Penggunaan
1. **Menambah Jadwal Baru**:
   - Masukkan ID: 1
   - Masukkan nama dokter: Dr. John Doe
   - Masukkan spesialisasi: Kardiologi
   - Masukkan hari praktek: Senin
   - Masukkan jam praktek: 09:00-12:00
2. **Menghapus Jadwal**:
   - Masukkan ID jadwal yang akan dihapus: 1
3. **Mencari Jadwal**:
   - Masukkan nama dokter atau ID jadwal yang akan dicari: Dr. John Doe
   - Hasil pencarian: ID: 1, Nama Dokter: Dr. John Doe, Spesialisasi: Kardiologi, Hari: Senin, Jam: 09:00-12:00
4. **Mengedit Data Jadwal**:
   - Masukkan ID jadwal yang akan diedit: 1
   - Masukkan nama dokter baru: Dr. Jane Smith
   - Masukkan spesialisasi baru: Neurologi
   - Masukkan hari praktek baru: Selasa
   - Masukkan jam praktek baru: 13:00-16:00
5. **Menampilkan Daftar Jadwal**:
   - ID: 1, Nama Dokter: Dr. Jane Smith, Spesialisasi: Neurologi, Hari: Selasa, Jam: 13:00-16:00
   - ID: 2, Nama Dokter: Dr. Alice Johnson, Spesialisasi: Pediatri, Hari: Rabu, Jam: 08:00-11:00

### Contoh Skema Aplikasi
1. **Menu Utama**:
   - 1. Tambah Jadwal
   - 2. Hapus Jadwal
   - 3. Cari Jadwal
   - 4. Edit Jadwal
   - 5. Tampilkan Daftar Jadwal
   - 6. Keluar dan Simpan Data

2. **Menambah Jadwal Baru**:
   - Masukkan ID: 1
   - Masukkan nama dokter: Dr. John Doe
   - Masukkan spesialisasi: Kardiologi
   - Masukkan hari praktek: Senin
   - Masukkan jam praktek: 09:00-12:00

3. **Menghapus Jadwal**:
   - Masukkan ID jadwal yang akan dihapus: 1

4. **Mencari Jadwal**:
   - Masukkan nama dokter atau ID jadwal yang akan dicari: Dr. John Doe
   - Hasil pencarian: ID: 1, Nama Dokter: Dr. John Doe, Spesialisasi: Kardiologi, Hari: Senin, Jam: 09:00-12:00

5. **Mengedit Data Jadwal**:
   - Masukkan ID jadwal yang akan diedit: 1
   - Masukkan nama dokter baru: Dr. Jane Smith
   - Masukkan spesialisasi baru: Neurologi
   - Masukkan hari praktek baru: Selasa
   - Masukkan jam praktek baru: 13:00-16:00

6. **Menampilkan Daftar Jadwal**:
   - ID: 1, Nama Dokter: Dr. Jane Smith, Spesialisasi: Neurologi, Hari: Selasa, Jam: 13:00-16:00
   - ID: 2, Nama Dokter: Dr. Alice Johnson, Spesialisasi: Pediatri, Hari: Rabu, Jam: 08:00-11:00

### Penerapan Syntax C++
Pastikan untuk menerapkan syntax C++ berikut dalam program Anda:

1. **Class dan Object**:
   - Gunakan class untuk mendefinisikan atribut dan metode yang diperlukan untuk data jadwal.
   - Contoh: Class `Jadwal` dengan atribut `id`, `namaDokter`, `spesialisasi`, `hari`, dan `jamPraktek`.

2. **Menambah Jadwal**:
   - Implementasikan fungsi untuk menambahkan jadwal baru ke dalam daftar.
   - Contoh: Fungsi `tambahJadwal` yang menerima input dari pengguna dan menambahkan jadwal baru ke dalam vector.

3. **Menghapus Jadwal**:
   - Implementasikan fungsi untuk menghapus jadwal berdasarkan ID jadwal.
   - Contoh: Fungsi `hapusJadwal` yang mencari dan menghapus jadwal dari vector.

4. **Mencari Jadwal**:
   - Implementasikan fungsi untuk mencari jadwal berdasarkan nama dokter atau ID jadwal.
   - Contoh: Fungsi `cariJadwal` yang mencari dan menampilkan informasi jadwal yang dicari.

5. **Mengedit Data Jadwal**:
   - Implementasikan fungsi untuk mengedit informasi jadwal berdasarkan ID jadwal.
   - Contoh: Fungsi `editJadwal` yang mencari dan mengubah informasi jadwal dalam vector.

6. **Menampilkan Daftar Jadwal**:
   - Implementasikan fungsi untuk menampilkan seluruh daftar jadwal.
   - Contoh: Fungsi `tampilkanDaftarJadwal` yang menampilkan semua jadwal yang tersimpan dalam vector.

7. **File Input/Output**:
   - Implementasikan fungsi untuk menyimpan data jadwal ke dalam file dan memuat data jadwal dari file.
   - Contoh: Fungsi `simpanKeFile` untuk menyimpan data ke file dan `muatDariFile` untuk memuat data dari file.

### Selamat mengerjakan!