Berikut contoh algoritma/pseudocode untuk Program Manajemen Jadwal Dokter

```javascript
// Kelas Jadwal
class Jadwal:
    // Atribut Jadwal
    id: int
    namaDokter: string
    spesialisasi: string
    hari: string
    jamPraktek: string

    // Konstruktor untuk inisialisasi objek Jadwal
    constructor(id, namaDokter, spesialisasi, hari, jamPraktek):
        self.id = id
        self.namaDokter = namaDokter
        self.spesialisasi = spesialisasi
        self.hari = hari
        self.jamPraktek = jamPraktek

// Fungsi utama untuk menjalankan program
function main():
    // Deklarasi untuk menyimpan daftar jadwal
    daftarJadwal = []

    // Memuat data jadwal dari file
    muatDariFile(daftarJadwal)

    while true:
        // Menampilkan menu utama
        tampilkanMenuUtama()

        // Membaca pilihan pengguna
        pilihan = bacaInput()

        // Switch case untuk menangani pilihan pengguna
        switch pilihan:
            case 1:
                // Tambah Jadwal Baru
                tambahJadwal(daftarJadwal)
            case 2:
                // Hapus Jadwal
                hapusJadwal(daftarJadwal)
            case 3:
                // Cari Jadwal
                cariJadwal(daftarJadwal)
            case 4:
                // Edit Jadwal
                editJadwal(daftarJadwal)
            case 5:
                // Tampilkan Daftar Jadwal
                tampilkanDaftarJadwal(daftarJadwal)
            case 6:
                // Keluar dan Simpan Data
                simpanKeFile(daftarJadwal)
                exit()
            default:
                // Pilihan tidak valid
                print("Pilihan tidak valid. Silakan coba lagi.")

// Fungsi untuk menampilkan menu utama
function tampilkanMenuUtama():
    print("Menu Utama:")
    print("1. Tambah Jadwal")
    print("2. Hapus Jadwal")
    print("3. Cari Jadwal")
    print("4. Edit Jadwal")
    print("5. Tampilkan Daftar Jadwal")
    print("6. Keluar dan Simpan Data")

// Fungsi untuk membaca input pengguna
function bacaInput():
    return input()

// Fungsi untuk menambah jadwal baru
function tambahJadwal(daftarJadwal):
    // Membaca data jadwal baru dari pengguna
    id = input("Masukkan ID: ")
    namaDokter = input("Masukkan nama dokter: ")
    spesialisasi = input("Masukkan spesialisasi: ")
    hari = input("Masukkan hari praktek: ")
    jamPraktek = input("Masukkan jam praktek: ")

    // Membuat objek Jadwal baru
    jadwalBaru = Jadwal(id, namaDokter, spesialisasi, hari, jamPraktek)

    // Menambahkan jadwal baru ke dalam daftar
    daftarJadwal.append(jadwalBaru)

// Fungsi untuk menghapus jadwal
function hapusJadwal(daftarJadwal):
    // Membaca ID jadwal yang akan dihapus
    id = input("Masukkan ID jadwal yang akan dihapus: ")

    // Mencari jadwal berdasarkan ID dan menghapusnya
    for jadwal in daftarJadwal:
        if jadwal.id == id:
            daftarJadwal.remove(jadwal)
            print("Jadwal berhasil dihapus.")
            return
    print("Jadwal tidak ditemukan.")

// Fungsi untuk mencari jadwal
function cariJadwal(daftarJadwal):
    // Membaca nama dokter atau ID jadwal yang akan dicari
    kataKunci = input("Masukkan nama dokter atau ID jadwal yang akan dicari: ")

    // Mencari dan menampilkan jadwal yang sesuai
    for jadwal in daftarJadwal:
        if jadwal.id == kataKunci or jadwal.namaDokter == kataKunci:
            print("ID: ", jadwal.id)
            print("Nama Dokter: ", jadwal.namaDokter)
            print("Spesialisasi: ", jadwal.spesialisasi)
            print("Hari: ", jadwal.hari)
            print("Jam: ", jadwal.jamPraktek)
            return
    print("Jadwal tidak ditemukan.")

// Fungsi untuk mengedit data jadwal
function editJadwal(daftarJadwal):
    // Membaca ID jadwal yang akan diedit
    id = input("Masukkan ID jadwal yang akan diedit: ")

    // Mencari jadwal berdasarkan ID dan mengeditnya
    for jadwal in daftarJadwal:
        if jadwal.id == id:
            jadwal.namaDokter = input("Masukkan nama dokter baru: ")
            jadwal.spesialisasi = input("Masukkan spesialisasi baru: ")
            jadwal.hari = input("Masukkan hari praktek baru: ")
            jadwal.jamPraktek = input("Masukkan jam praktek baru: ")
            print("Jadwal berhasil diupdate.")
            return
    print("Jadwal tidak ditemukan.")

// Fungsi untuk menampilkan daftar jadwal
function tampilkanDaftarJadwal(daftarJadwal):
    for jadwal in daftarJadwal:
        print("ID: ", jadwal.id)
        print("Nama Dokter: ", jadwal.namaDokter)
        print("Spesialisasi: ", jadwal.spesialisasi)
        print("Hari: ", jadwal.hari)
        print("Jam: ", jadwal.jamPraktek)
        print("------------")

// Fungsi untuk menyimpan data ke file
function simpanKeFile(daftarJadwal):
    file = open("jadwal.txt", "w")
    for jadwal in daftarJadwal:
        file.write(jadwal.id + "," + jadwal.namaDokter + "," + jadwal.spesialisasi + "," + jadwal.hari + "," + jadwal.jamPraktek + "\n")
    file.close()

// Fungsi untuk memuat data dari file
function muatDariFile(daftarJadwal):
    try:
        file = open("jadwal.txt", "r")
        for line in file:
            data = line.split(",")
            jadwal = Jadwal(data[0], data[1], data[2], data[3], data[4].strip())
            daftarJadwal.append(jadwal)
        file.close()
    except FileNotFoundError:
        print("File tidak ditemukan, memulai dengan daftar kosong.")
```

### Keterangan:
1. **Kelas `Jadwal`**: Merepresentasikan data jadwal dokter dengan atribut `id`, `namaDokter`, `spesialisasi`, `hari`, dan `jamPraktek`.
2. **Fungsi `main`**: Fungsi utama yang menjalankan program dan menampilkan menu utama.
3. **Fungsi `tampilkanMenuUtama`**: Menampilkan pilihan menu utama kepada pengguna.
4. **Fungsi `bacaInput`**: Membaca input dari pengguna.
5. **Fungsi `tambahJadwal`**: Menambahkan jadwal baru ke dalam daftar.
6. **Fungsi `hapusJadwal`**: Menghapus jadwal berdasarkan ID.
7. **Fungsi `cariJadwal`**: Mencari jadwal berdasarkan nama dokter atau ID.
8. **Fungsi `editJadwal`**: Mengedit data jadwal berdasarkan ID.
9. **Fungsi `tampilkanDaftarJadwal`**: Menampilkan semua jadwal dokter yang ada.
10. **Fungsi `simpanKeFile`**: Menyimpan data jadwal ke file.
11. **Fungsi `muatDariFile`**: Memuat data jadwal dari file.
